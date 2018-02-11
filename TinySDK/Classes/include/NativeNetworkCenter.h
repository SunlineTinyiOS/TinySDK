//
//  NativeNetworkCenter.h
//  Breeze2.1.1
//
//  Created by LingBinXing on 14-10-8.
//
//

#import <Foundation/Foundation.h>
#import "Request.h"
#import <UIKit/UIKit.h>

static const BOOL kDefaultEaseSSLPublicKeyPinModeEnabled = YES;

typedef void (^NativeNetworkBlock)(Response *response, NSError *connectionError);
typedef void (^NativeNetworkImageBlock)(UIImage *image, NSError *connectionError);

typedef void (^NativeNetworkBatchEachBlock)(Request *request, Response *response, NSError *connectionError);
typedef void (^NativeNetworkBatchAllBlock)(NSArray* successRequests, NSArray* failureRequests);


typedef NS_OPTIONS(NSUInteger, NNImageCacheOption) {
    /// 读缓存
    NNImageCacheOption_ReadFromCache    = 1UL << 0,
    /// 写缓存
    NNImageCacheOption_WriteToCache     = 1UL << 1,
    /// 读写缓存
    NNImageCacheOption_ReadWriteCache   = NNImageCacheOption_WriteToCache | NNImageCacheOption_ReadFromCache,
};



@interface NativeNetworkCenter : NSObject

/**
 是否启用宽松的SSL公钥验证模式. 默认 kDefaultEaseSSLPublicKeyPinModeEnabled.
 
 当服务器使用自签证书时, 请设置为 YES.
 */
@property (nonatomic, assign, getter=isEaseSSLPublicKeyPinModeEnabled) BOOL easeSSLPublicKeyPinModeEnabled;

+ (NativeNetworkCenter*)defaultCenter;
+ (void)reset;



/**
 *  @brief  发起请求 （回调方式: block, !!! 忽略 delegate 方法 !!!）
 *  @param request 请求对象
 *  @param handler block 回调
 *  @return 是否发出
 */
- (BOOL)sendRequest:(Request*)request completionHandler:(NativeNetworkBlock)handler;




/**
 *  @brief  取消请求
 *  @param request 请求对象
 *  @warning 只支持取消通过本类发送的请求
 */
- (void)cancelRequest:(Request*)request;

@end

@class HSHTTPRequestOperation;
@interface Request (NativeNetworkCenter)
@property (nonatomic, weak) HSHTTPRequestOperation* requestOperation;
@end



