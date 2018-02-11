//
//  Box.h
//  Breeze
//
//  Created by  on 12-7-19.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


/**
 *  宽度类型
 */
typedef NS_ENUM(NSInteger, TYBoxWidthModel){
    /**
     *  具体值，以未设值
     */
    TYBoxWidthModelDefault = 0,
    /**
     *  百分比值
     */
    TYBoxWidthModelPercent = 1
};

/**
 *  高度类型
 */
typedef NS_ENUM(NSInteger, TYBoxHeightModel){
    /**
     *  分为未设置、具体值两种情况
     */
    TYBoxHeightModelDefault = 0,
    /**
     *  百分比值
     */
    TYBoxHeightModelPercent = 1
};

/**
 *  外边距(margin)类型
 */
typedef NS_ENUM(NSInteger, TYBoxMarginModel){
    /**
     *  分为未设置、具体值两种情况
     */
    TYBoxMarginModelDefault = 0,
    /**
     *  百分比值
     */
    TYBoxMarginModelPercent = 1
};

/**
 *  外边距(padding)类型
 */
typedef NS_ENUM(NSInteger, TYBoxPaddingModel){
    /**
     *  分为未设置、具体值两种情况
     */
    TYBoxPaddingModelDefault = 0,
    /**
     *  百分比值
     */
    TYBoxPaddingModelPercent = 1
};

@class ElementContext;
@interface Box : NSObject{
	ElementContext *_context;
	
	float _fixedWidth;
	float _fixedHeight;
	
	UIEdgeInsets _padding;
	UIEdgeInsets _border;
    UIEdgeInsets _shadow;
	UIEdgeInsets _margin;
	
	NSString *_align;
	NSString *_valign;

	BOOL _visibility;
}

#pragma mark init
- (id)initWithContext:(ElementContext*)context;

#pragma mark load
- (void)loadStyles:(NSDictionary*)styles;

@property (nonatomic, assign) float fixedWidth;
@property (nonatomic, assign) float maxWidth;
@property (nonatomic, assign) float fixedHeight;
@property (nonatomic) BOOL visibility;
@property (nonatomic, assign) UIEdgeInsets padding;
@property (nonatomic, assign) UIEdgeInsets border;
@property (nonatomic, assign) UIEdgeInsets shadow;
@property (nonatomic, readonly) float topEdge;
@property (nonatomic, readonly) float rightEdge;
@property (nonatomic, readonly) float bottomEdge;
@property (nonatomic, readonly) float leftEdge;
@property (nonatomic, readonly) UIEdgeInsets edges;
@property (nonatomic, assign) UIEdgeInsets margin;
@property (nonatomic, retain, readonly) NSString *align;
@property (nonatomic, retain, readonly) NSString *valign;
@property (nonatomic, assign) float zIndex;

#pragma mark calLayoutWidth
-(float)calLayoutWidth;


#pragma mark inset
- (CGRect)rectInsetPadding:(CGRect)rect;
- (CGRect)rectInsetBorder:(CGRect)rect;

- (CGSize)sizeInsetPadding:(CGSize)size;
- (CGSize)sizeInsetBorder:(CGSize)size;

- (CGPoint)originInsetPadding:(CGPoint)origin;
- (CGPoint)originInsetBorder:(CGPoint)origin;

- (float)widthInsetPadding:(float)width;
- (float)heightInsetPadding:(float)height;
- (float)widthInsetBorder:(float)width;
- (float)heightInsetBorder:(float)height;

#pragma mark outset
- (CGRect)rectOutsetPadding:(CGRect)rect;
- (CGRect)rectOutsetBorder:(CGRect)rect;

- (CGSize)sizeOutsetPadding:(CGSize)size;
- (CGSize)sizeOutsetBorder:(CGSize)size;

- (CGPoint)originOutsetPadding:(CGPoint)origin;
- (CGPoint)originOutsetBorder:(CGPoint)origin;

//- (CGRect)rectWithShadow:(CGRect)rect;

- (float)widthOutsetPadding:(float)width;
- (float)heightOutsetPadding:(float)height;
- (float)widthOutsetBorder:(float)width;
- (float)heightOutsetBorder:(float)height;

/**
 *  获取box宽度类型
 *
 *  @return return value description
 */
-(TYBoxWidthModel)boxWidthModel;

/**
 *  获取box宽度类型
 *
 *  @return return value description
 */
-(TYBoxHeightModel)boxHeightModel;



/**
 *  根据box模型的类型，计算实际大小
 *
 *  @param size size description
 *
 *  @return size
 */
-(CGSize)sizeByBoxModelSize:(CGSize)size;

/**
 *  根据vbox和hbox计算得到的height和width;
 */
@property (nonatomic, retain) NSMutableDictionary *boxStyles;



@end
