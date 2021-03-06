//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIToolbar, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface PUImportFloatingToolbarView : UIView
{
    _Bool _shouldBlurBackground;
    NSString *_backdropViewGroupName;
    _UIBackdropView *_backdropView;
    UIToolbar *_toolbar;
    UIView *_shadowView;
}

@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) _UIBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(copy, nonatomic) NSString *backdropViewGroupName; // @synthesize backdropViewGroupName=_backdropViewGroupName;
@property(nonatomic) _Bool shouldBlurBackground; // @synthesize shouldBlurBackground=_shouldBlurBackground;
- (void).cxx_destruct;
- (void)_updateBackdropViewGroupName;
- (void)_updateBackground;
- (void)setItems:(id)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) NSArray *items;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)init;

@end

