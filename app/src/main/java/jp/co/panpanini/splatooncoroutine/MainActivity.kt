package jp.co.panpanini.splatooncoroutine

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import jp.co.panpanini.splatservice.SplatViewModel
import kotlinx.android.synthetic.main.activity_main.*

class MainActivity : AppCompatActivity() {

    private val viewModel = SplatViewModel()

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        viewModel.observeSchedule {
            it ?: return@observeSchedule
            text_view.text = it.toString()
        }

        viewModel.fetchSchedule()
    }
}
