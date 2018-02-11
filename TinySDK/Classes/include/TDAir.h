//
//  TDAir.h
//  TinyDebug
//
//  Created by xiangfp on 16/3/22.
//  Copyright © 2016年 Sunline. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TDAir : NSObject

- (void)start;

-(void)debugMsg:(NSString *)msg priority:(NSInteger)priority;

@end
