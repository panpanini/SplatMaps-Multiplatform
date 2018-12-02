package jp.co.panpanini.generator

import org.junit.After
import org.junit.Before
import org.junit.Test

class GeneratorTest {

    var target = ViewModelGenerator()

    @Before
    fun setUp() {
    }

    @After
    fun tearDown() {
    }

    @Test
    fun hoge() {
        target.generate()
    }
}