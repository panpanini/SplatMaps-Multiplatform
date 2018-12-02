package jp.co.panpanini.splatooncoroutine.schedule

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.fragment.app.Fragment
import androidx.fragment.app.FragmentPagerAdapter
import jp.co.panpanini.splatservice.SplatViewModel
import jp.co.panpanini.splatooncoroutine.R
import kotlinx.android.synthetic.main.fragment_tab.*

class ScheduleFragment: Fragment() {

    private val viewModel = SplatViewModel.INSTANCE

    private val tabs = listOf(MatchType.Regular, MatchType.Gachi, MatchType.League)

    private val adapter : FragmentPagerAdapter by lazy {
        val activity = activity ?: throw IllegalStateException("activity null")
        object : FragmentPagerAdapter(activity.supportFragmentManager) {
            override fun getItem(position: Int) = MatchFragment.create(tabs[position])

            override fun getCount() = tabs.size

            override fun getPageTitle(position: Int): CharSequence? {
                return when (position) {
                    0 -> "Regular"
                    1 -> "Gachi"
                    2 -> "League"
                    else -> ""
                }
            }
        }
    }

    override fun onCreateView(inflater: LayoutInflater, container: ViewGroup?, savedInstanceState: Bundle?): View? {
        return inflater.inflate(R.layout.fragment_tab, container, false)
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        setupBindings()
    }


    private fun setupBindings() {
        activity?.let {
            viewModel.fetchSchedule()

            view_pager.adapter = adapter
            view_pager.offscreenPageLimit = 3
        }
    }

}