/*!
 @header EMPushNotificationOptions.h
 @abstract 消息推送参数设置
 @author EaseMob Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>
#import "EMChatServiceDefs.h"

/*!
 @class
 @brief 消息推送参数设置
 */
@interface EMPushNotificationOptions : NSObject

/*!
 @property
 @brief 推送消息显示的昵称
 */
@property (nonatomic, strong) NSString *nickname;

/*!
 @property
 @brief 推送消息显示的类型
 */
@property (nonatomic) EMPushNotificationDisplayStyle displayStyle;

/*!
 @property
 @brief 推送消息是否开启了免打扰模式，YES:开启免打扰；NO:未开启免打扰
 */
@property (nonatomic) BOOL noDisturbing;

/*!
 @property
 @brief 推送消息免打扰模式开始时间，小时，暂时只支持整点（小时）
 */
@property (nonatomic) NSUInteger noDisturbingStartH;

/*!
 @property
 @brief 推送消息免打扰模式开始时间，分钟，暂时不支持
 */
@property (nonatomic) NSUInteger noDisturbingStartM;

/*!
 @property
 @brief 推送消息免打扰模式结束时间，小时，暂时只支持整点（小时）
 */
@property (nonatomic) NSUInteger noDisturbingEndH;

/*!
 @property
 @brief 推送消息免打扰模式结束时间，分钟，暂时不支持
 */
@property (nonatomic) NSUInteger noDisturbingEndM;

@end
