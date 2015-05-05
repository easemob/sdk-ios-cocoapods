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
        SDK系统支持的errorCode 是从1000开始, 但是还是会返回HTTP Response Code,
        如果遇到404, 501等ErrorType时, 需要和HTTP的网络请求返回的responseCode进行对比
 @constant EMErrorNotFound                      不存在
 @constant EMErrorServerMaxCountExceeded        数量达到上限（每人最多100条离线消息，群组成员达到上线）
 @constant EMErrorConfigInvalidAppKey           无效的appKey
 @constant EMErrorServerNotLogin                未登录
 @constant EMErrorServerNotReachable            连接服务器失败(Ex. 手机客户端无网的时候, 会返回的error)
 @constant EMErrorServerTimeout                 连接超时(Ex. 服务器连接超时会返回的error)
 @constant EMErrorServerAuthenticationFailure   获取token失败(Ex. 登录时用户名密码错误，或者服务器无法返回token)
 @constant EMErrorServerAPNSRegistrationFailure APNS注册失败 (Ex. 登录时, APNS注册失败会返回的error)
 @constant EMErrorServerDuplicatedAccount       注册失败(Ex. 注册时, 如果用户存在, 会返回的error)
 @constant EMErrorServerInsufficientPrivilege   所执行操作的权限不够(Ex. 非管理员删除群成员时, 会返回的error)
 @constant EMErrorServerOccupantNotExist        操作群组时, 人员不在此群组(Ex. remove群组成员时, 会返回的error)
 @constant EMErrorServerTooManyOperations       短时间内多次发起同一异步请求(Ex. 频繁刷新群组列表, 会返回的error)
 @constant EMErrorAttachmentNotFound            本地未找着附件
 @constant EMErrorAttachmentDamaged             文件被损坏或被修改了
 @constant EMErrorAttachmentUploadFailure       文件上传失败
 @constant EMErrorFileTypeConvertionFailure     文件格式转换失败
 @constant EMErrorFileTypeNotSupported          不支持的文件格式
 @constant EMErrorIllegalURI                    URL非法(内部使用)
 @constant EMErrorMessageInvalid_NULL           无效的消息(为空)
 @constant EMErrorGroupInvalidID_NULL           无效的群组ID(为空)
 @constant EMErrorGroupJoined                   已加入群组
 @constant EMErrorGroupJoinNeedRequired         加入群组需要申请
 @constant EMErrorGroupFetchInfoFailure         获取群组失败
 @constant EMErrorGroupInvalidRequired          无效的群组申请
 @constant EMErrorGroupInvalidSubject_NULL      无效的群主题（为空）
 @constant EMErrorGroupAddOccupantFailure       添加群成员失败
 @constant EMErrorInvalidUsername               无效的username
 @constant EMErrorInvalidUsername_NULL          无效的username(用户名为空)
 @constant EMErrorInvalidUsername_Chinese       无效的用户名(用户名不能是中文)
 @constant EMErrorAudioRecordStoping            调用开始录音方法时，上一个录音正在stoping
 @constant EMErrorAudioRecordDurationTooShort   录音时间过短
 @constant EMErrorAudioRecordNotStarted         录音没有开始
 @constant EMErrorPushNotificationInvalidOption 无效的消息推送设置
 @constant EMErrorRemoveBuddyFromRosterFailure  删除好友失败
 @constant EMErrorAddBuddyToRosterFailure       添加好友失败
 @constant EMErrorHasFetchedBuddyList           获取好友列表成功后, 再次发起好友列表
 @constant EMErrorCallChatterOffline,           对方不在线
 @constant EMErrorCallInvalidSessionId,         无效的通话Id
 @constant EMErrorExisted,                      已存在
 @constant EMErrorInitFailure                   初始化失败
 @constant EMErrorNetworkNotConnected,          网络未连接
 @constant EMErrorFailure                       失败
 @constant EMErrorFeatureNotImplemented         还未实现的功能
 @constant EMErrorRequestRefused                申请失效
 */
