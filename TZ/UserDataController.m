//
//  UserDataController.m
//  TZ
//
//  Created by Tong Zhan on 10/19/13.
//  Copyright (c) 2013 Tong Zhan. All rights reserved.
//

#import "UserDataController.h"

@implementation UserDataController

-(id) init{
    if (self=[super init]){
        _username=@"Tong Zhan";
        _password=@"12345678";
        _email=@"tong.zhan@aya.yale.edu";
        _mobile=@"513-260-4054";
        return self;
    }
    return nil;
}
@end
