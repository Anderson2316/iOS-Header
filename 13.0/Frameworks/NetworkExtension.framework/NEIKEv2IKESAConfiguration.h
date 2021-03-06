//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>

@class NSArray, NSSet, NSString, NWAddressEndpoint, NWEndpoint;

@interface NEIKEv2IKESAConfiguration : NSObject <NSCopying>
{
    NSArray *_proposals;
    _Bool _randomizeLocalPort;
    _Bool _serverMode;
    _Bool _allowRedirect;
    _Bool _disableSwitchToNATTPorts;
    _Bool _allowTCPEncapsulation;
    _Bool _useTLSForTCPEncapsulation;
    _Bool _forceUDPEncapsulation;
    unsigned short _tcpEncapsulationPort;
    unsigned int _nonceSize;
    NWEndpoint *_localEndpoint;
    NWEndpoint *_remoteEndpoint;
    NSString *_outgoingInterfaceName;
    NWAddressEndpoint *_redirectedFromServer;
    NSArray *_customIKESAInitPayloads;
    NSArray *_customIKESAInitVendorPayloads;
    NSSet *_extraSupportedSignatureHashes;
}

@property(retain) NSSet *extraSupportedSignatureHashes; // @synthesize extraSupportedSignatureHashes=_extraSupportedSignatureHashes;
@property(retain) NSArray *customIKESAInitVendorPayloads; // @synthesize customIKESAInitVendorPayloads=_customIKESAInitVendorPayloads;
@property(retain) NSArray *customIKESAInitPayloads; // @synthesize customIKESAInitPayloads=_customIKESAInitPayloads;
@property(retain) NWAddressEndpoint *redirectedFromServer; // @synthesize redirectedFromServer=_redirectedFromServer;
@property unsigned int nonceSize; // @synthesize nonceSize=_nonceSize;
@property unsigned short tcpEncapsulationPort; // @synthesize tcpEncapsulationPort=_tcpEncapsulationPort;
@property _Bool forceUDPEncapsulation; // @synthesize forceUDPEncapsulation=_forceUDPEncapsulation;
@property _Bool useTLSForTCPEncapsulation; // @synthesize useTLSForTCPEncapsulation=_useTLSForTCPEncapsulation;
@property _Bool allowTCPEncapsulation; // @synthesize allowTCPEncapsulation=_allowTCPEncapsulation;
@property _Bool disableSwitchToNATTPorts; // @synthesize disableSwitchToNATTPorts=_disableSwitchToNATTPorts;
@property _Bool allowRedirect; // @synthesize allowRedirect=_allowRedirect;
@property _Bool serverMode; // @synthesize serverMode=_serverMode;
@property _Bool randomizeLocalPort; // @synthesize randomizeLocalPort=_randomizeLocalPort;
@property(retain) NSString *outgoingInterfaceName; // @synthesize outgoingInterfaceName=_outgoingInterfaceName;
@property(retain) NWEndpoint *remoteEndpoint; // @synthesize remoteEndpoint=_remoteEndpoint;
@property(retain) NWEndpoint *localEndpoint; // @synthesize localEndpoint=_localEndpoint;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *proposals;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)init;

@end

