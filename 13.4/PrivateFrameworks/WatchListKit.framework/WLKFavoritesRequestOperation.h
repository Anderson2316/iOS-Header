//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSArray;

@interface WLKFavoritesRequestOperation : WLKUTSNetworkRequestOperation
{
    NSArray *_favorites;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *favorites; // @synthesize favorites=_favorites;
- (void)processResponse;
- (void)prepareURLRequest:(CDUnknownBlockType)arg1;
- (id)initWithCaller:(id)arg1;

@end

