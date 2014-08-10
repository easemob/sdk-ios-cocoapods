/*!
 @header EMChatManagerPushNotificationDelegate.h
 @abstract 为推送通知提供基础操作
 @author EaseMob Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>
#import "EMChatManagerDelegateBase.h"

@class EMPushNotificationOptions;
@class EMError;

@protocol EMChatManagerPushNotificationDelegate <EMChatManagerDelegateBase>

@optional

- (void)didUpdatePushOptions:(EMPushNotificationOptions *)options error:(EMError *)error;

@end
