//
//  EMGroupOccuppant.h
//  EaseMobClientSDK
//
//  Created by EaseMob on 10/27/14.
//  Copyright (c) 2014 EaseMob. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EMGroupOccupant : NSObject

@property (copy, nonatomic)NSString *username;
@property (copy, nonatomic)NSString *nickname;

+ (instancetype)occupantWithUsername:(NSString *)username;

+ (instancetype)occupantWithUsername:(NSString *)username
                            nickname:(NSString *)nickname;

@end
