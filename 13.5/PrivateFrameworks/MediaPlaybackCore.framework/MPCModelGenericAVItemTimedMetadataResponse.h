//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelResponse.h>

@class MPCModelGenericAVItemTimedMetadataStreamFields, MPSectionedCollection, NSData;

@interface MPCModelGenericAVItemTimedMetadataResponse : MPModelResponse
{
    MPModelResponse *_personalizationResponse;
    NSData *_adamIDData;
    MPCModelGenericAVItemTimedMetadataStreamFields *_streamFields;
    MPSectionedCollection *_unpersonalizedContentDescriptors;
}

- (void).cxx_destruct;
@property(copy, nonatomic) MPSectionedCollection *unpersonalizedContentDescriptors; // @synthesize unpersonalizedContentDescriptors=_unpersonalizedContentDescriptors;
@property(retain, nonatomic) MPCModelGenericAVItemTimedMetadataStreamFields *streamFields; // @synthesize streamFields=_streamFields;
@property(copy, nonatomic) NSData *adamIDData; // @synthesize adamIDData=_adamIDData;
- (void)_personalizationResponseDidInvalidateNotification:(id)arg1;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 personalizationResponse:(id)arg2;

@end

