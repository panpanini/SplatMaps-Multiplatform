package jp.co.panpanini.splatservice.model.schedule

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class Match(
    val id: Long,
    @SerialName("start_time")
        val startTime: Long,
    @SerialName("end_time")
        val endTime: Long,
    @SerialName("stage_a")
        val stageA: Stage,
    @SerialName("stage_b")
        val stageB: Stage,
    val rule: Rule,
    @SerialName("game_mode")
        val gameMode: GameMode
)