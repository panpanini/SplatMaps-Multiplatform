package jp.co.panpanini.splatservice.dispatcher

import kotlinx.coroutines.*

internal actual val ApplicationDispatcher: CoroutineDispatcher = Dispatchers.Default
