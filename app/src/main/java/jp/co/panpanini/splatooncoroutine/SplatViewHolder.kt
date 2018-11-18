package jp.co.panpanini.splatmaps2

import android.view.View
import androidx.recyclerview.widget.RecyclerView

abstract class SplatViewHolder<in T>(view: View): RecyclerView.ViewHolder(view) {

    abstract fun bind(item: T)
}