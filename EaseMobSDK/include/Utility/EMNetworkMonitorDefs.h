/*!
 @header EMNetworkMonitorDefs.h
 @abstract 网络状况定义
 @author EaseMob Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#ifndef EMNetworkMonitorDefs_h
#define EMNetworkMonitorDefs_h

/*!
 @enum
 @brief 网络状态
 @constant eConnectionType_None 没有网络连接
 @constant eConnectionType_WWAN 使用蜂窝网络
 @constant eConnectionType_WIFI 使用WIFI网络
 */
typedef enum {
    eConnectionType_None = 0,
    eConnectionType_WWAN,
    eConnectionType_WIFI
}EMConnectionType;

#endif
