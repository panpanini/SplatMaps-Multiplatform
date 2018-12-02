package jp.co.panpanini.splatooncoroutine.schedule

import jp.co.panpanini.generator.ObservableField
import jp.co.panpanini.generator.ViewModel
import jp.co.panpanini.splatservice.model.schedule.Schedule

@ViewModel
interface ScheduleViewModel {

    @ObservableField
    val schedule: Schedule
}