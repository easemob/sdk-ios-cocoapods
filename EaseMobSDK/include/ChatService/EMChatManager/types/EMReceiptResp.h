/*!
 @header EMReceiptReq.h
 @abstract 聊天回执响应
 @author EaseMob Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import "EMReceiptBase.h"

@class EMMessage;

/*!
 @class
 @brief 聊天回执响应
 */
@interface EMReceiptResp : EMReceiptBase


/*!
 @property
 @brief 是否是匿名消息回执
 */
@property (assign, nonatomic) BOOL isAnonymous;

/*!
 @method
 @brief 由消息创建回执响应
 @discussion
 @param message 消息对象
 @result 聊天回执响应实例
 */
+ (EMReceiptResp *)createFromMessage:(EMMessage *)message;

@end
