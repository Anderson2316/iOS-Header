//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIVisualEffect, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UITableViewCellSeparatorView : UIView
{
    _Bool _drawsWithVibrantLightMode;
    UIView *_backgroundView;
    UIView *_overlayView;
    UIVisualEffect *_separatorEffect;
    UIVisualEffectView *_effectView;
}

@property(retain, nonatomic) UIVisualEffect *separatorEffect; // @synthesize separatorEffect=_separatorEffect;
@property(nonatomic) _Bool drawsWithVibrantLightMode; // @synthesize drawsWithVibrantLightMode=_drawsWithVibrantLightMode;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end

