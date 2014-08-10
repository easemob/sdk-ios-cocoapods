/*!
 @header EMErrorDefs.h
 @abstract EaseMob SDK 错误定义
 @author EaseMob Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#ifndef EaseMobClientSDK_EMErrorDefs_h
#define EaseMobClientSDK_EMErrorDefs_h

/*!
 @enum
 @brief EaseMob SDK 错误定义
 @discussion 
        SDK系统支持的errorCode 是从1001开始, 但是还是会返回HTTP Response Code, 
        如果遇到404, 501等ErrorType时, 需要和HTTP的网络请求返回的responseCode进行对比
 @constant EMErrorServerNotReachable            连接服务器失败(Ex. 手机客户端无网的时候, 会返回的error)
 @constant EMErrorServerTimeout                 连接超时(Ex. 服务器连接超时会返回的error)
 @constant EMErrorServerAuthenticationFailure   用户名或密码错误(Ex. 登录时,用户名密码错误会返回的error)
 @constant EMErrorServerAPNSRegistrationFailure APNS注册失败 (Ex. 登录时, APNS注册失败会返回的error)
 @constant EMErrorServerDuplicatedAccount       注册失败(Ex. 注册时, 如果用户存在, 会返回的error)
 @constant EMErrorServerInsufficientPrivilege   所执行操作的权限不够(Ex. 非管理员删除群成员时, 会返回的error)
 @constant EMErrorServerOccupantNotExist        操作群组时, 人员不在此群组(Ex. remove群组成员时, 会返回的error)
 @constant EMErrorServerTooManyOperations       短时间内多次发起同一异步请求(Ex. 频繁刷新群组列表, 会返回的error)
 @constant EMErrorAttachmentNotFound            本地未找着附件
 @constant EMErrorAttachmentDamaged             文件被损坏或被修改了
 @constant EMErrorIllegalURI                    URL非法(内部使用)
 @constant EMErrorAudioPlayFailure              音频播放失败
 @constant EMErrorAudioRecordFailure            录音失败
 @constant EMErrorTooManyLoginRequest           正在登陆的时候又发起了登陆请求
 @constant EMErrorTooManyLogoffRequest          正在登出的时候又发起了登出请求
 @constant EMErrorGroupInvalidID_NULL           无效的群组ID(为空)
 @constant EMErrorGroupNoExist                  群组不存在
 @constant EMErrorGroupJoined                   已加入群组
 @constant EMErrorGroupJoinNeedRequired         加入群组需要申请
 @constant EMErrorGroupFetchInfoFailure         获取群组失败
 @constant EMErrorGroupInvalidRequired          无效的群组申请
 @constant EMErrorInvalidUsername               无效的username
 @constant EMErrorInvalidUsername_NULL          无效的username(用户名为空)
 @constant EMErrorInvalidUsername_Chinese       无效的用户名(用户名不能是中文)
 @constant EMErrorPushNotificationInvalidOption 无效的消息推送设置
 @constant EMErrorRemoveBuddyFromRosterFailure  删除好友失败
 @constant EMErrorAddBuddyToRosterFailure       添加好友失败
 @constant EMErrorNotFound                      不存在
 @constant EMErrorFeatureNotImplemented         还未实现的功能
 */
typedef enum : NSUInteger {
    EMErrorServerNotLogin     = 1000,       //未登录
    EMErrorServerNotReachable = 1001,       //连接服务器失败(Ex. 手机客户端无网的时候, 会返回的error)
    EMErrorServerTimeout,                   //连接超时(Ex. 服务器连接超时会返回的error)
    EMErrorServerAuthenticationFailure,     //用户名或密码错误(Ex. 登录时,用户名密码错误会返回的error)
    EMErrorServerAPNSRegistrationFailure,   //APNS注册失败 (Ex. 登录时, APNS注册失败会返回的error)
    EMErrorServerDuplicatedAccount,         //注册失败(Ex. 注册时, 如果用户存在, 会返回的error)
    EMErrorServerInsufficientPrivilege,     //所执行操作的权限不够(Ex. 非管理员删除群成员时, 会返回的error)
    EMErrorServerOccupantNotExist,          //操作群组时, 人员不在此群组(Ex. remove群组成员时, 会返回的error)
    EMErrorServerTooManyOperations,         //短时间内多次发起同一异步请求(Ex. 频繁刷新群组列表, 会返回的error)
    
    EMErrorAttachmentNotFound,   //本地未找着附件
    EMErrorAttachmentDamaged,    //文件被损坏或被修改了
    EMErrorIllegalURI,           //URL非法(内部使用)
    EMErrorAudioPlayFailure,     //音频播放失败
    EMErrorAudioRecordFailure,   //录音失败
    EMErrorTooManyLoginRequest,  //正在登陆的时候又发起了登陆请求
    EMErrorTooManyLogoffRequest, //正在登出的时候又发起了登出请求
    
    
    //group error
    EMErrorGroupInvalidID_NULL      = 2000, //无效的群组ID(为空)
    EMErrorGroupNoExist             = 2001, //群组不存在
    EMErrorGroupJoined,                     //已加入群组
    EMErrorGroupJoinNeedRequired,           //加入群组需要申请
    EMErrorGroupFetchInfoFailure,           //获取群组失败
    EMErrorGroupInvalidRequired,            //无效的群组申请
    
    //username error
    EMErrorInvalidUsername              = 3000, //无效的username
    EMErrorInvalidUsername_NULL,                // 无效的用户名(用户名为空)
    EMErrorInvalidUsername_Chinese,             // 无效的用户名(用户名是中文)
    
    EMErrorPushNotificationInvalidOption    = 4000,   //无效的消息推送设置
    
    EMErrorRemoveBuddyFromRosterFailure     = 5000,
    EMErrorAddBuddyToRosterFailure,
    
    EMErrorNotFound                         = 404,   //不存在
    EMErrorFeatureNotImplemented                     //还未实现的功能
} EMErrorType;

#endif
