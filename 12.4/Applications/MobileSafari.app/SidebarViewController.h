//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIBlurEffect, UIImageView, UIView, UIVisualEffectView;

@interface SidebarViewController : UIViewController
{
    UIVisualEffectView *_backdrop;
    UIView *_verticalSeparator;
    UIView *_wallpaperView;
    UIImageView *_wallpaperImageView;
    UIViewController *_contentViewController;
    struct UIEdgeInsets _wallpaperObscuredInsets;
}

@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) struct UIEdgeInsets wallpaperObscuredInsets; // @synthesize wallpaperObscuredInsets=_wallpaperObscuredInsets;
- (void).cxx_destruct;
- (void)_updateWallpaperInset;
- (void)_setWallpaperImage:(id)arg1;
- (void)_updateWallpaperImage;
- (void)_springBoardWallpaperDidChange:(id)arg1;
@property(readonly, nonatomic) UIBlurEffect *backgroundBlurEffect;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

@end

