//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/WLKBasicContentMetadata.h>

@class NSDate, NSString, WLKShowContentRating;

@interface WLKBasicShowMetadata : WLKBasicContentMetadata
{
    WLKShowContentRating *_contentRating;
    NSDate *_releaseDate;
    NSDate *_finaleDate;
    NSString *_network;
}

@property(readonly, copy, nonatomic) NSString *network; // @synthesize network=_network;
@property(readonly, nonatomic) NSDate *finaleDate; // @synthesize finaleDate=_finaleDate;
@property(readonly, nonatomic) NSDate *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(readonly, nonatomic) WLKShowContentRating *contentRating; // @synthesize contentRating=_contentRating;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)arg1;

@end

