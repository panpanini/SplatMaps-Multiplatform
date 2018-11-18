package jp.co.panpanini.splatservice

import jp.co.panpanini.MutableObservable
import jp.co.panpanini.splatservice.model.schedule.Schedule
import jp.co.panpanini.splatservice.dispatcher.ApplicationDispatcher
import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.launch


class SplatViewModel {
    private val service = SplatService()

    //TODO: Disposable
    private val schedule = MutableObservable<Schedule>()

    fun observeSchedule(callback: (Schedule?) -> Unit) {
        schedule.observe(callback)
    }

    fun fetchSchedule() {
        GlobalScope.apply {
            launch(ApplicationDispatcher) {
                launch(Dispatchers.Main) {
                    schedule.set(service.fetchSchedule())
                }
            }
        }
    }
}