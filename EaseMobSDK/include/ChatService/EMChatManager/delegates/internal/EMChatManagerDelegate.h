/*!
 @header EMChatManagerDelegate.h
 @abstract 关于ChatManager的异步回调内部协议
 @author EaseMob Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>
#import "EMChatManagerChatDelegate.h"
#import "EMChatManagerEncryptionDelegate.h"
#import "EMChatManagerMediaDelegate.h"
#import "EMChatManagerLoginDelegate.h"
#import "EMChatManagerBuddyDelegate.h"
#import "EMChatManagerUtilDelegate.h"
#import "EMChatManagerGroupDelegate.h"
#import "EMChatManagerPushNotificationDelegate.h"

/*!
 @protocol
 @brief 本协议包括：收发消息, 登陆注销, 加密解密, 媒体操作的回调等其它操作
 @discussion
 */
@protocol EMChatManagerDelegate <EMChatManagerChatDelegate,
                                EMChatManagerLoginDelegate, 
                                EMChatManagerEncryptionDelegate,
                                EMChatManagerMediaDelegate,
                                EMChatManagerBuddyDelegate,
                                EMChatManagerUtilDelegate,
                                EMChatManagerGroupDelegate,
                                EMChatManagerPushNotificationDelegate>

@optional

@end
