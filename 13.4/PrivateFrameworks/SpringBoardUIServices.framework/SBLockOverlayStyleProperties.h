//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, _UIBackdropViewSettings;

@interface SBLockOverlayStyleProperties : NSObject
{
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    UIColor *_tintColor;
    double _tintAlpha;
    double _blurRadius;
    unsigned long long _style;
    long long _quality;
    _UIBackdropViewSettings *_settings;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
@property(readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic) double tintAlpha; // @synthesize tintAlpha=_tintAlpha;
@property(readonly, nonatomic) long long graphicsQuality; // @synthesize graphicsQuality=_quality;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
- (id)_stringForStyle;
- (id)_stringForQuality;
- (id)_settingsForStyle;
- (void)_configure;
- (id)description;
- (id)initWithStyle:(unsigned long long)arg1 quality:(long long)arg2;

@end

