package jp.co.panpanini

import kotlin.properties.Delegates

open class Observable<T> {
    private val observers = mutableListOf<(T?) -> Unit>()

    protected var item: T? by Delegates.observable(null as T?) { _, _, new ->
        observers.forEach {
            it.invoke(new)
        }
    }

    fun observe(callback: (T?) -> Unit) {
        observers += callback
    }

    fun remove(callback: (T?) -> Unit) {
        observers -= callback
    }
}

class MutableObservable<T> : Observable<T>() {
    fun set(value: T) {
        item = value
    }
}