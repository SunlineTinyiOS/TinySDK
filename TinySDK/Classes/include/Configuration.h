/******************************************************************
 文件名称: Configuration.h
 系统名称: 移动平台
 模块名称: 客户端
 类 名 称: Configuration
 软件版权: 杭州长亮金融信息服务有限公司
 功能说明:
 系统版本:
 开发人员:
 开发时间: 11-4-16
 审核人员:
 相关文档:
 ******************************************************************/

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

//#import <sys/types.h>
#import <sys/sysctl.h>
//#import <sys/socket.h>
//#import <net/if.h>
//#import <net/if_dl.h>

#define SystemConfigurationDir @"System.plist"
#define CustomerConfigurationDir @"CustomerConfig.plist"
#define EmbedDir @"Embed.plist"
#define kDataDirectory @"dataCache"
#define kConfigurationResolution @"resolution"

#define kConfigurationVersion @"version"
#define kConfigurationTimeout @"timeout"
#define kConfigurationConnectTimeout @"connect-timeout"
#define kConfigurationList @"list"
#define kConfigurationScale @"scale"
#define kConfigurationBoxModel @"boxModel"
#define kConfigurationCacheImage @"cacheImage"
#define kConfigurationErrorPage @"errorPage"
#define kConfigurationLogLEVEL @"LEVEL"
#define kConfigurationLogFILTERS @"FILTERS"

#define kConfigurationTrue @"true"
#define kConfigurationFalse @"false"


#define kConfigurationResourceVersion @"resourceVersion"
#define kConfigurationResourceEncrypted   @"ResourceEncrypted"

#define kConfigurationDebug @"DEBUG"
//#define kMainCryptKey @"Sunline1"
#define kMainCryptKey @"Sunline1"//ipad上是Sunline1，不是Sunline1。
// 密码键盘视觉回显
#define kConfigurationKeyboardFeedback  @"keyboardfeedback"
#define kConfigurationNoDelayLock @"noDelayLock"


static const NSString *kContentType = @"content-type";
static const NSString *ktinyName = @"tiny";
static NSString *kTinyZip = @"tiny.zip";
static NSString *kZipType = @"zip";           //文件类型是zip类型

/**
 *  盒子模型计算方式A 默认为A
 *  宽度和高度直接为内容高度，实际宽度为  内容宽高+ padding +border
 */
static const NSString *kBoxModelA = @"boxModelA";

/**
 *  盒子模型计算方式B
 *  1 宽度和高度为具体值，直接为内容高度，实际宽度为  内容宽高+ padding +border
 *  2 宽度和高度为百分比，直接为实际的宽高度。
 *    自己的实际宽度=(父容器宽度 -pading - border)*百分比  。
 *    自己的内容宽度＝自己实际宽度－pading-borde
 */
static const NSString *kBoxModelB = @"boxModelB";

@interface Configuration : NSObject {
    NSMutableDictionary *_configuration;
    NSMutableDictionary *_breezeconfig;
    
    
}

#pragma mark singleton
+ (Configuration *)configuration;

#pragma mark security
@property (nonatomic, readonly) CGFloat topOffset;
@property (nonatomic, assign) CGFloat tabBarHeight;
@property (nonatomic, readonly) BOOL isRetina;
@property (nonatomic, retain) NSString *passwordRSAPublicKey;

@property (nonatomic, retain, readonly) NSString *userAgent;
#pragma mark info
- (NSString*)deviceID;
- (BOOL)isJailBreak;
- (NSString*)platform;
- (NSString *)isResourceEncrypted;
- (NSArray*)resolution;
#pragma development mode
- (BOOL)isDebug;
#pragma mark network
- (int)timeout;
- (NSArray*)stationList;
-(void)CustomerConfigsetObject:(id)object forKey:(id)key;
-(id)CustomerConfigObjectForKey:(id)key;

- (NSString *)scale;
- (NSString *)resourceVersion;

/**
 *  盒子模型的类型
 *
 *  @return kBoxModelA kBoxModelB
 */
- (const NSString *)boxModel;

/**
 *  判断是否缓存图片
 *
 */
- (NSString*)cacheImage;

- (NSInteger)logLEVEL;

- (NSString *)logFILTERS;


/**
 *  当网络异常时，显示的错误页面url
 *
 */
- (NSString*)errorPage;

/**
 * 返回css文件数组
 *
 *  @return return value description
 */
-(NSArray *)cssModelByPath:(NSURL *)cssUrl;

/**
 *  是否延迟lock框
 */
-(NSString *)noDelayLock;

- (BOOL)getKeyboardVisualFeedback;

@end