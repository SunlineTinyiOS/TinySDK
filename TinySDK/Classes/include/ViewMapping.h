//
//  ViewMapping.h
//  Breeze
//
//  Created by  on 12-7-18.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Element;
@interface ViewMapping : NSObject

+ (void)registerEmbedClassMapping;
+ (void)unregisterEmbedClassMapping;
+ (Class)classForElement:(Element*)element;
/**
 *  第二种读取方式，直接从Tiny.bundle读取
 */
+ (void)registerEmbedClassMappingInTiny;
@end
