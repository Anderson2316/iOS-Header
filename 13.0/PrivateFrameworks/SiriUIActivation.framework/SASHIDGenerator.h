//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface SASHIDGenerator : NSObject
{
    struct __IOHIDEventSystemClient *_ioSystemClient;
    NSObject<OS_dispatch_queue> *_generatorQueue;
}

- (void).cxx_destruct;
- (void)_sendHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)_sendHIDHoldLockButton;
- (void)_sendHIDHoldHomeButton;
- (void)sendHoldLockButtonHIDEvents;
- (void)sendHoldHomeButtonHIDEvents;
- (void)dealloc;
- (id)init;

@end

