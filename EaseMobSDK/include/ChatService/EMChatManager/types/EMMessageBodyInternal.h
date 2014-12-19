//
//  EMMessageBodyInternal.h
//  EaseMobClientSDK
//
//  Created by Ji Fang on 5/20/14.
//  Copyright (c) 2014 EaseMob. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EMChatServiceDefs.h"

@protocol IEMChatObject;
@protocol IEMMessageBody;
@class EMMessage;

@interface EMMessageBodyInternal : NSObject {
    id<IEMChatObject> _chatObject;
}

/*!
 @property
 @brief 消息体的类型
 */
@property (nonatomic, readonly) MessageBodyType messageBodyType;

@property (nonatomic, weak) id<IEMMessageBody> messageBody;

/*!
 @property
 @brief 消息体的底层聊天对象
 */
@property (nonatomic, strong, readonly) id<IEMChatObject> chatObject;

/*!
 @property
 @brief 消息体所在的消息对象
 */
@property (nonatomic, weak) EMMessage *message;

/*!
 @method
 @brief 由聊天对象构造消息体对象
 @discussion 派生类需要改写此方法
 @param aChatObject 聊天对象
 @result 消息体对象
 */
- (id)initWithChatObject:(id<IEMChatObject>)aChatObject;

#pragma mark - helper
- (NSString *)messageBodyTypeToString:(MessageBodyType)type;

@end
