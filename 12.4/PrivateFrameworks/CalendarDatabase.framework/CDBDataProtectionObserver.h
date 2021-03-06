//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CalDeviceLockObserver;

@interface CDBDataProtectionObserver : NSObject
{
    CDUnknownBlockType _stateChangedCallback;
    CalDeviceLockObserver *_deviceLockObserver;
}

+ (id)stateChangedNotificationName;
@property(retain, nonatomic) CalDeviceLockObserver *deviceLockObserver; // @synthesize deviceLockObserver=_deviceLockObserver;
@property(copy, nonatomic) CDUnknownBlockType stateChangedCallback; // @synthesize stateChangedCallback=_stateChangedCallback;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool dataIsAccessible;
- (void)_deviceLockStateChanged;
- (id)init;

@end

