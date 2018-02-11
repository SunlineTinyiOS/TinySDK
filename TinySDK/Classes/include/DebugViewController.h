
//
//  DebugViewController.h
//  view
//
//  Created by 兖志飞 on 16/8/18.
//  Copyright © 2016年 yzf. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DebugViewController : UIViewController

- (void)reloadView:(id)dic;
+ (DebugViewController * )defaultManager;

typedef void (^DebugViewBlock)();
@property (nonatomic , strong) DebugViewBlock DebugViewBlock;

@end
