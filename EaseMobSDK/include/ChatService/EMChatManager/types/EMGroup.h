/*!
 @header EMGroup.h
 @abstract 群组对象类型
 @author EaseMob Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>

#import "EMGroupStyleSetting.h"

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
 @brief 此群组中的所有成员列表
 */
@property (nonatomic, strong, readonly) NSArray  *occupants;

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
 @method
 @brief 创建一个群组实例
 @param groupId          群组ID
 @result 返回新创建的群组
 */
- (id)initWithGroupId:(NSString *)groupId;

@end
