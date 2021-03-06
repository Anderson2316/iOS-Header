//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _SWCPrefs : NSObject
{
}

+ (id)sharedPrefs;
- (id)descriptionOfAllPrefs;
@property(readonly, getter=isAppleInternal) _Bool appleInternal;
@property(readonly) _Bool verifyExtendedValidation;
- (double)retryIntervalAfterSuccess:(_Bool)arg1;
@property(readonly) double retryIntervalAfterSuccess;
@property(readonly) double retryIntervalAfterFailure;
@property(readonly) unsigned long long maximumRetryCount;
- (void)_setString:(id)arg1 forKey:(id)arg2;
- (id)_stringForKey:(id)arg1 defaultValue:(id)arg2;
- (unsigned long long)_unsignedIntegerForKey:(id)arg1 defaultValue:(unsigned long long)arg2 minimumValue:(unsigned long long)arg3 maximumValue:(unsigned long long)arg4;
- (unsigned long long)_unsignedIntegerForKey:(id)arg1 defaultValue:(unsigned long long)arg2;
- (_Bool)_boolForKey:(id)arg1 defaultValue:(_Bool)arg2;
- (unsigned long long)_recheckFuzzForSuccess:(_Bool)arg1;
- (id)_init;

@end

