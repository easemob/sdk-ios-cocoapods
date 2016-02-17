//
//  EMRobot.h
//  EaseMobClientSDK
//
//  Created by EaseMob on 15/6/29.
//  Copyright (c) 2015年 EaseMob. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "commonDefs.h"

@interface EMRobot : NSObject

+ (instancetype) robotWithDictionary:(NSDictionary*)dic EM_DEPRECATED_IOS(2_1_9, 2_2_1, @"deprecated");

/*!
 @property
 @brief robot的username
 */
@property (copy, nonatomic, readonly)NSString *username EM_DEPRECATED_IOS(2_1_9, 2_2_1, @"deprecated");

/*!
 @property
 @brief robot的nickname
 */
@property (copy, nonatomic, readonly)NSString *nickname EM_DEPRECATED_IOS(2_1_9, 2_2_1, @"deprecated");

/*!
 @property
 @brief robot的activated,robot是否可用
 */
@property (assign, nonatomic, readonly)BOOL activated EM_DEPRECATED_IOS(2_1_9, 2_2_1, @"deprecated");


@end
