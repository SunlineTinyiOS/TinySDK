//
//  HSNumberPad.h
//  Breeze2.1.1
//
//  Created by Gu Jianglai on 13-8-30.
//
//

#import <UIKit/UIKit.h>
#import "TYKeyboardDelegate.h"

@interface TYNumberPad : UIView{
@private
    id<TYKeyboardDelegate> _delegate;
    UIButton *_deleteKey;
    UIButton *_doneKey;
    NSArray *_numbers;
    UIButton *_Key[10];
    float height;
    float sidewidth;

}

@property(nonatomic, assign) id<TYKeyboardDelegate> delegate;

-(void)hiddenDone;

- (id)initWithFrame:(CGRect)frame title:(NSString *)title;


@end
