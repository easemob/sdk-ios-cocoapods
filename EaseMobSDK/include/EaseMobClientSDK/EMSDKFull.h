//
//  EMSDKFull.h
//  EaseMobClientSDK
//
//  Created by Ji Fang on 7/22/14.
//  Copyright (c) 2014 EaseMob. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "EMSDKFullHeaders.h"

@interface EMSDKFull : NSObject
{
    id<ICallManager> _callManager;
}

+ (EMSDKFull *)sharedInstance;

/*!
 @property
 @brief 实时通信管理器, 实时语音、实时视频等操作
 */
@property (nonatomic, readonly, strong) id<ICallManager> callManager;

@end
