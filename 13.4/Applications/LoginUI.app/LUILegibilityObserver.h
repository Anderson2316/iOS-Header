//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _UILegibilitySettings;

@interface LUILegibilityObserver : NSObject
{
    id mWallpaperObserver;
    _UILegibilitySettings *mLockScreenWallpaperLegibilitySettings;
    _UILegibilitySettings *mHomeScreenWallpaperLegibilitySettings;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_refreshLegibilitySettings;
@property(readonly, nonatomic) _UILegibilitySettings *homeScreenWallpaperLegibilitySettings;
@property(readonly, nonatomic) _UILegibilitySettings *lockScreenWallpaperLegibilitySettings;
- (void)dealloc;
- (id)init;

@end

