//
//  EMAnonymityHelper.h
//  EaseMobClientSDK
//
//  Created by EaseMob on 9/18/14.
//  Copyright (c) 2014 EaseMob. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EMAnonymityHelper : NSObject

/*!
 @method
 @brief 在匿名群聊中, 想要发起匿名单聊的话, 需要调用此方法生成一个聊天id
 @discussion 当 isAnonymitConversation 为 YES, isGroup 为 NO 的时候, 需要调用此方法生成一个匿名单聊的id
 @param groupID      匿名单聊对象所在的群id
 @param anonymitNick 匿名单聊对象所在的群的昵称
 @result 生成的匿名单聊
 */
+ (NSString *)generateChatterWithGroupID:(NSString *)groupID
                            anonymitNick:(NSString *)anonymitNick;

/*!
 @method
 @brief 将匿名聊天 id 解析成 groupID 和 昵称
 @discussion 当 isAnonymitConversation 为 YES, isGroup 为 NO 的时候, 需要调用此方法将 chatter 解析成 groupID 和 匿名昵称
 @param anonymitChatter 匿名聊天id
 @param outGroupID      解析后的groupid
 @param outAnonymitNick 解析后的匿名昵称
 */
+ (void)parseAnonymitChatter:(NSString *)anonymitChatter
                  outGroupID:(NSString **)outGroupID
             outAnonymitNick:(NSString **)outAnonymitNick;

@end
