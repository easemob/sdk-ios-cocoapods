/*!
 @header EMChatManagerDebugDelegate.h
 @abstract 关于ChatManager中提示错误信息的回调
 @author EaseMob Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>

@protocol EMChatManagerDebugDelegate <EMChatManagerDelegateBase>
@optional
- (void)didReceivePromptStr:(NSString *)aPromptStr;
@end
