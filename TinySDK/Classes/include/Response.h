//
//  Response.h
//  Breeze
//
//  Created by  on 12-7-16.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

#define kPacketSize 1024

@interface Response : NSObject {
	NSMutableDictionary *_header;
	NSMutableData *_content;
}

@property (nonatomic, assign) NSInteger statecode;
@property (nonatomic, retain, readonly) NSMutableDictionary *header;
@property (nonatomic, retain) NSData *content;

- (void)apendContent:(const void *)bytes length:(NSUInteger)length;
- (void)addHeader:(id)key object:(id)obj;

@end