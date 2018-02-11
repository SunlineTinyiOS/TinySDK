//
//  TPShareConfig.h
//  TinyPlus
//
//  Created by xiangfp on 16/10/12.
//  Copyright © 2016年 Sunline. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TPShareConfig : NSObject

+ (id)instance;

-(void)config;

-(BOOL)handleOpenURL:(NSURL *)url;

-(void)applicationDidBecomeActive;


@end
