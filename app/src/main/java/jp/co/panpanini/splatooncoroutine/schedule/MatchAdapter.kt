package jp.co.panpanini.splatooncoroutine.schedule

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import com.squareup.picasso.Picasso
import jp.co.panpanini.splatmaps2.SplatViewHolder
import jp.co.panpanini.splatooncoroutine.SplatAdapter
import jp.co.panpanini.splatservice.model.schedule.Match
import kotlinx.android.synthetic.main.view_match.view.*
import jp.co.panpanini.splatooncoroutine.R

class MatchAdapter(private val title: (Match) -> String) : SplatAdapter<Match, MatchViewHolder>() {
    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int)
            = MatchViewHolder.create(parent, title)
}
class MatchViewHolder(view: View, private val title: (Match) -> String): SplatViewHolder<Match>(view) {

    private val titleView = itemView.title

    private val stage1Title = itemView.stage_1_name
    private val stage2Title = itemView.stage_2_name

    private val stage1Image = itemView.stage_1_image
    private val stage2Image = itemView.stage_2_image



    override fun bind(item: Match) {


        titleView.text = title(item)

        stage1Title.text = item.stageA.name

        Picasso.get()
                .load("https://splatoon2.ink/assets/splatnet/${item.stageA.image}")
                .placeholder(R.drawable.stage)
                .into(stage1Image)


        stage2Title.text = item.stageB.name
        Picasso.get()
                .load("https://splatoon2.ink/assets/splatnet/${item.stageB.image}")
                .placeholder(R.drawable.stage)
                .into(stage2Image)
    }


    companion object {
        fun create(parent: ViewGroup, title: (Match) -> String) = MatchViewHolder(
                LayoutInflater.from(parent.context)
                        .inflate(R.layout.view_match, parent, false),
                title
        )
    }
}