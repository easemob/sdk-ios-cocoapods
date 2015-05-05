/*!
 @header EMChatManagerDefs.h
 @abstract ChatManager相关宏定义
 @author EaseMob Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#ifndef EaseMobClientSDK_EMChatManagerDefs_h
#define EaseMobClientSDK_EMChatManagerDefs_h

#import "commonDefs.h"
#import "EMPushManagerDefs.h"
#import "EMGroupManagerDefs.h"

/*!
 @enum
 @brief 聊天类型
 @constant eMessageBodyType_Text 文本类型
 @constant eMessageBodyType_Image 图片类型
 @constant eMessageBodyType_Video 视频类型
 @constant eMessageBodyType_Location 位置类型
 @constant eMessageBodyType_Voice 语音类型
 @constant eMessageBodyType_File 文件类型
 @constant eMessageBodyType_Command 命令类型
 */
typedef NS_ENUM(NSInteger, MessageBodyType) {
    eMessageBodyType_Text = 1,
    eMessageBodyType_Image,
    eMessageBodyType_Video,
    eMessageBodyType_Location,
    eMessageBodyType_Voice,
    eMessageBodyType_File,
    eMessageBodyType_Command
};

/*!
 @enum
 @brief 聊天消息发送状态
 @constant eMessageDeliveryState_Pending 待发送
 @constant eMessageDeliveryState_Delivering 正在发送
 @constant eMessageDeliveryState_Delivered 已发送, 成功
 @constant eMessageDeliveryState_Failure 已发送, 失败
 */
typedef NS_ENUM(NSInteger, MessageDeliveryState) {
    eMessageDeliveryState_Pending = 0, 
    eMessageDeliveryState_Delivering, 
    eMessageDeliveryState_Delivered, 
    eMessageDeliveryState_Failure
};

/*!
 @brief 消息回执类型
 @constant eReceiptTypeRequest   回执请求
 @constant eReceiptTypeResponse  回执响应
 */
typedef NS_ENUM(NSInteger, EMReceiptType){
    eReceiptTypeRequest  = 0,
    eReceiptTypeResponse,
};

#endif
