//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXFeedTestSectionInfo.h>

@class NSArray;

@interface PXFeedTestAssetsSectionInfo : PXFeedTestSectionInfo
{
    NSArray *_plAssets;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *plAssets; // @synthesize plAssets=_plAssets;
- (id)_fetchPhotoAssets:(long long)arg1;
- (id)countsByAssetDisplayType;
- (id)assetForItemAtIndex:(long long)arg1;
- (long long)typeForItemAtIndex:(long long)arg1;
- (long long)sectionType;
- (id)initWithPhotoLibrary:(id)arg1;

@end

