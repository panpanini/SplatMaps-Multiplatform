package jp.co.panpanini.splatservice

import jp.co.panpanini.MutableObservable
import jp.co.panpanini.splatservice.model.schedule.Schedule
import jp.co.panpanini.splatservice.dispatcher.ApplicationDispatcher
import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.launch


class SplatViewModel private constructor() {
    private val service = SplatService()

    //TODO: Disposable
    private val schedule = MutableObservable<Schedule>()

    fun observeSchedule(callback: (Schedule?) -> Unit) {
        schedule.observe(callback)
    }

    fun fetchSchedule() {
        GlobalScope.apply {
            launch(ApplicationDispatcher) {
                val scheduleVal = service.fetchSchedule()
                launch(Dispatchers.Main) {
                    schedule.set(scheduleVal)
                }
            }
        }
    }

    fun removeObserver(callback: (Schedule?) -> Unit) {
        schedule.remove(callback)
    }

    companion object {
        val INSTANCE = SplatViewModel()
    }
}