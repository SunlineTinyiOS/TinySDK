//
//  TextNode.h
//  Breeze
//
//  Created by  on 12-7-18.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "XMLNode.h"
@interface TextNode : NSObject <XMLNode>{
    NSMutableString *_text;
}

- (id)initWithText:(NSString*)text;
- (void)appendText:(NSString*)text;
@property (nonatomic, retain, readonly) NSString *text;

@end
