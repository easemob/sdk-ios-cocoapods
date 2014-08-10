/*!
 @header IChatManagerPushNotification.h
 @abstract 为推送通知提供基础操作
 @author EaseMob Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>
#import "IChatManagerBase.h"

@class EMPushNotificationOptions;

/*!
 @protocol
 @brief 本协议包括：消息推送自定义设置
 @discussion
 */
@protocol IChatManagerPushNotification <IChatManagerBase>

@required
#pragma mark - push notification properties

/*!
 @property
 @brief     消息推送设置
 */
@property (nonatomic, strong, readonly) EMPushNotificationOptions *pushNotificationOptions;

/*!
 @method
 @brief 更新消息推送相关属性配置（同步方法）
 @param options    属性
 @param pError     更新错误信息
 @result    最新的属性配置
 */
- (EMPushNotificationOptions *)updatePushOptions:(EMPushNotificationOptions *)options
                                           error:(EMError **)pError;

/*!
 @method
 @brief 更新消息推送相关属性配置（异步方法）
 @param options    属性
 @discussion
    方法执行完之后，调用[didUpdatePushOptions:error:];
 */
- (void)asyncUpdatePushOptions:(EMPushNotificationOptions *)options;

/*!
 @method
 @brief 更新消息推送相关属性配置(异步方法)
 @param options    属性
 @param completion 回调
 @param aQueue     回调时的线程
 @result
 */
- (void)asyncUpdatePushOptions:(EMPushNotificationOptions *)options
                    completion:(void (^)(EMPushNotificationOptions *options, EMError *error))completion
                       onQueue:(dispatch_queue_t)aQueue;

@end
