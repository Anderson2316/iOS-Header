//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DirectionsPlanBuilder-Protocol.h"

@class NSString, RideBookingPlanningSession;

__attribute__((visibility("hidden")))
@interface RideSharingSessionDirectionsPlanBuilder : NSObject <DirectionsPlanBuilder>
{
    RideBookingPlanningSession *_session;
}

@property(readonly, nonatomic) RideBookingPlanningSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)_addOriginDestinationToPlan:(id)arg1;
- (id)buildDirectionsPlan;
- (id)initWithRideBookingPlanningSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

