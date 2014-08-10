/*!
 @header EMDeviceManagerLocationDelegate.h
 @abstract GPS相关方法调用完成时的回调
 @author EaseMob Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */
#import <Foundation/Foundation.h>
#import "EMDeviceManagerDelegateBase.h"

@class CLLocation;
@class EMError;

/*!
 @protocol
 @brief GPS相关方法调用完成时的回调
 @discussion
 */
@protocol EMDeviceManagerLocationDelegate <EMDeviceManagerDelegateBase>

@optional

/*!
 @method
 @brief 使用asyncDecodeAddressFromLatitude方法进行经纬度解码完成后的回调
 @param address 解码后的城市街道信息(eg: 中国北京市海淀区中关村彩和坊路)
 @param latitude 经度
 @param longitude 纬度
 @param error 错误信息
 @discussion
 @result
 */
- (void)didDecodeAddress:(NSString *)address
           fromLatitude:(double)latitude
           andLongitude:(double)longitude
                  error:(EMError *)error;

/*!
 @method
 @brief 使用 startUpdatingLocation | refreshLocation 方法定位完成后的回调(GPS位置信息变化时, 会调用该方法)
 @param updatedLocation 当前的位置信息
 @discussion
 @result 
 */
- (void)didUpdateLocation:(CLLocation *)updatedLocation;

/*!
 @method
 @brief 调用 stopUpdatingLocation 方法完成后的回调
 @discussion
 @result
 */
- (void)didStopLocation;

/*!
 @method
 @brief 使用 startUpdatingLocation | refreshLocation 方法定位失败时的回调
 @param error 错误信息
 @discussion
 @result
 */
- (void)didFailToLocateUserWithError:(EMError *)error;

@end
