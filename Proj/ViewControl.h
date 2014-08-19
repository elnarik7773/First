//
//  ViewControl.h
//  Proj
//
//  Created by itisioslab on 19.08.14.
//  Copyright (c) 2014 itisioslab. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewControl : UIViewController  <UITableViewDataSource, UITableViewDelegate>
@property (weak, nonatomic) IBOutlet UITextField *TextField;
@property (weak, nonatomic) IBOutlet UITableView *TView;
@property (weak, nonatomic) IBOutlet UITextField *df;

@end
