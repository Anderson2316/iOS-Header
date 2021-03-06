//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkServiceProxy/NWNetworkAgent-Protocol.h>

@class NSData, NSPAppRule, NSPConfiguration, NSString, NSUUID;

@interface NSPNetworkAgent : NSObject <NWNetworkAgent>
{
    unsigned char _dataDigest[32];
    _Bool active;
    _Bool kernelActivated;
    _Bool userActivated;
    _Bool voluntary;
    NSUUID *agentUUID;
    NSString *agentDescription;
    NSPConfiguration *_configuration;
    NSPAppRule *_appRule;
    NSData *_keybag;
    NSData *_agentData;
}

+ (id)agentFromData:(id)arg1;
+ (id)agentType;
+ (id)agentDomain;
@property(retain) NSData *agentData; // @synthesize agentData=_agentData;
@property(retain) NSData *keybag; // @synthesize keybag=_keybag;
@property(retain) NSPAppRule *appRule; // @synthesize appRule=_appRule;
@property(retain) NSPConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic, getter=isVoluntary) _Bool voluntary; // @synthesize voluntary;
@property(nonatomic, getter=isUserActivated) _Bool userActivated; // @synthesize userActivated;
@property(nonatomic, getter=isKernelActivated) _Bool kernelActivated; // @synthesize kernelActivated;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active;
@property(copy, nonatomic) NSString *agentDescription; // @synthesize agentDescription;
@property(copy, nonatomic) NSUUID *agentUUID; // @synthesize agentUUID;
- (void).cxx_destruct;
- (void)parseAgentData;
- (id)copyAgentData;
- (_Bool)isEqual:(id)arg1;
- (id)init;

// Remaining properties
@property(nonatomic, getter=isNetworkProvider) _Bool networkProvider;
@property(nonatomic, getter=isNexusProvider) _Bool nexusProvider;
@property(nonatomic) _Bool requiresAssert;
@property(nonatomic, getter=isSpecificUseOnly) _Bool specificUseOnly;
@property(nonatomic) _Bool supportsBrowseRequests;
@property(nonatomic) _Bool supportsResolveRequests;
@property(nonatomic) _Bool updateClientsImmediately;

@end

