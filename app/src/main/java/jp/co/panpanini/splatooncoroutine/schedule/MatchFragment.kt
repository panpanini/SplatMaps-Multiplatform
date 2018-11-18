package jp.co.panpanini.splatooncoroutine.schedule

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.fragment.app.Fragment
import jp.co.panpanini.splatservice.SplatViewModel
import jp.co.panpanini.splatservice.model.schedule.Match
import java.text.SimpleDateFormat
import java.util.Date
import jp.co.panpanini.splatooncoroutine.R
import kotlinx.android.synthetic.main.fragment_recycler_view.*

enum class MatchType {
    Regular,
    League,
    Gachi
}

private fun Date.startFormat() = SimpleDateFormat("EEE d HH:mm").format(this)
private fun Date.endFormat() = SimpleDateFormat("HH:mm").format(this)


class MatchFragment: Fragment() {

    companion object {
        private const val TYPE = "type"

        fun create(type: MatchType) = MatchFragment().apply {
            arguments = Bundle().apply {
                putSerializable(TYPE, type)
            }
        }
    }

    private val type : MatchType by lazy {
        arguments!!.getSerializable(TYPE) as MatchType
    }

    private val adapter by lazy {
        val title: (Match) -> String = when (type) {
            MatchType.Regular -> { { getDateFormatString(Date(it.startTime), Date(it.endTime)) } }
            else -> { { "${it.rule.name}\n${getDateFormatString(Date(it.startTime), Date(it.endTime))}" } }
        }

        MatchAdapter(title)
    }


    private val viewModel = SplatViewModel()

    override fun onCreateView(inflater: LayoutInflater, container: ViewGroup?, savedInstanceState: Bundle?): View? {
        return inflater.inflate(R.layout.fragment_recycler_view, container, false)
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        setupBindings()
    }

    private fun setupBindings() {
        swipe_refresh_layout?.isRefreshing = true

        viewModel.observeSchedule { schedule ->
            schedule ?: return@observeSchedule

            val matches = when(type) {

                MatchType.Regular -> schedule.regular
                MatchType.League -> schedule.league
                MatchType.Gachi -> schedule.gachi
            }

            adapter.clearItems()
            adapter.setItems(matches)
            swipe_refresh_layout?.isRefreshing = false
        }

        viewModel.fetchSchedule()
        recycler_view.adapter = adapter

        swipe_refresh_layout?.setOnRefreshListener {
            viewModel.fetchSchedule()
        }
    }

    private fun getDateFormatString(start: Date, end: Date): String {
        return "${start.startFormat()} - ${end.endFormat()}"
    }

}