//
//  ICallManager.h
//  EaseMobClientSDK
//
//  Created by Ji Fang on 9/23/14.
//  Copyright (c) 2014 EaseMob. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ICallManagerCall.h"
#import "ICallManagerHistory.h"
#import "ICallManagerAddressbook.h"
#import "ICallManagerUtil.h"

@protocol ICallManager <ICallManagerCall,
                        ICallManagerAddressbook,
                        ICallManagerHistory,
                        ICallManagerUtil>

@required

@end
