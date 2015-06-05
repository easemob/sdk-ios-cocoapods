/*!
 @header EMSDKFull.h
 @abstract 客户端基本类
 @author EaseMob Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>
#import "EaseMob.h"

#warning 请使用EaseMob单实例引用callManager. 在下个版本将不会提供EMSDKFull及其头文件. EMSDKFull的功能将整合进EaseMob中.

@protocol ICallManager;

/*!
 @class
 @brief 该类包含了EaseMob和EMCallManager
 @discussion SDK集成进工程后, 最先使用的类, 所有的类对象, 均是通过这个单实例来获取, 示例代码如下:
 [EMSDKFull sharedInstance]
 */
@interface EMSDKFull : NSObject

/*!
 @method
 @brief 获取单实例
 @discussion
 @result EMSDKFull实例对象
 */
+ (EMSDKFull *)sharedInstance;

/*!
 @property
 @brief 实时通信管理器, 实时语音、实时视频等操作
 */
@property (nonatomic, readonly, strong) id<ICallManager> callManager;

@end
