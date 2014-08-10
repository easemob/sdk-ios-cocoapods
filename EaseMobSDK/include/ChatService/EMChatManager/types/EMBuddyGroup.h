/*!
 @header EMBuddyGroup.h
 @abstract 好友的分组信息描述类
 @author EaseMob Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */
#import <Foundation/Foundation.h>

/*!
 @class
 @brief 好友的信息描述类
 */
@interface EMBuddyGroup : NSObject

/*!
 @method
 @brief 通过分组名称初始化一个EMBuddyGroup对象
 @param groupName 分组的名称
 @discussion
 @result EMBuddyGroup实例对象
 */
+ (instancetype)buddyGroupWithGroupName:(NSString *)groupName;

/*!
 @property
 @brief 分组名称
 */
@property (copy, nonatomic, readonly)NSString *groupName;

/*!
 @property
 @brief 由NSString对象(username)组成
 */
@property (strong, nonatomic)NSArray *members;

@end
