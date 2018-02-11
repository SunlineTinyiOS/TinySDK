//
//  PositionView.h
//  Breeze
//
//  Created by  on 12-8-7.
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class Element;
@interface PositionView : NSObject{
    NSMutableArray  *_views;
    NSMutableArray  *_styles;
    NSMutableArray  *_elements;
    NSMutableArray  *_types;
}

@property (nonatomic, readonly) NSMutableArray *views;
@property (nonatomic, readonly) NSMutableArray *elementStyles;
@property (nonatomic, readonly) NSMutableArray *elements;
@property (nonatomic, readonly) NSMutableArray *types;

- (void)addView:(UIView *)view withStyle:(NSDictionary*)distance andElement:(Element*)element type:(NSString*)type;
- (void)clearAll;
@end
