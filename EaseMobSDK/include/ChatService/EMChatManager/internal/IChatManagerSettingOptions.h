/*!
 @header IChatManagerSettingOptions.h
 @abstract 为ChatManager提供昵称、是否自动登录等配置信息
 @author EaseMob Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>
#import "IChatManagerBase.h"

/*!
 @protocol
 @brief 推送昵称、是否自动登录等配置信息
 */
@protocol IChatManagerSettingOptions <IChatManagerBase>

/*!
 @property
 @brief 当前登陆用户的昵称, 默认为用户名
 */
@property (strong, nonatomic) NSString *nickname;

/*!
 @property
 @brief 下次启动时是否用上次成功登陆的账号登陆
 @discussion
 此属性如果被设置为YES, 会在以下几种情况下被重置为NO:
 1. 用户发起的登出动作;
 2. 用户在别的设备上更改了密码, 导致此设备上自动登陆失败;
 3. 用户的账号被从服务器端删除;
 4. 用户从另一个设备把当前设备上登陆的用户踢出.
 */
@property (nonatomic) BOOL isAutoLoginEnabled;

/*!
 @property
 @brief 开启消息送达通知(默认是不开启的)
 @discussion
 */
- (void)enableDeliveryNotification;

/*!
 @property
 @brief 关闭消息送达通知 (默认是不开启的)
 @discussion
 */
- (void)disableDeliveryNotification;

@end
