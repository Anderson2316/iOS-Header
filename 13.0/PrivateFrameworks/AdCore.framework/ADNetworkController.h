//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol OS_dispatch_queue;

@interface ADNetworkController : NSObject
{
    struct __SCDynamicStore *_store;
    NSTimer *_notificationTimer;
    int _networkType;
    struct __SCNetworkReachability *_reachability;
    unsigned int _reachabilityFlags;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _canReachTheNetwork;
    _Bool _isUpdating;
}

+ (id)sharedNetworkController;
@property _Bool isUpdating; // @synthesize isUpdating=_isUpdating;
@property _Bool canReachTheNetwork; // @synthesize canReachTheNetwork=_canReachTheNetwork;
- (void).cxx_destruct;
- (void)_checkForNetworkAndNotify;
- (void)_checkForNetwork;
- (id)getDataContext:(id)arg1;
- (int)cellNetworkType;
- (int)dataIndicatorToConnection:(int)arg1;
- (int)networkType;
- (void)start;
- (void)_updateStatus:(_Bool)arg1;

@end

