//
//  EMCallSession.h
//  EaseMobClientSDK
//
//  Created by Ji Fang on 9/23/14.
//  Copyright (c) 2014 EaseMob. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "EMCallServiceDefs.h"

@interface EMCallSession : NSObject

@property (strong, nonatomic, readonly) NSString *sessionId;

@property (strong, nonatomic) NSString *sessionChatter;

@property (nonatomic, readonly) EMCallSessionType type;

@property (nonatomic, readonly) EMCallSessionStatus status;


- (instancetype)initWithType:(EMCallSessionType)type;

@end
