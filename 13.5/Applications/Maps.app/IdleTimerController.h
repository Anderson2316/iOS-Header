//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BatteryMonitorTokenDelegate-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol BSInvalidatable, BatteryMonitorToken, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface IdleTimerController : NSObject <BatteryMonitorTokenDelegate>
{
    _Bool _isForeground;
    NSMutableDictionary *_states;
    NSMutableDictionary *_applicableStates;
    id <BatteryMonitorToken> _batteryToken;
    _Bool _monitoringBattery;
    NSObject<OS_dispatch_queue> *_queue;
    id <BSInvalidatable> _idleTimerAssertion;
    id _foregroundingObserverToken;
    id _backgroundingObserverToken;
}

- (void).cxx_destruct;
- (void)batteryMonitorTokenWitnessedChangeInBatteryLevel:(id)arg1;
- (void)batteryMonitorTokenWitnessedChangeInBatteryState:(id)arg1;
- (id)_reasonString;
- (id)_assertionReasonString;
- (void)_updateForApplicationState:(_Bool)arg1;
- (void)_asyncUpdateForApplicationState:(_Bool)arg1;
- (void)_syncUpdateForApplicationState:(_Bool)arg1;
- (_Bool)_shouldIgnoreScene:(id)arg1;
- (void)_startObservingApplicationState;
- (_Bool)_idleTimerReasonPermittedInBackground:(unsigned long long)arg1;
- (void)_releaseIdleTimerAssertion;
- (void)_takeIdleTimerAssertion;
- (void)_setIdleTimerDisabled:(_Bool)arg1;
- (void)_updateIdleTimer;
- (void)_updateBatteryMonitoring;
- (void)_setMonitoringBattery:(_Bool)arg1;
- (void)_updateApplicableStates;
- (id)_summaryString;
@property(readonly, copy) NSString *description;
- (void)_setDesiredIdleTimerState:(unsigned long long)arg1 forReason:(unsigned long long)arg2;
- (void)setDesiredIdleTimerState:(unsigned long long)arg1 forReason:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

