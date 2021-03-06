//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface MapsPieProgressView : UIView
{
    double _borderLineWidth;
}

+ (Class)layerClass;
@property(nonatomic) double borderLineWidth; // @synthesize borderLineWidth=_borderLineWidth;
- (double)progressPresentationValue;
- (void)animateProgressCompletedWithCompletion:(CDUnknownBlockType)arg1;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2 forced:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) double progress;
- (double)progressLineWidth;
- (void)setProgressLineWidth:(double)arg1;
@property(readonly, nonatomic) UIColor *progressColor;
- (void)setProgressColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

