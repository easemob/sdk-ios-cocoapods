/*!
 @header IDeviceManagerProximitySensor.h
 @abstract 为DeviceManager提供距离传感器功能
 @author EaseMob Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>
#import "IDeviceManagerBase.h"

/*!
 @protocol
 @brief 为DeviceManager提供距离传感器功能
 @discussion
 */
@protocol IDeviceManagerProximitySensor <IDeviceManagerBase>

@required

#pragma mark - proximity sensor

/*!
 @property
 @brief 当前设备是否支持距离传感器功能
 */
@property (nonatomic, readonly) BOOL isSupportProximitySensor;

/*!
 @property
 @brief 设备是否正接近用户
 */
@property (nonatomic, readonly) BOOL isCloseToUser;

/*!
 @property
 @brief 当前设备距离传感器功能是否处于打开状态
 */
@property (nonatomic, readonly) BOOL isProximitySensorEnabled;

/*!
 @method
 @brief 打开
 @discussion 若设备不支持, 返回NO
 @result 是否成功打开
 */
- (BOOL)enableProximitySensor;

/*!
 @method
 @brief 关闭
 @discussion 若设备不支持, 返回NO
 @result 是否成功关闭
 */
- (BOOL)disableProximitySensor;

@end
