//
//  EMCallSessionStatistics.h
//  EaseMobClientSDK
//
//  Created by dhcdht on 14-11-11.
//  Copyright (c) 2014年 EaseMob. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EMCallSessionStatistics : NSObject

@property (strong, nonatomic) NSString *channelName;    //通道名称
@property (strong, nonatomic) NSString *protocol;       //编码协议
@property (nonatomic) float resolution;                 //分辨率
@property (nonatomic) float rate;                       //码流
@property (nonatomic) float  packetsLost;               //丢包数
@property (nonatomic) float  packetsLoss;               //丢包数
@property (nonatomic) float jitter;                     //抖动
@property (nonatomic) BOOL isEncrypted;                 //是否加密

@end
