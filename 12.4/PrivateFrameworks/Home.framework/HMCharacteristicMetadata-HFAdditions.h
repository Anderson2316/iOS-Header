//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMCharacteristicMetadata.h>

@class HFNumberValueConstraints;

@interface HMCharacteristicMetadata (HFAdditions)
- (id)hf_percentageForCharacteristicValue:(id)arg1;
- (id)hf_characteristicValueForPercentage:(double)arg1;
@property(readonly, nonatomic) _Bool hf_isNumeric;
- (_Bool)hf_isInteger;
- (_Bool)hf_isValidValue:(id)arg1;
- (id)hf_valueRoundedToNearestStepValue:(id)arg1;
- (id)hf_normalizedValueForValue:(id)arg1;
- (_Bool)hf_isEqualToMetadata:(id)arg1;
@property(readonly, nonatomic) HFNumberValueConstraints *hf_numericValueConstraints;
@end

