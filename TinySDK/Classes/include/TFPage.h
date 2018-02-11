//
//  TFPage.h
//  TinyFrame
//
//  Created by xiangfp on 15/11/6.
//  Copyright © 2015年 Sunline. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TFViewController.h"
#import "TinyView.h"
#import "JSWindow.h"
#import <JavaScriptCore/JavaScriptCore.h>
#import "TFTabBar.h"
#import "TFDocument.h"



@protocol TFPageProtocol <JSExport>

@property(nonatomic, assign) UINavigationController *navigator;

@property(nonatomic, retain) NSString *url;

@property(nonatomic, retain) NSString *name;

@property(nonatomic, assign) BOOL hidesStatusBar;

@property(nonatomic, assign) BOOL hidesTabBar;

/**
 *  是否禁用手势返回
 *  默认支持false 启用手势返回
 *  true：禁用手势返回
 */
@property(nonatomic, assign) BOOL disableGestureBack;

/**
 *  错误页面，当网络异常时，显示该页面.
 */
@property(nonatomic, retain) NSString *errorPage;


@property(nonatomic, assign) TFTabBar *tabBar;

-(void)present:(NSDictionary *)opts;

-(void)dismiss:(NSDictionary *)opts;

-(void)setStyle:(NSString *)key :(NSString*)value;

/**
 *  打开抽屉
 *
 *  @param direction 方向  left right
 */
-(void)openDrawer:(NSString *)direction;

/**
 *  关闭抽屉
 */
-(void)closeDrawer;

@end


@interface TFPage : TFViewController<TFPageProtocol, TinyViewDelegate>
{
    /**
     *  是否为tabBar的第一个页面
     */
    BOOL tabBarFirstPage;
    /**
     *  是否为第一次展示。
     *  页面back为否
     */
    BOOL isFirstAppear;
    
}

@property (nonatomic, retain) TinyView *tinyView;

@property(nonatomic, retain) TFDocument *presentDocument;

@property (nonatomic, retain) NSMutableDictionary *dic;

@property (nonatomic, retain) UIView *backgroundView;


-(void)openRequest;

-(void)releaseTiny;


@end



