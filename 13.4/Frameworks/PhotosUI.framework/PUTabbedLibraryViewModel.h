//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PXUIKeyCommandNamespace-Protocol.h>

@class NSArray, NSString, PUTabbedLibrarySettings, PXPreloadScheduler;

@interface PUTabbedLibraryViewModel : NSObject <PXUIKeyCommandNamespace>
{
    NSArray *_tabInfos;
    PUTabbedLibrarySettings *_settings;
    PXPreloadScheduler *_preloadScheduler;
}

+ (id)viewModelWithDefaultParameters;
+ (id)supportedNavigationDestinationTypes;
- (void).cxx_destruct;
@property(retain, nonatomic) PXPreloadScheduler *preloadScheduler; // @synthesize preloadScheduler=_preloadScheduler;
@property(retain, nonatomic) PUTabbedLibrarySettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) NSArray *tabInfos; // @synthesize tabInfos=_tabInfos;
- (id)tabbedLibraryViewController:(id)arg1 tabBarItemForContentMode:(int)arg2;
- (_Bool)_ppt_shouldShowNilTab;
- (_Bool)_ppt_shouldShowBlankTab;
- (_Bool)_shouldShowSharedTabForTabbedLibraryViewController:(id)arg1;
- (_Bool)_shouldShowSearchTabForTabbedLibraryViewController:(id)arg1;
- (_Bool)_shouldShowForYouTabForTabbedLibraryViewController:(id)arg1;
- (_Bool)_shouldShowMemoriesTabForTabbedLibraryViewController:(id)arg1;
- (_Bool)_shouldShowAllPhotosTabForTabbedLibraryViewController:(id)arg1;
- (_Bool)_shouldShowPhotosTabForTabbedLibraryViewController:(id)arg1;
- (_Bool)_shouldShowCuratedLibraryTabForTabbedLibraryViewController:(id)arg1;
- (_Bool)tabbedLibraryViewController:(id)arg1 shouldShowTabForContentMode:(int)arg2;
- (id)tabInfoForContentMode:(int)arg1;
- (int)contentModeForNavigationDestinationType:(long long)arg1;
- (id)initWithSettings:(id)arg1 preloadScheduler:(id)arg2;
- (void)performKeyCommand:(id)arg1 withRootParticipant:(id)arg2;
- (void)uiKeyCommandsWithDelegate:(id)arg1 addedIntoArray:(id)arg2;
@property(readonly, nonatomic) NSString *namespaceIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

