//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPActionOperation.h>

@class NSArray;

@interface FPModifyFavoritesOperation : FPActionOperation
{
    NSArray *_items;
    NSArray *_ranks;
    _Bool _isUnfavorite;
}

- (void).cxx_destruct;
- (void)mainWithExtensionProxy:(id)arg1;
- (void)presendNotifications;
- (id)initWithItemsToUnfavorite:(id)arg1;
- (id)initWithItemsToFavorite:(id)arg1 favoriteRanks:(id)arg2;
- (id)initWithItems:(id)arg1 favoriteRanks:(id)arg2 isUnfavorite:(_Bool)arg3;
- (id)replicateForItems:(id)arg1;

@end

