/*!
 @header commonDefs.h
 @abstract 用户在线状态及聊天状态定义
 @author EaseMob Inc.
 @version 1.0
 */
#ifndef EaseMobClientSDK_commonDefs_h
#define EaseMobClientSDK_commonDefs_h

#define kSDKPassword   @"password"
#define kSDKUsername   @"username"
#define kSDKToken      @"token"

#define kSDKConfigKeyPushNickname @"PushNickname"
#define kSDKConfigKeyAutoLogin @"AutoLogin"
#define kSDKConfigKeyAutoAcceptGroupInvitation @"AutoAcceptGroupInvitation"
#define kSDKConfigKeyAutoFetchBuddyList @"AutoFetchBuddyList"

#define EM_DEPRECATED_IOS(_easemobIntro, _easemobDep, ...) __attribute__((deprecated("")))

#pragma mark - buddy chatting state
typedef enum {
    eChatState_Stopped = 0,
    eChatState_Composing,
    eChatState_Paused,
}EMChatState;

#pragma mark - buddy online state
typedef enum {
    eOnlineStatus_OffLine = 0,
    eOnlineStatus_Online,
    eOnlineStatus_Away,
    eOnlineStatus_Busy,
    eOnlineStatus_Invisible,
    eOnlineStatus_Do_Not_Disturb
}EMOnlineStatus;

#endif
