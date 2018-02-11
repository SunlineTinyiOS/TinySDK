/******************************************************************
 文件名称: ScriptElement.h
 系统名称: 移动平台
 模块名称: 客户端
 类 名 称: ScriptElement
 软件版权: 杭州长亮金融信息服务有限公司
 功能说明:
 系统版本:
 开发人员:
 开发时间: 12-5-11
 审核人员:
 相关文档:
 修改记录:
 ******************************************************************/


#import <Foundation/Foundation.h>

#import "Control.h"
#import "NetworkDelegate.h"
#import <JavaScriptCore/JSContext.h>


#define kFunction   @"text/function"
#define kScript     @"text/script"


@protocol TYScriptDelegate <NSObject>

@optional

-(BOOL)scriptLoad:(JSContext *)jsContext withJS:(NSString *)jsUrl  inTML:(NSString *)tmlUrl;

@end


@interface ScriptElement : Control <NetworkDelegate>{
    
}


-(void)sendScript;

@property (nonatomic, assign) id <TYScriptDelegate> delegate;

@property(nonatomic, assign) ScriptElement *nextElement;

@property(nonatomic, retain) Request *requestJS;


@end
