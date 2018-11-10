//
//  ViewController.swift
//  SplatMaps
//
//  Created by panpanini on 2018/11/10.
//  Copyright © 2018 panpanini. All rights reserved.
//

import UIKit
import splatservice

class ViewController: UIViewController {
    
    @IBOutlet weak var label: UILabel!
    let viewModel = SplatViewModel.init()

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        
        viewModel.observeSchedule { (schedule) -> KotlinUnit in
            guard let schedule = schedule else { return KotlinUnit.init() }
            
            self.label.text = schedule.gachi[0].stageA.name
            
            NSLog(schedule.debugDescription)
            
            return KotlinUnit.init()
        }
        
        viewModel.fetchSchedule()
    }


}

