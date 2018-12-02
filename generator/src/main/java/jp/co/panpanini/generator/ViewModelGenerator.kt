package jp.co.panpanini.generator

import com.google.auto.service.AutoService
import com.squareup.kotlinpoet.ClassName
import com.squareup.kotlinpoet.CodeBlock
import com.squareup.kotlinpoet.FileSpec
import com.squareup.kotlinpoet.FunSpec
import com.squareup.kotlinpoet.KModifier
import com.squareup.kotlinpoet.LambdaTypeName
import com.squareup.kotlinpoet.ParameterSpec
import com.squareup.kotlinpoet.PropertySpec
import com.squareup.kotlinpoet.TypeSpec
import com.squareup.kotlinpoet.asTypeName
import java.io.File
import javax.annotation.processing.AbstractProcessor
import javax.annotation.processing.Processor
import javax.annotation.processing.RoundEnvironment
import javax.lang.model.SourceVersion
import javax.lang.model.element.Element
import javax.lang.model.element.ElementKind
import javax.lang.model.element.TypeElement
import javax.tools.Diagnostic

@AutoService(Processor::class)
class ViewModelGenerator: AbstractProcessor() {

    override fun process(set: MutableSet<out TypeElement>?, roundEnv: RoundEnvironment): Boolean {
        roundEnv.getElementsAnnotatedWith(ViewModel::class.java)
            .forEach {

                val packageName = it.enclosingElement.toString()
                val fileSpec = generate(it).toBuilder()
                    .build()

                val kaptKotlinGeneratedDir = processingEnv.options[KAPT_KOTLIN_GENERATED_OPTION_NAME]
                fileSpec.writeTo(File(kaptKotlinGeneratedDir))
            }

        return true
    }

    override fun getSupportedSourceVersion(): SourceVersion {
        return SourceVersion.latest()
    }

    override fun getSupportedAnnotationTypes(): MutableSet<String> {
        return mutableSetOf(ViewModel::class.java.name)
    }

    fun generate(element: Element): FileSpec {
        val className = element.simpleName.toString()
        val packageName = element.enclosingElement.toString()

        val fileName = "generated_$className"
        val fileBuilder = FileSpec.builder(packageName, fileName)

        val service = ClassName(packageName, "SplatService")

        fileBuilder.apply {
            element.enclosedElements.forEach {
                processingEnv.messager.printMessage(Diagnostic.Kind.WARNING, it.simpleName.toString())
                processingEnv.messager.printMessage(Diagnostic.Kind.WARNING, it.kind.toString())
                processingEnv.messager.printMessage(Diagnostic.Kind.WARNING, it.asType().toString())
                processingEnv.messager.printMessage(Diagnostic.Kind.WARNING, it.toString())
                it.annotationMirrors.forEach { annotation ->
                    processingEnv.messager.printMessage(Diagnostic.Kind.WARNING, annotation.toString())
                }
                processingEnv.messager.printMessage(Diagnostic.Kind.WARNING, "")
            }
        }

//        val observableField = element.enclosedElements.first {
//            it.kind == ElementKind.FIELD
//        }

        // imports
        fileBuilder.apply {
            addImport("jp.co.panpanini", "MutableObservable")
            addImport("jp.co.panpanini.splatservice.model.schedule", "Schedule")
        }

        fileBuilder.apply {
            addType(TypeSpec.classBuilder(fileName)
                .primaryConstructor(
                    FunSpec.constructorBuilder()
                        .addModifiers(KModifier.PRIVATE)
                        .build()
                )
                .addProperty(
                    createServiceProperty(service)
                )
//                .addProperty(
//                    createObservableProperty(ClassName("package", observableField.simpleName.toString()))
//                )
                .addFunction(createObserveFunction("observeSchedule", "schedule"))
                .addFunction(createFetchFunction("fetchSchedule"))
                .addFunction(createRemoveObserveFunction("removeObserver", "schedule"))
                .build()
            )
        }

        return fileBuilder.build()
    }

    private fun createServiceProperty(type: ClassName) = PropertySpec.builder("service", type)
        .addModifiers(KModifier.PRIVATE)
        .initializer("%T()", type)
        .build()

    private fun createObservableProperty(type: ClassName): PropertySpec {
        val mutableProperty = ClassName("jp.co.panpanini", "MutableObservable<${type.simpleName}>")

        return PropertySpec.builder(type.simpleName.toLowerCase(), mutableProperty)
            .addModifiers(KModifier.PRIVATE)
            .build()
    }

    private fun createObserveFunction(name: String, parameterName: String): FunSpec {
        val schedule = ClassName("jp.co.panpanini.model.schedule", "Schedule").asNullable()
        val lambdaType = LambdaTypeName.get(parameters = *arrayOf(schedule), returnType = Unit::class.asTypeName())
        val callbackParam = ParameterSpec.builder("callback", lambdaType)
            .build()
        return FunSpec.builder(name)
            .addParameter(callbackParam)
            .addCode(
                CodeBlock.builder()
                    .addStatement("%N.observe(callback)", parameterName)
                    .build()
            )
            .build()
    }

    private fun createFetchFunction(name: String): FunSpec {
        val scheduleType = ClassName("jp.co.panpanini.model.schedule", "Schedule")
        val schedule = PropertySpec.builder("schedule", scheduleType)
            .initializer("service.fetchSchedule()")
            .build()
        return FunSpec.builder(name)
            .addCode(
                CodeBlock.builder()
                    .beginControlFlow("GlobalScope.apply")
                    .beginControlFlow("launch(ApplicationDispatcher)")
                    .add(CodeBlock.of(schedule.toString()))
                    .beginControlFlow("launch(Dispatchers.Main)")
                    .addStatement("this.schedule.set(schedule)")
                    .endControlFlow()
                    .endControlFlow()
                    .endControlFlow()
                    .build()
            )
            .build()
    }

    private fun createRemoveObserveFunction(name: String, parameterName: String): FunSpec {
        val schedule = ClassName("jp.co.panpanini.model.schedule", "Schedule").asNullable()
        val lambdaType = LambdaTypeName.get(parameters = *arrayOf(schedule), returnType = Unit::class.asTypeName())
        val callbackParam = ParameterSpec.builder("callback", lambdaType)
            .build()
        return FunSpec.builder(name)
            .addParameter(callbackParam)
            .addCode(
                CodeBlock.builder()
                    .addStatement("%N.remove(callback)", parameterName)
                    .build()
            )
            .build()
    }

    companion object {
        const val KAPT_KOTLIN_GENERATED_OPTION_NAME = "kapt.kotlin.generated"
    }
}
