//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IdleTimerServices/NSObject-Protocol.h>

@class NSString;
@protocol FBSServiceFacilityClientHandle;

@protocol ITIdleTimerStateServerDelegate <NSObject>
- (void)clientDidDisconnect:(id <FBSServiceFacilityClientHandle>)arg1;
- (void)client:(id <FBSServiceFacilityClientHandle>)arg1 setIdleTimerDisabled:(_Bool)arg2 forReason:(NSString *)arg3;
- (_Bool)isIdleTimerServiceAvailable;
@end

