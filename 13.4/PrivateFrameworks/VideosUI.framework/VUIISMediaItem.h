//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVPlayback/TVPBaseMediaItem.h>

#import <VideosUI/TVPContentKeyLoading-Protocol.h>

@class NSData, NSDictionary, NSMutableArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VUIISMediaItem : TVPBaseMediaItem <TVPContentKeyLoading>
{
    _Bool _disableScrubbing;
    NSURL *_url;
    NSURL *_tokenServerURL;
    NSURL *_stopServerURL;
    NSDictionary *_tokenServerParameters;
    NSString *_assetIDForStopping;
    long long _state;
    NSData *_certificateData;
    NSMutableArray *_requestsAwaitingCertFetch;
    unsigned long long _loadingContext;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long loadingContext; // @synthesize loadingContext=_loadingContext;
@property(retain, nonatomic) NSMutableArray *requestsAwaitingCertFetch; // @synthesize requestsAwaitingCertFetch=_requestsAwaitingCertFetch;
@property(retain, nonatomic) NSData *certificateData; // @synthesize certificateData=_certificateData;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *assetIDForStopping; // @synthesize assetIDForStopping=_assetIDForStopping;
@property(retain, nonatomic) NSDictionary *tokenServerParameters; // @synthesize tokenServerParameters=_tokenServerParameters;
@property(retain, nonatomic) NSURL *stopServerURL; // @synthesize stopServerURL=_stopServerURL;
@property(retain, nonatomic) NSURL *tokenServerURL; // @synthesize tokenServerURL=_tokenServerURL;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) _Bool disableScrubbing; // @synthesize disableScrubbing=_disableScrubbing;
- (void)_failKeyRequests:(id)arg1 withError:(id)arg2;
- (void)_sendURLRequestToServer:(id)arg1 forKeyRequest:(id)arg2 attemptNumber:(unsigned long long)arg3;
- (void)_sendKeyRequestsToServer:(id)arg1 token:(id)arg2;
- (double)_randomRetryDelayForFailedAttemptNumber:(unsigned long long)arg1;
- (_Bool)_allowedToRetryRequestForError:(id)arg1 response:(id)arg2;
- (void)_fetchTokenForAssetID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_sendStopForAssetID:(id)arg1;
- (id)_linearServiceRequestForURL:(id)arg1 assetID:(id)arg2;
- (void)_generateKeyRequestDataForKeyRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startKeyRequests:(id)arg1 token:(id)arg2;
- (void)_loadCertificateDataFromURL:(id)arg1 loadingContext:(unsigned long long)arg2 attemptNumber:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_parseCertificateURL:(id *)arg1 keyServerURL:(id *)arg2 assetID:(id *)arg3 fromKeyRequest:(id)arg4;
- (id)_assetIDDataForKeyRequest:(id)arg1;
- (id)_assetIDForKeyRequest:(id)arg1;
- (id)_keyServerURLForKeyRequest:(id)arg1;
- (id)_certificateURLForKeyRequest:(id)arg1;
- (void)loadFairPlayStreamingKeyRequests:(id)arg1;
- (void)cleanUpMediaItem;
- (id)mediaItemMetadataForProperty:(id)arg1;
- (_Bool)hasTrait:(id)arg1;
- (_Bool)isEqualToMediaItem:(id)arg1;
- (id)mediaItemURL;
- (id)initWithURL:(id)arg1 tokenServerURL:(id)arg2 stopServerURL:(id)arg3 tokenServerParameters:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

