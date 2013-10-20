//
//  SettingsViewController.h
//  TZ
//
//  Created by Tong Zhan on 10/19/13.
//  Copyright (c) 2013 Tong Zhan. All rights reserved.
//

#import <UIKit/UIKit.h>
@class UserDataController;

@interface SettingsViewController : UITableViewController <UITableViewDelegate>

@property (nonatomic, strong) UserDataController* dataController;
@property (weak, nonatomic) IBOutlet UILabel *username;
@property (weak, nonatomic) IBOutlet UILabel *email;
@property (weak, nonatomic) IBOutlet UILabel *mobile;
- (IBAction)switchOff:(id)sender;

@end
