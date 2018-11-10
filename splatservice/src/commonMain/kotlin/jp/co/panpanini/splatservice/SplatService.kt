package jp.co.panpanini.splatservice

import io.ktor.client.HttpClient
import io.ktor.client.request.get
import io.ktor.client.request.url
import kotlinx.coroutines.CoroutineDispatcher
import jp.co.panpanini.splatservice.model.schedule.Schedule
import kotlinx.serialization.json.JSON

internal expect val ApplicationDispatcher: CoroutineDispatcher

class SplatService {
    private val client = HttpClient()
    private val baseUrl = "https://splatoon2.ink"

    suspend fun fetchSchedule(): Schedule {
        val result: String = client.get {
            url("$baseUrl/data/schedules.json")
        }

        return JSON.parse(Schedule.serializer(), result)
    }
}
