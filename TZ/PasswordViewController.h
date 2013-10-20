//
//  PasswordViewController.h
//  TZ
//
//  Created by Tong Zhan on 10/19/13.
//  Copyright (c) 2013 Tong Zhan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PasswordViewController : UIViewController <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *oldPasswordInput;
@property (weak, nonatomic) IBOutlet UITextField *passwordInput;
@property (weak, nonatomic) IBOutlet UITextField *confirmPasswordInput;
@property (nonatomic, copy) NSString *passwordCheck;

@end
