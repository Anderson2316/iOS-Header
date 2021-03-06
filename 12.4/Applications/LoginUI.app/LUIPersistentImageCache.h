//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBFFileCacheFaultHandler-Protocol.h"

@class CATOperationQueue, NSString, NSURL, SBFFileCache, SBFFileCacheFileStore;

@interface LUIPersistentImageCache : NSObject <SBFFileCacheFaultHandler>
{
    SBFFileCacheFileStore *mDownloadedMediumImageFileStore;
    SBFFileCacheFileStore *mDownloadedLargeImageFileStore;
    SBFFileCache *mMediumImageCache;
    SBFFileCache *mLargeImageCache;
    NSURL *mSystemGroupContainerURL;
    NSURL *mLoginUIContainerURL;
    CATOperationQueue *mCATOperationQueue;
}

+ (id)sharedCache;
- (void).cxx_destruct;
- (void)fileCache:(id)arg1 loadFileForIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_isNSURLDomainTimeoutError:(id)arg1;
- (void)_imageFetchDidFinishForOperation:(id)arg1 user:(id)arg2 imageType:(unsigned long long)arg3;
- (void)_addImageFetchOperationToQueueForUser:(id)arg1 imageType:(unsigned long long)arg2;
- (void)cancelAllPendingImageFetchOperations;
- (void)fetchImagesAsyncForUsers:(id)arg1;
- (void)fetchImageForURL:(id)arg1 toDestination:(long long)arg2 scaleToSquareImage:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_downloadImageInURL:(id)arg1 toDestination:(long long)arg2 scaleToSquareImage:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_cacheDownloadedImage:(id)arg1 toDestionation:(long long)arg2 forURL:(id)arg3 scaleToSquareImage:(_Bool)arg4;
- (void)_cachedImageForURL:(id)arg1 fromDestionation:(long long)arg2 scaleToSquareImage:(_Bool)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (id)_fileWrapperFromImage:(id)arg1;
- (id)_imageFromFileWrapper:(id)arg1;
- (id)_cacheForDestination:(long long)arg1;
- (id)_fileStoreForDestination:(long long)arg1;
- (id)_urlForDestination:(long long)arg1;
- (id)_systemGroupContainerURLWithGroupIdentifier:(id)arg1;
@property(readonly) SBFFileCacheFileStore *downloadedLargeImageFileStore;
@property(readonly) SBFFileCacheFileStore *downloadedMediumImageFileStore;
@property(readonly) SBFFileCache *largeImageCache;
@property(readonly) SBFFileCache *mediumImageCache;
@property(readonly) NSURL *systemGroupContainerURL;
@property(readonly) NSURL *loginUIContainerURL;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

