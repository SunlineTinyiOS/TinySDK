//
//  TinyFrameManager.h
//  TinyFrame
//
//  Created by xiangfp on 15/11/5.
//  Copyright © 2015年 Sunline. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TFDocument.h"

@class TFPage;
@interface TFManager : UIViewController

+ (TFManager *)tfManager;

- (void)openFrameWithURL:(NSString *)url;

-(void)didAppearPage;

@property(nonatomic, strong) TFDocument *tfDocument;

@property(nonatomic, strong) TFPage *currentPage;

@end
