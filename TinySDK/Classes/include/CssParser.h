//
//  CssParser.h
//  Breeze
//
//  Created by  on 12-7-18.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class StyleSheet;
@interface CssParser : NSObject

+ (StyleSheet*)styleSheetForString:(NSString*)string;
+ (NSDictionary*)sheetForString:(NSString*)string;
+ (NSString *)stringForSheet:(NSDictionary *)sheet;
@end
