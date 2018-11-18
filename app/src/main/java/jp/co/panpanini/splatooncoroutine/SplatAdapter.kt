package jp.co.panpanini.splatooncoroutine

import androidx.recyclerview.widget.RecyclerView
import jp.co.panpanini.splatmaps2.SplatViewHolder


abstract class SplatAdapter<in T, VH : SplatViewHolder<T>>: RecyclerView.Adapter<VH>() {

    private val items: MutableList<T> = mutableListOf()

    fun setItems(items: List<T>) {
        //TODO: diffUtil
        val initialSize = this.items.size
        this.items.addAll(items)
        notifyItemRangeInserted(initialSize, this.items.size)
    }

    fun clearItems() {
        val initialSize = items.size
        items.clear()
        notifyItemRangeRemoved(0, initialSize)
    }

    override fun getItemCount() = items.size

    override fun onBindViewHolder(holder: VH, position: Int) {
        holder.bind(items[position])
    }

}