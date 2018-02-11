//
//  FilePathCache.h
//  Tiny
//
//  Created by 小鱼儿 on 15/10/28.
//  Copyright © 2015年 xiangfp. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FilePathCache : NSObject
@property (nonatomic , strong) NSMutableArray *filePath;

+ (FilePathCache *)filePathCache;

-(void)getFilePath;

@end
