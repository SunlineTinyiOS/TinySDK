//
//  TFTabBar.h
//  TinyFrame
//
//  Created by xiangfp on 15/11/10.
//  Copyright © 2015年 Sunline. All rights reserved.
//

#import "TFViewController.h"
#import "TFTabBarContainer.h"
#import <JavaScriptCore/JavaScriptCore.h>


@protocol TFTabBarProtocol <JSExport>

@property(nonatomic, assign) NSInteger selectedIndex;

/*
 * 提供方法设置index的属性.
 */
-(void)selectIndex:(NSInteger) index;



@end

@interface TFTabBar : TFViewController<TFTabBarProtocol>


@property (nonatomic ,assign) UIViewController *currentVC;

@property (nonatomic ,strong)  TFTabBarContainer *barContainer;



@end
