/*!
 @header EMDeviceManagerProximitySensorDelegate.h
 @abstract 当手机靠近耳朵时或者离开耳朵时的回调协议
 @author EaseMob Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */
#import <Foundation/Foundation.h>
#import "EMDeviceManagerDelegateBase.h"

/*!
 @protocol
 @brief 当手机靠近耳朵时或者离开耳朵时的回调协议
 @discussion
 */
@protocol EMDeviceManagerProximitySensorDelegate <EMDeviceManagerDelegateBase>

@optional

/*!
 @method
 @brief 当手机靠近耳朵时或者离开耳朵时的回调方法
 @param isCloseToUser YES为靠近了用户, NO为远离了用户
 @discussion
 @result 
 */
- (void)proximitySensorChanged:(BOOL)isCloseToUser;

@end
