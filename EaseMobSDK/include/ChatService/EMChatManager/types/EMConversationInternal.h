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

- (id)initWithChatter:(NSString *)chatter
              isGroup:(BOOL)isGroup;

@property (weak, nonatomic) id<ConversationDelegate> delegate;
@property (strong, nonatomic) NSString *chatter;
@property (nonatomic) BOOL isGroup;
@property (nonatomic) BOOL enableUnreadMessagesCountEvent;
@property (strong, nonatomic) EMMessage *latestMessage;
@property (nonatomic) NSInteger unreadMessagesCount;

- (void)updateUnreadMessagesCountEventToEnable:(BOOL)isEnable;

//- (BOOL)updateMessageOrDeliveryState:(EMMessage *)message;
- (BOOL)updateMessageWithId:(NSString *)messageId readAcked:(BOOL)readAcked;
- (BOOL)updateMessageWithId:(NSString *)messageId deliveredAcked:(BOOL)deliveredAcked;

- (BOOL)markAllMessagesAsRead:(BOOL)isRead;
- (BOOL)markMessageWithId:(NSString *)messageId asRead:(BOOL)isRead;

- (BOOL)insertMessage:(EMMessage *)message append2Chat:(BOOL)append2Chat;
- (BOOL)insertMessages:(NSArray *)messages append2Chat:(BOOL)append2Chat;

- (BOOL)removeMessageWithId:(NSString *)messageId;
- (NSUInteger)removeMessageWithIds:(NSArray *)messageIds;
- (BOOL)removeMessage:(EMMessage *)message;
- (NSUInteger)removeAllMessages;

- (NSUInteger)loadUnreadMessagesCount;
- (NSArray *)loadAllMessagesFromDB;
- (NSArray *)loadMessagesBefore:(long long)timestamp limit:(NSUInteger)limit;
- (EMMessage *)loadMessageWithId:(NSString *)aMessageId;
- (NSArray *)loadMessagesWithIds:(NSArray *)aMessageIds;
- (EMMessage *)latestMessageFromOthers;


@end
