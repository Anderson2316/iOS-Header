//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface CEKEdgeGradientView : UIView
{
    long long _edgeGradientStyle;
    UIColor *_customEdgeGradientColor;
    long long _gradientDirection;
    struct UIEdgeInsets _contentInsets;
    CDStruct_54402055 _gradientDimensions;
}

@property(nonatomic) CDStruct_54402055 gradientDimensions; // @synthesize gradientDimensions=_gradientDimensions;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) long long gradientDirection; // @synthesize gradientDirection=_gradientDirection;
@property(readonly, nonatomic) UIColor *customEdgeGradientColor; // @synthesize customEdgeGradientColor=_customEdgeGradientColor;
@property(readonly, nonatomic) long long edgeGradientStyle; // @synthesize edgeGradientStyle=_edgeGradientStyle;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)setCustomEdgeGradientStyleWithColor:(id)arg1;
- (void)setEdgeGradientStyleMask;
- (void)setEdgeGradientStyleBlack;
@property(nonatomic) double innerFadeLength;
@property(nonatomic) double outerColorLength;
- (_Bool)isOpaque;
- (id)initWithFrame:(struct CGRect)arg1;

@end

