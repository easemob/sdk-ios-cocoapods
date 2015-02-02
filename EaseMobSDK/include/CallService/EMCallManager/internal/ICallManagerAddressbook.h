//
//  ICallManagerAddressbook.h
//  EaseMobClientSDK
//
//  Created by Ji Fang on 9/24/14.
//  Copyright (c) 2014 EaseMob. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ICallManagerBase.h"

@protocol IAddressbook;

@protocol ICallManagerAddressbook <ICallManagerBase>

@required
@property (nonatomic, strong) id<IAddressbook> addressbook;

@end
