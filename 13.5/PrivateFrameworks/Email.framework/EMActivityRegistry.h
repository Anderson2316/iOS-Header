//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EMRemoteConnection, NSMapTable;

@interface EMActivityRegistry : NSObject
{
    NSMapTable *_observerWrappersByObserver;
    struct os_unfair_lock_s _lock;
    EMRemoteConnection *_connection;
}

+ (id)observerInterface;
+ (id)remoteInterface;
- (void).cxx_destruct;
@property(retain) EMRemoteConnection *connection; // @synthesize connection=_connection;
- (id)registerActivityObserver:(id)arg1;
- (id)initWithRemoteConnection:(id)arg1;

@end

