//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/PKPeerPaymentWebServiceArchiver-Protocol.h>

@class NPKCompanionAgentConnection, NSString;

@interface NPKSharedPeerPaymentWebServiceArchiver : NSObject <PKPeerPaymentWebServiceArchiver>
{
    NPKCompanionAgentConnection *_connection;
}

@property(retain, nonatomic) NPKCompanionAgentConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)archiveContext:(id)arg1;
- (id)initWithCompanionAgentConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

