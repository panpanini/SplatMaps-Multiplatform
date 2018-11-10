package jp.co.panpanini.splatservice.model.schedule

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class Rule(
	val name: String,
	val key: String,
    @SerialName("multiline_name")
	val multilineName: String
)
