//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSUUID.h>

#import <HealthKit/HKUUIDProvider-Protocol.h>

@class NSString;

@interface NSUUID (HealthKit) <HKUUIDProvider>
+ (id)hk_UUIDWithData:(id)arg1;
- (id)hk_shortRepresentation;
- (long long)hk_compare:(id)arg1;
- (id)hk_dataForUUIDBytes;
- (id)hk_UUID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

