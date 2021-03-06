//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKQuantity, HKUnit, NSArray, NSDictionary, NSNumber;

@interface FIUIWorkoutCacheContainer : NSObject
{
    HKQuantity *_basalEnergy;
    NSArray *_heartRateSamples;
    NSArray *_recoveryHeartRateSamples;
    NSNumber *_averageHeartRate;
    NSArray *_distanceSamples;
    NSArray *_strokeSamples;
    NSArray *_splits;
    NSDictionary *_swimmingSplits;
    NSArray *_segments;
    NSArray *_swimmingSets;
    HKUnit *_userPreferredDistanceUnit;
    NSDictionary *_swimDistanceByStrokeStyle;
}

@property(retain, nonatomic) NSDictionary *swimDistanceByStrokeStyle; // @synthesize swimDistanceByStrokeStyle=_swimDistanceByStrokeStyle;
@property(retain, nonatomic) HKUnit *userPreferredDistanceUnit; // @synthesize userPreferredDistanceUnit=_userPreferredDistanceUnit;
@property(retain, nonatomic) NSArray *swimmingSets; // @synthesize swimmingSets=_swimmingSets;
@property(retain, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(retain, nonatomic) NSDictionary *swimmingSplits; // @synthesize swimmingSplits=_swimmingSplits;
@property(retain, nonatomic) NSArray *splits; // @synthesize splits=_splits;
@property(retain, nonatomic) NSArray *strokeSamples; // @synthesize strokeSamples=_strokeSamples;
@property(retain, nonatomic) NSArray *distanceSamples; // @synthesize distanceSamples=_distanceSamples;
@property(retain, nonatomic) NSNumber *averageHeartRate; // @synthesize averageHeartRate=_averageHeartRate;
@property(retain, nonatomic) NSArray *recoveryHeartRateSamples; // @synthesize recoveryHeartRateSamples=_recoveryHeartRateSamples;
@property(retain, nonatomic) NSArray *heartRateSamples; // @synthesize heartRateSamples=_heartRateSamples;
@property(retain, nonatomic) HKQuantity *basalEnergy; // @synthesize basalEnergy=_basalEnergy;
- (void).cxx_destruct;

@end

