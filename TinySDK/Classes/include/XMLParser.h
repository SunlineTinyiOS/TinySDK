//
//  XMLParser.h
//  Breeze
//
//  Created by  on 12-7-18.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Document, Element, StyleElement;
@interface XMLParser : NSObject<NSXMLParserDelegate>{
    Document    *_document;
    Element     *_current;
    
    NSInteger   _position;
    //异步加载
    NSString    *_direction;
    NSInteger   _count;
    
}

- (Document*)documentForString:(NSString*)xml;
- (Document*)documentForData:(NSData*)xml;
- (void)appendDocumentForString:(NSString *)xml withDocument:(Document *)document parent:(Element *)element direction:(NSString *)direction;
- (void)insertDocumentForData:(NSData *)xml withDocument:(Document *)document parent:(Element *)parent selfElement:(Element *)element;

@end
