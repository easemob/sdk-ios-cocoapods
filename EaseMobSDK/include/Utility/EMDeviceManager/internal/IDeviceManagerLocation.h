/*!
 @header IDeviceManagerLocation.h
 @abstract 此协议包括获取GPS定位信息,并将GPS定位信息解码成城市街道信息
 @author EaseMob Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */
#import <Foundation/Foundation.h>
#import "IDeviceManagerBase.h"
#import <CoreLocation/CLLocation.h>

/*!
 @protocol
 @brief 此协议包括获取GPS定位信息,并将GPS定位信息解码成城市街道信息
 @discussion
 */
@protocol IDeviceManagerLocation <IDeviceManagerBase>

@required

#pragma mark - location service

/*!
 @property
 @brief GPS服务是否可用
 */
@property (nonatomic, readonly) BOOL isLocationServicesEnabled;

/*!
 @property
 @brief GPS返回的最后一次位置信息
 */
@property (nonatomic, readonly) CLLocation *lastLocation;

/*!
 @method
 @brief 开始GPS定位
 @discussion
 @result
 */
- (void)startUpdatingLocation;

/*!
 @method
 @brief 停止GPS定位
 @discussion
 @result
 */
- (void)stopUpdatingLocation;

/*!
 @method
 @brief 刷新用户的当前位置信息(重新通过GPS去获取)
 @discussion
 @result
 */
- (void)refreshLocation;

/*!
 @method
 @brief 将经纬度信息解码为城市街道信息(同步方法, 如果在主线程中使用, 会阻塞主线程)暂时只支持中国的火星坐标, 你懂的
 @param latitude 经度
 @param longitude 纬度
 @param pError 错误信息
 @discussion
 @result 解码后的城市街道信息(eg: 中国北京市海淀区中关村彩和坊路)
 */
- (NSString *)decodeAddressFromLatitude:(double)latitude
                           andLongitude:(double)longitude
                                  error:(EMError **)pError;

/*!
 @method
 @brief 将经纬度信息解码为城市街道信息(异步方法, 解码完成后, 会调用didDecodeAddress 回调方法)暂时只支持中国的火星坐标, 你懂的
 @param latitude 经度
 @param longitude 纬度
 @discussion
 @result
 */
- (void)asyncDecodeAddressFromLatitude:(double)latitude
                          andLongitude:(double)longitude;

/*!
 @method
 @brief 将经纬度信息解码为城市街道信息(异步方法)暂时只支持中国的火星坐标, 你懂的
 @param latitude 经度
 @param longitude 纬度
 @param completion 解码完成后的回调block
 @param queue 回调block时的线程
 @discussion
 @result
 */
- (void)asyncDecodeAddressFromLatitude:(double)latitude
                          andLongitude:(double)longitude
                            completion:(void (^)(NSString *address, EMError *))completion
                               onQueue:(dispatch_queue_t)queue;

/*!
 @method
 @brief	世界标准地理坐标(WGS-84) 转换成 中国国测局地理坐标（GCJ-02）<火星坐标>
    ####只在中国大陆的范围的坐标有效，以外直接返回世界标准坐标
 @param 	location 	世界标准地理坐标(WGS-84)
 @return	中国国测局地理坐标（GCJ-02）<火星坐标>
 */
+ (CLLocationCoordinate2D)wgs84ToGcj02:(CLLocationCoordinate2D)location;

/*!
 @method
 @brief	中国国测局地理坐标（GCJ-02） 转换成 世界标准地理坐标（WGS-84）
    ####此接口有1－2米左右的误差，需要精确定位情景慎用
 @param 	location 	中国国测局地理坐标（GCJ-02）
 @return	世界标准地理坐标（WGS-84）
 */
+ (CLLocationCoordinate2D)gcj02ToWgs84:(CLLocationCoordinate2D)location;

/*!
 @method
 @brief	世界标准地理坐标(WGS-84) 转换成 百度地理坐标（BD-09)
 @param 	location 	世界标准地理坐标(WGS-84)
 @return	百度地理坐标（BD-09)
 */
+ (CLLocationCoordinate2D)wgs84ToBd09:(CLLocationCoordinate2D)location;

/*!
 @method
 @brief	中国国测局地理坐标（GCJ-02）<火星坐标> 转换成 百度地理坐标（BD-09)
 @param 	location 	中国国测局地理坐标（GCJ-02）<火星坐标>
 @return	百度地理坐标（BD-09)
 */
+ (CLLocationCoordinate2D)gcj02ToBd09:(CLLocationCoordinate2D)location;

/*!
 @method
 @brief	百度地理坐标（BD-09) 转换成 中国国测局地理坐标（GCJ-02）<火星坐标>
 @param 	location 	百度地理坐标（BD-09)
 @return	中国国测局地理坐标（GCJ-02）<火星坐标>
 */
+ (CLLocationCoordinate2D)bd09ToGcj02:(CLLocationCoordinate2D)location;

/*!
 @method
 @brief	百度地理坐标（BD-09) 转换成 世界标准地理坐标（WGS-84）
    ####此接口有1－2米左右的误差，需要精确定位情景慎用
 @param 	location 	百度地理坐标（BD-09)
 @return	世界标准地理坐标（WGS-84）
 */
+ (CLLocationCoordinate2D)bd09ToWgs84:(CLLocationCoordinate2D)location;

@end
