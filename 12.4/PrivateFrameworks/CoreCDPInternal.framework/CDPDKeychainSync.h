//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CDPDCircleProxy;

@interface CDPDKeychainSync : NSObject
{
    id <CDPDCircleProxy> _circleProxy;
}

+ (id)_defaultUserVisibleViewSet;
+ (id)keyChainSyncWithProxy:(id)arg1;
+ (id)keyChainSync;
- (void).cxx_destruct;
- (_Bool)synchronizeKeychainViewSetWithOtherPeers:(id *)arg1;
- (_Bool)matchKeychainViewState:(_Bool)arg1;
- (void)removeNonViewAwarePeersFromCircleWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_setKeychainSyncState:(_Bool)arg1;
- (void)_preflightCircleStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)_processAuthFailure:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setUserVisibleKeychainSyncEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)_isThisDeviceInCircle;
- (_Bool)isUserVisibleKeychainSyncEnabled;

@end

