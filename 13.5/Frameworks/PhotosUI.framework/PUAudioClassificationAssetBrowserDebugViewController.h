//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUPhotosAlbumViewController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUAudioClassificationAssetBrowserDebugViewController : PUPhotosAlbumViewController
{
    NSString *_audioClassificationName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *audioClassificationName; // @synthesize audioClassificationName=_audioClassificationName;
- (id)_cloneAsset:(id)arg1 toDirectory:(id)arg2;
- (_Bool)_writeDiagnosticsToURL:(id)arg1 incorrectAssets:(id)arg2;
- (void)_fileRadarWithIncorrectAssets:(id)arg1;
- (void)_presentTapToRadar;
- (void)getTitle:(out id *)arg1 prompt:(out id *)arg2 shouldHideBackButton:(out _Bool *)arg3 leftBarButtonItems:(out id *)arg4 rightBarButtonItems:(out id *)arg5;
- (void)viewDidLoad;

@end

