//
//  ICallManagerCall.h
//  EaseMobClientSDK
//
//  Created by Ji Fang on 9/23/14.
//  Copyright (c) 2014 EaseMob. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ICallManagerBase.h"
#import "EMCallServiceDefs.h"

@class EMCallSession;
@class EMError;
@protocol ICallManagerCall <ICallManagerBase>

@required

@property (nonatomic, strong) NSArray *callSessions;

/*!
 @method
 @brief  语音通话音量，0 ~ 1
 */
@property (nonatomic) float callVolume;

#pragma mark - call audio

/*!
 @method
 @brief  进行实时语音
 @param chatter  要进行语音通话的username（不能与自己通话）
 @param timeout  超时时间（传0，使用SDK默认超时时间）
 @param pError   检查语音通话条件是否具备，不具备则返回错误信息（未进行实际的拨打动作）
 @result         语音通话的实例
 @discussion     需监听[callSessionStatusChanged:changeReason:error:]
 */
- (EMCallSession *)asyncCallAudioWithChatter:(NSString *)chatter timeout:(NSUInteger)timeout error:(EMError **)pError;

/*!
 @method
 @brief  接收方同意语音通话的请求
 @param sessionId 要进行的语音通话的ID
 @result          检查语音通话条件是否具备，不具备则返回错误信息（未进行实际的拨打动作）
 @discussion      需监听[callSessionStatusChanged:changeReason:error:]
 */
- (EMError *)asyncAcceptCallSessionWithId:(NSString *)sessionId;

/*!
 @method
 @brief  发起方或接收方结束通话
 @param sessionId 要进行的语音通话的ID
 @result          检查挂断语音通话条件是否具备，不具备则返回错误信息
 @discussion      需监听[callSessionStatusChanged:changeReason:error:]
 */
- (EMError *)asyncTerminateCallSessionWithId:(NSString *)sessionId reason:(EMCallStatusChangedReason)reason;

@end
