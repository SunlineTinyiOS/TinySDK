//
//  Tml.h
//  Tiny
//
//  Created by  on 12-7-20.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "Window.h"
#import "TinyView.h"
#import <JavaScriptCore/JSContext.h>


#define kAnimationTime  0.10f
#define DefaultVisible __attribute__((visibility ("default")))

DefaultVisible static NSString* const kTmlDidFinishedPushNotificationKey = @"TmlDidFinishedPushNotificationKey";
DefaultVisible static NSString* const kTmlDidFinishedPushUserInfoFromKey = @"from";
DefaultVisible static NSString* const kTmlDidFinishedPushUserInfoToKey = @"to";

@class DocumentContext,Page;
@interface Tml : UIView<Window>{
    DocumentContext     *_currentContext;
    BOOL                isLoad;
    Page                *_old;
	UIView              *_input;
}

@property (nonatomic, assign)UIView *tinyView;

//@property (nonatomic, retain)
@property (nonatomic, retain)Page                *currentView;

///判断是否已经渲染过页面
@property (nonatomic, assign)BOOL hasLayout;

@property(nonatomic, assign) id tfPage;

-(TinyView *)parentView;

- (void)dismissKeyboard;

@property (nonatomic, retain, readonly)DocumentContext *currentContext;
- (id)initWithContext:(DocumentContext*)context frame:(CGRect)frame;
- (void)scrollToAvoidCovering:(UIView*)input;

@property (nonatomic, retain)UIButton *btnKey;

@property(nonatomic, retain) NSMutableDictionary *jsDictionary;

-(void)Onload;

-(void)didAppear;

@end
