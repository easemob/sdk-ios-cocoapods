/*!
 @header IChatManagerBuddy.h
 @abstract 为ChatManager提供添加好友,删除好友接受好友等操作
 @author EaseMob Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>
#import "IChatManagerBase.h"

/*!
 @enum
 @brief 好友关系
 @constant eRelationshipBoth   双向定制
 @constant eRelationshipFrom
 @constant eRelationshipTo
 */

typedef enum{
    eRelationshipBoth  = 0,
    eRelationshipFrom,
    eRelationshipTo,
}EMRelationship;

/*!
 @protocol
 @brief 本协议包括：添加好友,删除好友,接受好友请求等方法
 @discussion
 */
@protocol IChatManagerBuddy <IChatManagerBase>

@required

/*!
 @property
 @brief 获取好友列表(由EMBuddy对象组成)
 */
@property (nonatomic, strong, readonly) NSArray *buddyList;

/*!
 @property
 @brief 获取好友分组信息(由EMBuddyGroup对象组成)
 */
@property (nonatomic, strong, readonly) NSArray *buddyGroupList EM_DEPRECATED_IOS(2_0_3, 2_0_9, "Delete");

/*!
 @property
 @brief 自动获取好友列表(Default is NO), 当为 YES时, 登录成功后会自动调用 asyncFetchBuddyList 方法
 */
@property (assign) BOOL autoFetchBuddyList;

/*!
 @method
 @brief 手动获取好友列表
 @discussion
 @result 好友列表
 */
- (NSArray *)fetchBuddyListWithError:(EMError **)pError;

/*!
 @method
 @brief 手动获取好友列表(异步方法)
 @discussion 好友列表获取完成时, 会调用 didFetchedBuddyList:error(EMChatManagerBuddyDelegate.h 中) 回调方法
 */
- (void *)asyncFetchBuddyList;

/*!
 @method
 @brief 手动获取好友列表(异步方法)
 @discussion
 @param completion 获取好友列表完成后的回调
 @param queue      completion block 回调时的线程
 */
- (void *)asyncFetchBuddyListWithCompletion:(void (^)(NSArray *buddyList, EMError *error))completion
                                    onQueue:(dispatch_queue_t)queue;

#pragma mark - add buddy

/*!
 @method
 @brief 申请添加某个用户为好友
 @discussion
 @param username 需要添加为好友的username
 @param nickname 添加好友后的昵称
 @param message  申请添加好友时的附带信息
 @param pError   错误信息
 @result 好友申请是否发送成功
 */
- (BOOL)addBuddy:(NSString *)username
    withNickname:(NSString *)nickname
         message:(NSString *)message
           error:(EMError **)pError __attribute__((deprecated("")));

/*!
 @method
 @brief 申请添加某个用户为好友
 @discussion
 @param username 需要添加为好友的username
 @param message  申请添加好友时的附带信息
 @param pError   错误信息
 @result 好友申请是否发送成功
 */
- (BOOL)addBuddy:(NSString *)username
         message:(NSString *)message
           error:(EMError **)pError;


/*!
 @method
 @brief 申请添加某个用户为好友,同时将该好友添加到分组中,好友与分组可以多对多
 @discussion
 @param username 需要添加为好友的username
 @param nickname 添加好友后的昵称
 @param message  申请添加好友时的附带信息
 @param groupNames  将好友添加到分组中(groupNames由NSString对象组成)
 @param pError   错误信息
 @result 好友申请是否发送成功
*/
- (BOOL)addBuddy:(NSString *)username
    withNickname:(NSString *)nickname
         message:(NSString *)message
        toGroups:(NSArray *)groupNames
           error:(EMError **)pError __attribute__((deprecated("")));

/*!
 @method
 @brief 申请添加某个用户为好友,同时将该好友添加到分组中,好友与分组可以多对多
 @discussion
 @param username 需要添加为好友的username
 @param message  申请添加好友时的附带信息
 @param groupNames  将好友添加到分组中(groupNames由NSString对象组成)
 @param pError   错误信息
 @result 好友申请是否发送成功
 */
- (BOOL)addBuddy:(NSString *)username
         message:(NSString *)message
        toGroups:(NSArray *)groupNames
           error:(EMError **)pError;

#pragma mark - remove buddy

/*!
 @method
 @brief 将某个用户从好友列表中移除
 @discussion
 @param username 需要移除的好友username
 @param removeFromRemote 是否将自己从对方好友列表中移除
 @param pError   错误信息
 @result 是否移除成功
 */
- (BOOL)removeBuddy:(NSString *)username
   removeFromRemote:(BOOL)removeFromRemote
              error:(EMError **)pError;

#pragma mark - accept buddy request

/*!
 @method
 @brief 接受某个好友发送的好友请求
 @discussion
 @param username 需要接受的好友username
 @param pError   错误信息
 @result 是否接受成功
 */
- (BOOL)acceptBuddyRequest:(NSString *)username
                     error:(EMError **)pError;

#pragma mark - reject buddy request

/*!
 @method
 @brief 拒绝某个好友发送的好友请求
 @discussion
 @param username 需要拒绝的好友username
 @param pError   错误信息
 @result 是否拒绝成功
 */
- (BOOL)rejectBuddyRequest:(NSString *)username
                    reason:(NSString *)reason
                     error:(EMError **)pError;

#pragma mark - block

/*!
 @property
 @brief 黑名单
 */
@property (nonatomic, strong, readonly) NSArray *blockedList;

/*!
 @method
 @brief 获取黑名单（同步方法）
 @discussion
 @param pError 错误信息
 @result 黑名单（username）
 */
- (NSArray *)fetchBlockedList:(EMError **)pError;

/*!
 @method
 @brief 获取黑名单（异步方法）
 @discussion
 函数执行完, 回调[didUpdateBlockedList:]会被触发
 */
- (void)asyncFetchBlockedList;

/*!
 @method
 @brief 获取黑名单（异步方法）
 @param completion     创建完成后的回调
 @param aQueue         回调block时的线程
 @discussion
 获取黑名单成功 判断条件：completion中，error == nil
 函数执行完, 会调用参数completion
 */
- (void)asyncFetchBlockedListWithCompletion:(void (^)(NSArray *blockedList, EMError *error))completion
                                    onQueue:(dispatch_queue_t)aQueue;

- (void)asyncFetchBlockListWithCompletion:(void (^)(NSArray *blockedList, EMError *error))completion
                                    onQueue:(dispatch_queue_t)aQueue EM_DEPRECATED_IOS(2_0_6, 2_0_7, "Use -asyncFetchBlockedListWithCompletion:onQueue:");

/*!
 @method
 @brief 将username的用户加到黑名单（该用户不会被从好友中删除，若想删除，请自行调用删除接口）
 @discussion
 @param username        加入黑名单的用户username
 @param relationship    黑名单关系（both:双向都不接受消息；
                                  from:能给黑名单中的人发消息，接收不到黑名单中的人发的消息;
                                  to:暂不支持）
 @result 是否成功的向服务器发送了block信息（不包含 服务器是否成功将用户加入黑名单）
 */
- (EMError *)blockBuddy:(NSString *)username
           relationship:(EMRelationship)relationship;

/*!
 @method
 @brief 将username的用户移出黑名单
 @discussion
 @param username 移出黑名单的用户username
 @result 是否成功的向服务器发送了unblock信息（不包含 服务器是否成功将用户移出黑名单）
 */
- (EMError *)unblockBuddy:(NSString *)username;

@end