typedef NS_ENUM(NSInteger, EMErrorType) {
    //general error
    EMErrorNotFound                 = 404,      //不存在
    EMErrorServerMaxCountExceeded   = 500,      //数量达到上限（每人最多100条离线消息，群组成员达到上线）
    
    //configuration error
    EMErrorConfigInvalidAppKey      = 1000,     //无效的appKey
    
    //server error
    EMErrorServerNotLogin           = 1002,     //未登录
    EMErrorServerNotReachable,                  //连接服务器失败(Ex. 手机客户端无网的时候, 会返回的error)
    EMErrorServerTimeout,                       //连接超时(Ex. 服务器连接超时会返回的error)
    EMErrorServerAuthenticationFailure,         //获取token失败(Ex. 登录时用户名密码错误，或者服务器无法返回token)
    EMErrorServerAPNSRegistrationFailure,       //APNS注册失败 (Ex. 登录时, APNS注册失败会返回的error)
    EMErrorServerDuplicatedAccount,             //注册失败(Ex. 注册时, 如果用户存在, 会返回的error)
    EMErrorServerInsufficientPrivilege,         //所执行操作的权限不够(Ex. 非管理员删除群成员时, 会返回的error)
    EMErrorServerOccupantNotExist,              //操作群组时, 人员不在此群组(Ex. remove群组成员时, 会返回的error)
    EMErrorServerTooManyOperations,             //短时间内多次发起同一操作(Ex. 频繁刷新群组列表, 会返回的error)
    
    //file error
    EMErrorAttachmentNotFound,                  //本地未找着附件
    EMErrorAttachmentDamaged,                   //文件被损坏或被修改了
    EMErrorAttachmentUploadFailure,             //文件上传失败
    EMErrorFileTypeConvertionFailure,           //文件格式转换失败
    EMErrorFileTypeNotSupported,                //不支持的文件格式
    
    EMErrorIllegalURI,                          //URL非法(内部使用)
    
    //message error
    EMErrorMessageInvalid_NULL,                 //无效的消息(为空)
    
    //group error
    EMErrorGroupInvalidID_NULL,                 //无效的群组ID(为空)
    EMErrorGroupJoined,                         //已加入群组
    EMErrorGroupJoinNeedRequired,               //加入群组需要申请
    EMErrorGroupFetchInfoFailure,               //获取群组失败
    EMErrorGroupInvalidRequired,                //无效的群组申请
    EMErrorGroupInvalidSubject_NULL,            //无效的群主题（为空）
    EMErrorGroupAddOccupantFailure,             //添加群成员失败

    //username error
    EMErrorInvalidUsername,                     // 无效的username
    EMErrorInvalidUsername_NULL,                // 无效的用户名(用户名为空)
    EMErrorInvalidUsername_Chinese,             // 无效的用户名(用户名是中文)
    
    //play or record audio error
    EMErrorAudioRecordStoping,                  //调用开始录音方法时，上一个录音正在stoping
    EMErrorAudioRecordDurationTooShort,         //录音时间过短
    EMErrorAudioRecordNotStarted,               //录音没有开始
    
    //push error
    EMErrorPushNotificationInvalidOption,       //无效的消息推送设置
    
    EMErrorRemoveBuddyFromRosterFailure,        //删除好友失败
    EMErrorAddBuddyToRosterFailure,             //添加好友失败
    EMErrorHasFetchedBuddyList,                 //获取好友列表成功后, 再次发起好友列表请求时返回的errorType
    
    //call error
    EMErrorCallChatterOffline,                  //对方不在线
    EMErrorCallInvalidSessionId,                //无效的通话Id
    
    EMErrorExisted,                             //已存在
    EMErrorInitFailure,                         //初始化失败
    EMErrorNetworkNotConnected,                 //网络未连接
    EMErrorFailure,                             //失败
    EMErrorFeatureNotImplemented,               //还未实现的功能
    
    EMErrorRequestRefused,                      //申请失效
    
    EMErrorReachLimit = EMErrorServerMaxCountExceeded,
    EMErrorOutOfRateLimited = EMErrorServerMaxCountExceeded,
    EMErrorGroupOccupantsReachLimit = EMErrorServerMaxCountExceeded,
    EMErrorTooManyLoginRequest = EMErrorServerTooManyOperations,
    EMErrorTooManyLogoffRequest = EMErrorServerTooManyOperations,
    EMErrorPermissionFailure = EMErrorServerInsufficientPrivilege,
    EMErrorIsExist = EMErrorExisted,
    
};

#endif
