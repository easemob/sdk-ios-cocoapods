//
//  ICallManagerUtil.h
//  EaseMobClientSDK
//
//  Created by Ji Fang on 9/24/14.
//  Copyright (c) 2014 EaseMob. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ICallManagerBase.h"

@class EMCallSessionStatistics;

@protocol ICallManagerUtil <NSObject>

@required

- (EMCallSessionStatistics *)fetchCallSessionStatistics:(NSString *)sessionId;

@end
