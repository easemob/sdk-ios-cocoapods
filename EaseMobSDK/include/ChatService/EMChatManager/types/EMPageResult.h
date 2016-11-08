//
//  EMPageResult.h
//  EaseMobClientSDK
//
//  Created by XieYajie on 29/10/2016.
//  Copyright © 2016 EaseMob. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EMPageResult : NSObject

/*!
 @property
 @brief 返回的条数
 */
@property (nonatomic) NSInteger count;

/*!
 @property
 @brief 返回的结果
 */
@property (strong, nonatomic) NSArray *list;

- (instancetype)initWithCount:(NSInteger)aCount
                         list:(NSArray *)aList;

@end
