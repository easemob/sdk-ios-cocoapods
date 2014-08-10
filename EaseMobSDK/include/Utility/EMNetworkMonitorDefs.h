//
//  EMNetworkMonitorDefs.h
//  Reachability
//
//  Created by Ji Fang on 7/24/14.
//  Copyright (c) 2014 Apple Inc. All rights reserved.
//

#ifndef Reachability_EMNetworkMonitorDefs_h
#define Reachability_EMNetworkMonitorDefs_h

typedef enum {
    eConnectionType_None = 0,
    eConnectionType_WWAN,
    eConnectionType_WIFI
}EMConnectionType;

typedef enum {
    eConnectionName_Internet = 0,
    eConnectionName_LocalWIFI,
    eConnectionName_Default = eConnectionName_Internet
}EMConnectionName;

#endif
