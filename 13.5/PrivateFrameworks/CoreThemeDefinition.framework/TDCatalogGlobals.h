//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@interface TDCatalogGlobals : NSManagedObject
{
    unsigned long long _defaultBlendMode;
    _Bool _allowsVibrancy;
    _Bool _supportsWhitePointAdjustments;
    _Bool _supportsBrightnessAdjustments;
    _Bool _allowsSystemTintColors;
    _Bool _allowsCustomTintColors;
    _Bool _supportsMultipleAppearancesForEffects;
}

- (id)dictionaryForArchiving;
@property(nonatomic) _Bool supportsMultipleAppearancesForEffects;
@property(nonatomic) _Bool allowsCustomTintColors;
@property(nonatomic) _Bool allowsSystemTintColors;
@property(nonatomic) _Bool supportsBrightnessAdjustments;
@property(nonatomic) _Bool supportsWhitePointAdjustments;
@property(nonatomic) _Bool allowsVibrancy;
@property(nonatomic) unsigned long long defaultBlendMode;

@end

