//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSMutableSet, NSString, NSUUID, NSXPCConnection, _HKEntitlements;

@interface HDXPCClient : NSObject <NSCopying>
{
    NSString *_entitlementsApplicationIdentifier;
    _Bool _isExtension;
    NSXPCConnection *_connection;
    _HKEntitlements *_entitlements;
    NSString *_name;
    NSString *_processBundleIdentifier;
    NSString *_containerAppBundleIdentifier;
    NSUUID *_UUID;
    NSMutableSet *_droppedEntitlements;
}

+ (id)clientWithConnection:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *droppedEntitlements; // @synthesize droppedEntitlements=_droppedEntitlements;
@property(readonly) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly, copy) NSString *containerAppBundleIdentifier; // @synthesize containerAppBundleIdentifier=_containerAppBundleIdentifier;
@property(readonly, copy) NSString *processBundleIdentifier; // @synthesize processBundleIdentifier=_processBundleIdentifier;
@property(readonly) _Bool isExtension; // @synthesize isExtension=_isExtension;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly) _HKEntitlements *entitlements; // @synthesize entitlements=_entitlements;
@property(readonly) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)restoreEntitlement:(id)arg1;
- (void)dropEntitlement:(id)arg1;
- (id)valueForEntitlement:(id)arg1;
- (_Bool)hasEntitlement:(id)arg1;
- (_Bool)hasRequiredEntitlement:(id)arg1 error:(id *)arg2;
@property(readonly) int processIdentifier;
@property(readonly, copy) NSString *applicationIdentifier;
- (id)_initWithConnection:(id)arg1 entitlements:(id)arg2;
- (id)initWithEntitlements:(id)arg1;
- (id)initWithConnection:(id)arg1 entitlements:(id)arg2;

@end

