//
//  EMDeviceManagerNetworkDelegate.h
//  EaseMobClientSDK
//
//  Created by Ji Fang on 7/25/14.
//  Copyright (c) 2014 EaseMob. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EMNetworkMonitorDefs.h"

@protocol EMDeviceManagerNetworkDelegate <NSObject>

@optional
- (void)didConnectionChanged:(EMConnectionType)connectionType;

@end
