//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
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
@property(readonly, nonatomic) double progressPresentationValue;
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

