//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSArray, NSObject, VUICollectionChangeSet;
@protocol VUIHomeShareMediaLibraryManager;

@protocol VUIHomeShareMediaLibraryManagerDelegate <NSObject>
- (void)homeShareManager:(NSObject<VUIHomeShareMediaLibraryManager> *)arg1 mediaLibrariesDidUpdate:(NSArray *)arg2 withChangeSet:(VUICollectionChangeSet *)arg3;
@end

