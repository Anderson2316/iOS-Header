//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSSecureCoding-Protocol.h>

@class HDDemoDataGenerator;

@interface HDDemoDataBaseSampleGenerator : NSObject <NSSecureCoding>
{
    _Bool _createdFromNSKeyedUnarchiver;
    HDDemoDataGenerator *_demoDataGenerator;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool createdFromNSKeyedUnarchiver; // @synthesize createdFromNSKeyedUnarchiver=_createdFromNSKeyedUnarchiver;
@property(nonatomic) __weak HDDemoDataGenerator *demoDataGenerator; // @synthesize demoDataGenerator=_demoDataGenerator;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (void)generateFirstRunSampleForDemoPerson:(id)arg1 firstDate:(id)arg2 objectCollection:(id)arg3;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_createdFromNSKeyedUnarchiver;
- (id)init;

@end

