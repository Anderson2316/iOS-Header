//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface CSAudioRecordContext : NSObject
{
    NSDictionary *_avvcContext;
    unsigned long long _type;
    NSString *_deviceId;
}

+ (id)contextForBuiltInVoiceTrigger;
+ (id)contextForHearstVoiceTriggerWithDeviceId:(id)arg1;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (long long)avvcActivationMode:(unsigned long long)arg1;
- (id)_createAVVCContextWithType:(unsigned long long)arg1 deviceId:(id)arg2;
- (id)avvcContext;
- (id)initWithRecordType:(unsigned long long)arg1 deviceId:(id)arg2;
- (id)initWithAVVCContext:(id)arg1;

@end

