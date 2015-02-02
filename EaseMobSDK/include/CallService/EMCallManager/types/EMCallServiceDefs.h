//
//  EMCallServiceDefs.h
//  EaseMobClientSDK
//
//  Created by Ji Fang on 9/24/14.
//  Copyright (c) 2014 EaseMob. All rights reserved.
//

#ifndef EaseMobClientSDK_EMCallServiceDefs_h
#define EaseMobClientSDK_EMCallServiceDefs_h

typedef enum{
    eCallSessionStatusDisconnected      = 0,
    eCallSessionStatusRinging,
    eCallSessionStatusAnswering,
    eCallSessionStatusPausing,
    eCallSessionStatusConnecting,
    eCallSessionStatusConnected,
    eCallSessionStatusAccepted,
}EMCallSessionStatus;

typedef enum{
    eCallSessionTypeAudio       = 0,
    eCallSessionTypeVideo,
    eCallSessionTypeContent,
}EMCallSessionType;

typedef enum{
    eCallReason_Null = 0,
    // for disconnect reason
    eCallReason_Offline,
    eCallReason_NoResponse,
    eCallReason_Hangup,
    eCallReason_Reject,
    eCallReason_Busy,
    // others
}EMCallStatusChangedReason;


#endif
