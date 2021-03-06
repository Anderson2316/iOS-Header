//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MapsLargerHitTargetButton.h"

@class CAShapeLayer, UIColor, UILongPressGestureRecognizer;

__attribute__((visibility("hidden")))
@interface CarFocusableButton : MapsLargerHitTargetButton
{
    UILongPressGestureRecognizer *_recognizer;
    CAShapeLayer *_focusShapeLayer;
    struct CGSize _lastKnownSize;
    _Bool _needsUpdateAppearance;
    _Bool _customDisabledColor;
    _Bool _generatedDisabledColor;
    _Bool _customHighlightedColor;
    _Bool _generatedHighlightedColor;
    _Bool _modifiesBackgroundColor;
    _Bool _showsEllipticalFocusIndicator;
    UIColor *_focusedTintColor;
    UIColor *_nonFocusedTintColor;
    UIColor *_focusedBackgroundColor;
    UIColor *_nonFocusedBackgroundColor;
}

+ (id)buttonWithType:(long long)arg1;
+ (id)button;
- (void).cxx_destruct;
@property(nonatomic) _Bool showsEllipticalFocusIndicator; // @synthesize showsEllipticalFocusIndicator=_showsEllipticalFocusIndicator;
@property(nonatomic) _Bool modifiesBackgroundColor; // @synthesize modifiesBackgroundColor=_modifiesBackgroundColor;
@property(retain, nonatomic) UIColor *nonFocusedBackgroundColor; // @synthesize nonFocusedBackgroundColor=_nonFocusedBackgroundColor;
@property(retain, nonatomic) UIColor *focusedBackgroundColor; // @synthesize focusedBackgroundColor=_focusedBackgroundColor;
@property(retain, nonatomic) UIColor *nonFocusedTintColor; // @synthesize nonFocusedTintColor=_nonFocusedTintColor;
@property(retain, nonatomic) UIColor *focusedTintColor; // @synthesize focusedTintColor=_focusedTintColor;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)focusDidChange:(_Bool)arg1;
- (void)tappedButton:(id)arg1;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)tintColorDidChange;
- (void)_updateColorSettings;
- (void)_updateAppearance;
- (void)_setNeedsUpdateAppearance;
- (id)_focusShapeLayer;
- (_Bool)_isChargeEnabled;
- (_Bool)canBecomeFocused;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setAdjustsImageWhenHighlighted:(_Bool)arg1;
- (void)setAdjustsImageWhenDisabled:(_Bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didMoveToWindow;
- (void)willMoveToSuperview:(id)arg1;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

