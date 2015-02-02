//
//  EMConversationInternal.h
//  EaseMobClientSDK
//
//  Created by Ji Fang on 6/17/14.
//  Copyright (c) 2014 EaseMob. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ConversationDelegate <NSObject>

- (void)didUnreadMessagesChanged;

@end

@class EMConversation;
@class EMMessage;

@interface EMConversationInternal : NSObject
{
    __weak id<ConversationDelegate> _delegate;
}

@property (weak, nonatomic) id<ConversationDelegate> delegate;//代理

@property (strong, nonatomic) NSString *chatter;//与谁聊天，用户是username，群组是群ID
@property (nonatomic) BOOL isGroup;//是否是群聊
@property (nonatomic) BOOL enableUnreadMessagesCountEvent;//是否发送未读数改变的回调，默认是YES

@property (strong, nonatomic) EMMessage *latestMessage;//最后一条消息
@property (nonatomic) NSInteger unreadMessagesCount;//未读消息的数量

#pragma mark - lifecycle

/**
 *  初始化internal
 *
 *  @param chatter 与谁聊天的username
 *  @param isGroup 是否是群聊
 *
 *  @return internal实例
 */
- (id)initWithChatter:(NSString *)chatter
              isGroup:(BOOL)isGroup;

#pragma mark - update to database

/**
 *  更新是否发送未读数变化回调的设置
 *
 *  @param isEnable 是否发送未读数变化回调
 */
- (void)updateUnreadMessagesCountEventToEnable:(BOOL)isEnable;

/**
 *  更新指定message的已读回执状态
 *
 *  @param messageId 更新的message的ID
 *  @param readAcked 是否收到已读回执
 *
 *  @return 是否更新成功
 */
- (BOOL)updateMessageWithId:(NSString *)messageId
                  readAcked:(BOOL)readAcked;

/**
 *  更新指定message的已送达回执状态
 *
 *  @param messageId      更新的message的ID
 *  @param deliveredAcked 是否收到已送达回执
 *
 *  @return 是否更新成功
 */
- (BOOL)updateMessageWithId:(NSString *)messageId
             deliveredAcked:(BOOL)deliveredAcked;

/**
 *  将该会话所有消息是否已读都设置为指定的状态
 *
 *  @param isRead 是否已读
 *
 *  @return 是否更新成功
 */
- (BOOL)markAllMessagesAsRead:(BOOL)isRead;

/**
 *  将指定消息是否已读设置为指定的状态
 *
 *  @param isRead 是否已读
 *
 *  @return 是否更新成功
 */
- (BOOL)markMessageWithId:(NSString *)messageId
                   asRead:(BOOL)isRead;

#pragma mark - insert

/**
 *  插入一条新的message
 *
 *  @param message     要插入的message
 *  @param append2Chat 是否发送相关回调，并将数据加入缓存
 *
 *  @return 是否插入成功
 */
- (BOOL)insertMessage:(EMMessage *)message
          append2Chat:(BOOL)append2Chat;

/**
 *  插入一条新的message（该方法主要针对于接收离线消息）
 *
 *  @param message     要插入的message
 *  @param append2Chat 是否发送相关回调，并将数据加入缓存
 *  @param sendEvent   是否发送未读数变化回调
 *
 *  @return 是否插入成功
 */
- (BOOL)insertMessage:(EMMessage *)message
          append2Chat:(BOOL)append2Chat
            sendEvent:(BOOL)sendEvent;

/**
 *  插入多条新的message
 *
 *  @param message     要插入的message的数组，EMMessage类型
 *  @param append2Chat 是否发送相关回调，并将数据加入缓存
 *
 *  @return 是否插入成功
 */
- (BOOL)insertMessages:(NSArray *)messages
           append2Chat:(BOOL)append2Chat;

#pragma mark - remove 

/**
 *  删除指定的message（数据库和缓存中都删掉）
 *
 *  @param messageId 要删除的message的ID
 *
 *  @return 是否删除成功
 */
- (BOOL)removeMessageWithId:(NSString *)messageId;

/**
 *  删除多个指定的message（数据库和缓存中都删掉）
 *
 *  @param messageId 要删除的message的ID数组
 *
 *  @return 删除成功的个数
 */
- (NSUInteger)removeMessageWithIds:(NSArray *)messageIds;

/**
 *  删除指定的message（数据库和缓存中都删掉）
 *
 *  @param message  要删除的message
 *
 *  @return 是否删除成功
 */
- (BOOL)removeMessage:(EMMessage *)message;

/**
 *  删除该会话的所有message（数据库和缓存中都删掉）
 *
 *  @return 删除成功的个数
 */
- (NSUInteger)removeAllMessages;

#pragma mark - load

/**
 *  获取未读个数
 *
 *  @return 未读数
 */
- (NSUInteger)loadUnreadMessagesCount;

/**
 *  从数据库中获取该会话的所有message
 *
 *  @return EMMessage的数组
 */
- (NSArray *)loadAllMessagesFromDB;

/**
 *  获取某个时间点以前的指定条数的message
 *
 *  @param timestamp 某个时间点（秒级）
 *  @param limit     获取条数
 *
 *  @return EMMessage的数组
 */
- (NSArray *)loadMessagesBefore:(long long)timestamp
                          limit:(NSUInteger)limit;

/**
 *  根据messageId获取message
 *
 *  @param aMessageId 要获取的message的ID
 *
 *  @return EMMessage的实例
 */
- (EMMessage *)loadMessageWithId:(NSString *)aMessageId;

/**
 *  根据多个messageId获取多个message
 *
 *  @param aMessageIds 要获取的message的ID数组
 *
 *  @return EMMessage的实例
 */
- (NSArray *)loadMessagesWithIds:(NSArray *)aMessageIds;

/**
 *  获取不是自己发送的最后一条消息
 *
 *  @return EMMessage的实例
 */
- (EMMessage *)latestMessageFromOthers;


@end
