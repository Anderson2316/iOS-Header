//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NSMutableSet, NSString, NSXPCListener;

@interface RequestBroker : NSObject <NSXPCListenerDelegate>
{
    NSMutableSet *_clients;
    NSXPCListener *_listener;
}

+ (_Bool)_connection:(id)arg1 hasEntitlement:(id)arg2;
+ (id)_allEntitlements;
- (void).cxx_destruct;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
- (void)_startListener;
- (void)_disconnectClient:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

