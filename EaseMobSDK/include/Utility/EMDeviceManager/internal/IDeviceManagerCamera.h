/*!
 @header IDeviceManagerCamera.h
 @abstract 提供了关于摄像头的一些基础功能
 @author EaseMob Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */
#import <Foundation/Foundation.h>
#import "IDeviceManagerBase.h"

/*!
 @protocol
 @brief 本协议主要用于提供对摄像头的判断, 操作等功能
 @discussion
 */
@protocol IDeviceManagerCamera <IDeviceManagerBase>

@required

#pragma mark - camera support

/*!
 @method
 @brief 检查摄像头是否可用
 @return 摄像头是否可用
 */
- (BOOL)checkCameraAvailability;

@end
