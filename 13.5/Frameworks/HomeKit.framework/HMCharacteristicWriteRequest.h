//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMCharacteristicRequest.h>

@interface HMCharacteristicWriteRequest : HMCharacteristicRequest
{
    id _value;
}

+ (id)writeRequestWithCharacteristic:(id)arg1 value:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCharacteristic:(id)arg1 value:(id)arg2;

@end

