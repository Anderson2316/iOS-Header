//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICRequestOperation.h>

@class ICBuyProductRequest, ICStoreMediaResponseItem, ICStoreRequestContext, MPMediaItem;

@interface BLStoreItemMetadataRequest : ICRequestOperation
{
    ICStoreRequestContext *_requestContext;
    MPMediaItem *_mediaItem;
    ICBuyProductRequest *_buyProductRequest;
    ICStoreMediaResponseItem *_storeMetadata;
}

- (void).cxx_destruct;
- (id)_responseDictionaryForKeyCertificateURL:(id)arg1 keyServerURL:(id)arg2;
- (void)_performBuyProductRequest;
- (void)execute;
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithRequestContext:(id)arg1 mediaItem:(id)arg2;

@end

