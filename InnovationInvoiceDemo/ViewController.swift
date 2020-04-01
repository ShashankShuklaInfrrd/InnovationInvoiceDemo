//
//  ViewController.swift
//  InnovationInvoiceDemo
//
//  Created by INFLAPI108 on 25/02/20.
//  Copyright © 2020 INFLAPI108. All rights reserved.
//

import UIKit
import InfrrdInvoiceFramework
//import BoxSDK

class ViewController: UIViewController, InfrrdPDFDelegate {

    override func viewDidLoad() {
        super.viewDidLoad()
// Do any additional setup after loading the view.
        
//        let client = BoxSDK.getClient(token: "self")
//        client.users.getCurrent { (Result) in
//            switch Result {
//            case let .failure(error):
//            print("Error: \(error)")
//            case let .success(user):
//            print("\(user.name) (\(user.login)) is logged in")
//            
//            }
//        }
    }
    
    func infrrdOCR(_ infrrdOCR: InffrdInvoice!, pdfuploadSuccessForFileWithName filename: String!, andBoxFieldsList boxFieldsList: [BoxFile]!) {
        print(filename!);
    }
    
    @IBAction func didTapButton(_ sender: Any) {
        let uiConfig = INFUIConfig.sharedInstance() as? INFUIConfig
        uiConfig?.saveButtonCornerRadius = CGFloat(10)
        let infrrd = InffrdInvoice.sharedInstance() as InffrdInvoice;
        infrrd.pdfDelegate = self
        let infrrdVC = infrrd.viewControllerForInfrrdInvoice(withBoxToken: "c5vKGrLAwDk5sU8trKS9hURm0zvfuVTw", andAutoCaptureMode: false)
        self.present(infrrdVC!, animated: true, completion: nil)
    }
    

}
