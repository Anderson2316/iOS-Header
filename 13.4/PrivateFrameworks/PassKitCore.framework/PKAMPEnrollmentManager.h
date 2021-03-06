//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary, PKInAppPaymentService;
@protocol OS_dispatch_queue;

@interface PKAMPEnrollmentManager : NSObject
{
    PKInAppPaymentService *_service;
    NSMutableDictionary *_promiseMap;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    struct os_unfair_lock_s _lockObservers;
    NSHashTable *_observers;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_accessObserversWithHandler:(CDUnknownBlockType)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (id)performEnrollPaymentPass:(id)arg1 isDefault:(_Bool)arg2;
- (void)enrollPaymentPass:(id)arg1 isDefault:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)performCanEnrollPaymentPass:(id)arg1;
- (void)canEnrollPaymentPass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enrollmentStatusForPaymentPass:(id)arg1 completion:(CDUnknownBlockType)arg2 progress:(CDUnknownBlockType)arg3;
- (id)init;

@end

