package jp.co.panpanini.splatservice.model.schedule

import kotlinx.serialization.Serializable

@Serializable
data class Stage(
	val image: String,
    val name: String,
    val id: String
)
