//
//  EMCallSessionDelegate.h
//  EaseMobClientSDK
//
//  Created by dhcdht on 14-10-28.
//  Copyright (c) 2014年 EaseMob. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "EMCallServiceDefs.h"

@class EMCallSession;
@class EMError;

@protocol EMCallSessionDelegate <NSObject>

@optional
- (void)callSession:(EMCallSession *)callSession statusChanged:(EMCallSessionStatus)status changeReason:(EMCallStatusChangedReason)reason error:(EMError *)error;

@end
