//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProviderDaemon/FPDExtensionSessionProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FPDDeadEndExtensionSession : NSObject <FPDExtensionSessionProtocol>
{
    _Bool hasFileProviderPresenceTCCAccess;
}

@property(nonatomic) _Bool hasFileProviderPresenceTCCAccess; // @synthesize hasFileProviderPresenceTCCAccess;
- (void)dumpStateTo:(id)arg1;
- (void)invalidate;
- (void)start;
- (void)asyncUnregisterLifetimeExtensionForObject:(id)arg1;
- (void)unregisterLifetimeExtensionForObject:(id)arg1;
- (void)registerLifetimeExtensionForObject:(id)arg1;
- (void)updatePresenceTCCWithAuditToken:(CDStruct_6ad76789)arg1;
- (id)newFileProviderProxyWithoutPID;
- (id)existingFileProviderProxyWithTimeout:(_Bool)arg1 pid:(int)arg2;
- (id)newFileProviderProxyWithoutPIDWithTimeout:(_Bool)arg1;
- (id)newFileProviderProxyWithTimeout:(_Bool)arg1 pid:(int)arg2;
- (id)newFileProviderProxyWithPID:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

