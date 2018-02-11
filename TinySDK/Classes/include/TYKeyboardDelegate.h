//
//  HSKeyboardDelegate.h
//  Breeze
//
//  Created by Gu Jianglai on 12-12-17.
//
//

#import <Foundation/Foundation.h>

@protocol TYKeyboardDelegate <NSObject>

- (void) TYKeyboardInput:(NSString *) c;
- (void) TYKeyboardBackspace;
- (void) TYKeyboardFinish;

@end