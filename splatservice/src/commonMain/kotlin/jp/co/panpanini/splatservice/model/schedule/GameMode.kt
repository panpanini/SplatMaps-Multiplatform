package jp.co.panpanini.splatservice.model.schedule

import kotlinx.serialization.Serializable

@Serializable
data class GameMode(
	val name: String,
	val key: String
)
