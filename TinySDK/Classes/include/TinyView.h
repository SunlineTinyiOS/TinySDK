//
//  TinyView.h
//  Breeze2.1.1
//
//  Created by xiangfp on 15/4/10.
//
//

#import <UIKit/UIKit.h>
#import "NetworkDelegate.h"
#import "DocumentContext.h"
#import "WindowsManagerProtocol.h"

@class TinyView;
@protocol TinyViewDelegate <NSObject>

@optional

- (BOOL)tinyView:(TinyView *)tinyView requestPage:(Request *)request;

- (BOOL)tinyView:(TinyView *)tinyView popToContext:(NSString *)pageID;

- (BOOL)tinyView:(TinyView *)tinyView pushContext:(DocumentContext *)context;

- (void)tinyView:(TinyView *)tinyView target:(NSString *)target;

- (void)tinyView:(TinyView *)tinyView openUrl:(NSString *)url width:(float)width height:(float) height;

- (void)tinyView:(TinyView *)tinyView didLoadViewURL:(NSURL *)url;

- (void)tinyView:(TinyView *)tinyView  didFailWithError:(NSError *)error;

@end


@interface TinyView : UIView<NetworkDelegate, WindowsManagerProtocol>;

@property (nonatomic, assign) id <TinyViewDelegate> delegate;

@property (nonatomic, strong) NSString * pageID;

@property (nonatomic, assign) id tfPage;


-(void)setWindow:(UIWindow *)window;

-(void)setTabbarHeight:(float)height;

/**
 *  向context添加jsClass
 *
 *  @param jsClass class
 *  @param name    class的名称
 */
-(void)addJSClass:(Class)jsClass name:(NSString *)name;

-(void)registerEmbedClassMapping;

/**
 *  执行didAppear方法
 */
-(void)didAppear;



@end
