package jp.co.panpanini.splatservice.model.schedule

import kotlinx.serialization.Serializable

@Serializable
data class Schedule(
    val gachi: List<Match>,
    val league: List<Match>,
    val regular: List<Match>
)
