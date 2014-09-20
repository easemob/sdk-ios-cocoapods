/*!
 @header EMGroup.h
 @abstract 群组对象类型
 @author EaseMob Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>

#import "EMGroupStyleSetting.h"
#import "EMChatServiceDefs.h"

typedef enum{
    eGroupOccupantListNone     = 0,    //全部成员（不包含黑名单）
    eGroupOccupantListOwner,           //所有者
    eGroupOccupantListAdmin,           //管理者
    eGroupOccupantListMember,          //成员
    eGroupOccupantListBan,             //黑名单
}EMGroupOccupantListType;

@class EMError;

/*!
 @class
 @brief 聊天消息类
 */
@interface EMGroup : NSObject

/*!
 @property
 @brief 群组ID
 */
@property (nonatomic, strong, readonly) NSString *groupId;

/*!
 @property
 @brief 群组的主题
 */
@property (nonatomic, strong, readonly) NSString *groupSubject;

/*!
 @property
 @brief 群组的描述
 */
@property (nonatomic, strong, readonly) NSString *groupDescription;

/*!
 @property
 @brief 群组的实际总人数
 */
@property (nonatomic, readonly) NSInteger groupOccupantsCount;

/*!
 @property
 @brief 群组的在线人数
 */
@property (nonatomic, readonly) NSInteger groupOnlineOccupantsCount;

/*!
 @property
 @brief 群组的所有者列表
 @discussion
        群组的所有者不止一人,可以通过动态更改群组成员的角色而成为群组的所有者
 */
@property (nonatomic, strong, readonly) NSArray  *owners;

/*!
 @property
 @brief 群组的管理员列表
 @discussion
        群组的管理员不止一人,可以通过动态更改群组成员的角色而成为群组的管理员
 */
@property (nonatomic, strong, readonly) NSArray  *admins;

/*!
 @property
 @brief 群组的普通成员列表
 */
@property (nonatomic, strong, readonly) NSArray  *members;

/*!
 @property
 @brief 此群组黑名单中的成员列表
 */
@property (nonatomic, strong, readonly) NSArray  *bans;

/*!
 @property
 @brief 此群组中的所有成员列表(owners, members, bans)
 */
@property (nonatomic, strong, readonly) NSArray  *occupants EM_DEPRECATED_IOS(2_0_0, 2_0_8, "不再提供该属性");

/*!
 @property
 @brief 此群组的密码
 */
@property (nonatomic, strong, readonly) NSString *password;

/*!
 @property
 @brief 此群是否为公开群组
 */
@property (nonatomic, readonly) BOOL isPublic;

/*!
 @property
 @brief  群组属性配置
 */
@property (nonatomic, strong, readonly) EMGroupStyleSetting *groupSetting;

/*!
 @property
 @brief  此群组是否接收推送通知
 */
@property (nonatomic, readonly) BOOL isPushNotificationEnabled;

/*!
 @property
 @brief  此群组是否被屏蔽
 */
@property (nonatomic, readonly) BOOL isBlocked;

/*!
 @method
 @brief 创建一个群组实例
 @param groupId          群组ID
 @result 返回新创建的群组
 */
- (id)initWithGroupId:(NSString *)groupId;

@end
