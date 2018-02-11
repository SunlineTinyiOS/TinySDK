//
//  TYGlobal.h
//  Tiny
//
//  Created by xiangfp on 16/3/23.
//  Copyright © 2016年 xiangfp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JavaScriptCore/JSContext.h>
#import "ScriptElement.h"


@protocol TYGlobalDelegate <NSObject>

@optional

-(BOOL)scriptLoad:(JSContext *)jsContext withJS:(NSString *)jsUrl  inTML:(NSString *)tmlUrl;

@end


@interface TYGlobal : NSObject<TYScriptDelegate>

+ (TYGlobal* )defaultGlobal;

@property (nonatomic, assign) id <TYGlobalDelegate> delegate;


@end

