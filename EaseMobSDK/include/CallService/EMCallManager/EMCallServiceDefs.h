/*!
 @header EMCallServiceDefs.h
 @abstract CallManager相关宏定义
 @author EaseMob Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#ifndef EaseMobClientSDK_EMCallServiceDefs_h
#define EaseMobClientSDK_EMCallServiceDefs_h

/*!
 @enum
 @brief 实时通话状态
 @constant eCallSessionStatusDisconnected 通话没开始
 @constant eCallSessionStatusRinging 通话响铃
 @constant eCallSessionStatusAnswering 通话双方正在协商
 @constant eCallSessionStatusPausing 通话暂停
 @constant eCallSessionStatusConnecting 通话已经准备好，等待接听
 @constant eCallSessionStatusConnected 通话已连接
 @constant eCallSessionStatusAccepted 通话双方同意协商
 */
typedef NS_ENUM(NSInteger, EMCallSessionStatus){
    eCallSessionStatusDisconnected      = 0,
    eCallSessionStatusRinging,
    eCallSessionStatusAnswering,
    eCallSessionStatusPausing,
    eCallSessionStatusConnecting,
    eCallSessionStatusConnected,
    eCallSessionStatusAccepted,
};

/*!
 @enum
 @brief 实时通话类型
 @constant eCallSessionTypeAudio 实时语音
 @constant eCallSessionTypeVideo 实时视频
 @constant eCallSessionTypeContent 暂时不支持的类型
 */
typedef NS_ENUM(NSInteger, EMCallSessionType){
    eCallSessionTypeAudio       = 0,
    eCallSessionTypeVideo,
    eCallSessionTypeContent,
};

/*!
 @enum
 @brief 实时通话结束原因
 @constant eCallReason_Null 正常挂断
 @constant eCallReason_Offline 对方不在线
 @constant eCallReason_NoResponse 对方没有响应
 @constant eCallReason_Hangup 对方挂断
 @constant eCallReason_Reject 对方拒接
 @constant eCallReason_Busy 对方占线
 */
typedef NS_ENUM(NSInteger, EMCallStatusChangedReason){
    eCallReason_Null = 0,
    eCallReason_Offline,
    eCallReason_NoResponse,
    eCallReason_Hangup,
    eCallReason_Reject,
    eCallReason_Busy,
};

#endif
