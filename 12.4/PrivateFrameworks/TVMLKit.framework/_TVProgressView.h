//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIImageView, UIVisualEffectView, _TVProgressBarView;

@interface _TVProgressView : UIView
{
    _TVProgressBarView *_progressBarView;
    _Bool _useMaterial;
    _Bool _shouldProgressBarUseRoundCorner;
    long long _style;
    double _cornerRadius;
    double _progress;
    UIColor *_progressTintColor;
    UIColor *_gradientStartColor;
    UIColor *_gradientEndColor;
    UIColor *_completeTintColor;
    UIVisualEffectView *_materialView;
    UIImageView *_shadowImageView;
    struct UIEdgeInsets _padding;
}

@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(retain, nonatomic) UIVisualEffectView *materialView; // @synthesize materialView=_materialView;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) _Bool shouldProgressBarUseRoundCorner; // @synthesize shouldProgressBarUseRoundCorner=_shouldProgressBarUseRoundCorner;
@property(nonatomic) _Bool useMaterial; // @synthesize useMaterial=_useMaterial;
@property(retain, nonatomic) UIColor *completeTintColor; // @synthesize completeTintColor=_completeTintColor;
@property(retain, nonatomic) UIColor *gradientEndColor; // @synthesize gradientEndColor=_gradientEndColor;
@property(retain, nonatomic) UIColor *gradientStartColor; // @synthesize gradientStartColor=_gradientStartColor;
@property(retain, nonatomic) UIColor *progressTintColor; // @synthesize progressTintColor=_progressTintColor;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)_updateForStyleChange;
- (id)_maskImageForProgressBar;
- (void)_layoutMaterialView;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

