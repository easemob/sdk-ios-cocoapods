/*!
 @header EMReceiptReq.h
 @abstract 聊天回执请求
 @author EaseMob Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import "EMReceiptBase.h"

@class EMMessage;

/*!
 @class
 @brief 聊天回执请求
 */
@interface EMReceiptReq : EMReceiptBase

/*!
 @method
 @brief 由消息创建回执请求
 @discussion
 @param message 消息对象
 @result 聊天回执请求实例
 */
+ (EMReceiptReq *)createFromMessage:(EMMessage *)message;

@end
