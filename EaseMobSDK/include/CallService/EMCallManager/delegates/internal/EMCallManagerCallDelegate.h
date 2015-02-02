//
//  EMCallManagerCallDelegate.h
//  EaseMobClientSDK
//
//  Created by Ji Fang on 9/23/14.
//  Copyright (c) 2014 EaseMob. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "EMCallManagerDelegateBase.h"
#import "EMCallServiceDefs.h"

@class EMCallSession;
@class EMError;
@protocol EMCallManagerCallDelegate <EMCallManagerDelegateBase>

@optional

- (void)callSessionStatusChanged:(EMCallSession *)callSession changeReason:(EMCallStatusChangedReason)reason error:(EMError *)error;

@end
