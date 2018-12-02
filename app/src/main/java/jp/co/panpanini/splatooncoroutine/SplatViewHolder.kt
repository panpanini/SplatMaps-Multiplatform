package jp.co.panpanini.splatooncoroutine

import android.view.View
import androidx.recyclerview.widget.RecyclerView
import jp.co.panpanini.generator.ViewModel

abstract class SplatViewHolder<in T>(view: View): RecyclerView.ViewHolder(view) {

    abstract fun bind(item: T)
}