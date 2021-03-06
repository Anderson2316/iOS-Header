//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class MPAVController, MPAVItem, MPPlaybackContext, NSString;
@protocol MPAVItemQueueIdentifier;

@protocol MPAVQueueController <NSObject>
@property(readonly, nonatomic) long long currentIndex;
@property(nonatomic) __weak MPAVController *avController;
@property(readonly, nonatomic) _Bool allowsQueueResetWhenReachingEnd;
@property(readonly, nonatomic) long long upNextItemCount;
@property(readonly, nonatomic) long long playlistItemCount;
@property(nonatomic) _Bool shouldDeferItemLoading;
@property(nonatomic) long long repeatMode;
@property(readonly, nonatomic) _Bool canSkipToPreviousItem;
@property(nonatomic) __weak id delegate;
@property(readonly, nonatomic) MPAVItem *currentItem;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
- (long long)_indexForStringIdentifier:(NSString *)arg1;
- (long long)indexOfItemIdentifier:(id <MPAVItemQueueIdentifier>)arg1;
- (long long)indexWithDelta:(long long)arg1 fromIndex:(long long)arg2 ignoreElapsedTime:(_Bool)arg3 didReachEnd:(_Bool *)arg4;
- (void)setCurrentIndex:(long long)arg1 selectionDirection:(long long)arg2;
- (NSString *)contentItemIDForPlaylistIndex:(long long)arg1;
- (unsigned long long)indexForContentItemID:(NSString *)arg1;
- (MPAVItem *)itemForPlaylistIndex:(long long)arg1;
- (void)updateForSoundCheckDefaultsChange;
- (void)handlePlaybackFailureForItem:(MPAVItem *)arg1;
- (void)updateLocationDependentPropertiesForItem:(MPAVItem *)arg1;
- (_Bool)isPlaceholderItemForContentItemID:(NSString *)arg1;
- (MPAVItem *)itemForContentItemID:(NSString *)arg1;
- (void)finalizeStateRestorationWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)reloadWithPlaybackContext:(MPPlaybackContext *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)reloadItemsKeepingCurrentItem:(_Bool)arg1;
- (void)reset;
- (unsigned long long)displayCountForItem:(MPAVItem *)arg1;
- (unsigned long long)displayIndexForItem:(MPAVItem *)arg1;
- (_Bool)canSkipToPreviousItemForItem:(MPAVItem *)arg1;
- (_Bool)canSkipItem:(MPAVItem *)arg1;
- (_Bool)canSeekItem:(MPAVItem *)arg1;
- (_Bool)hasQueueContents;
@end

