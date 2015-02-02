//
//  ICallManagerBase.h
//  EaseMobClientSDK
//
//  Created by Ji Fang on 9/23/14.
//  Copyright (c) 2014 EaseMob. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol EMCallManagerDelegate;

@protocol ICallManagerBase <NSObject>

@required

/*!
 @method
 @brief 注册一个监听对象到监听列表中
 @discussion 把监听对象添加到监听列表中准备接收相应的事件
 @param delegate 需要注册的监听对象
 @param queue 通知监听对象时的线程
 @result
 */
- (void)addDelegate:(id<EMCallManagerDelegate>)delegate delegateQueue:(dispatch_queue_t)queue;

/*!
 @method
 @brief 从监听列表中移除一个监听对象
 @discussion 把监听对象从监听列表中移除,取消接收相应的事件
 @param delegate 需要移除的监听对象
 @result
 */
- (void)removeDelegate:(id<EMCallManagerDelegate>)delegate;

@end
