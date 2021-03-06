//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol LPKUserSwitchCycleResponder;

@interface LPKUserSwitchCycleController : NSObject
{
    id <LPKUserSwitchCycleResponder> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <LPKUserSwitchCycleResponder> delegate; // @synthesize delegate=_delegate;
- (_Bool)_isLoginSession;
- (_Bool)_validateUserSwitchExpectation;
- (_Bool)_setUserSwitchDestinationExpectation:(unsigned long long)arg1;
- (void)_triggerFullLogoutWithDelay:(double)arg1;
- (void)_triggerFastLogoutWithDelay:(double)arg1;
- (void)_loginAccount:(id)arg1 password:(id)arg2 localLoginOnly:(_Bool)arg3 delay:(double)arg4;
- (void)_updateLocalPerfTestCycleCount:(long long)arg1;
- (void)_clearOutLocalPerfTestDefaults;
- (void)interruptLocalUserSwitchTest;
- (_Bool)triggerTestUserSwitchIfNeeded;
- (_Bool)startUserSwitchWithType:(unsigned long long)arg1 count:(long long)arg2 username:(id)arg3 password:(id)arg4;
- (id)initWithDelegate:(id)arg1;

@end

