//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIAccessibilityHUDItem, UIImageView, UILabel, UIVibrancyEffect, UIVisualEffectView;

@interface UIAccessibilityHUDView : UIView
{
    UIAccessibilityHUDItem *_item;
    UIView *_transformContainer;
    UIVisualEffectView *_effectView;
    UIVibrancyEffect *_vibrancyEffect;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UIView *_customView;
}

+ (struct CGSize)preferredHUDSize;
@property(copy, nonatomic) UIAccessibilityHUDItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)customView;
- (id)imageView;
- (id)titleLabel;
- (struct UIEdgeInsets)imageInsetsForLayout;
- (id)containerViewForLayout;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_show:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)layoutManager;
- (id)initWithHUDItem:(id)arg1;

@end

