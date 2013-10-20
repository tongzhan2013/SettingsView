//
//  EmailViewController.h
//  TZ
//
//  Created by Tong Zhan on 10/19/13.
//  Copyright (c) 2013 Tong Zhan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EmailViewController : UIViewController <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *emailInput;

@end
