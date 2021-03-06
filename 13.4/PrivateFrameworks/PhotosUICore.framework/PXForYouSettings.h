//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXForYouSettings : PXSettings
{
    _Bool _showForYouSettingsAtTopLevel;
    _Bool _showMemories;
    _Bool _showSharedAlbumActivity;
    _Bool _showCMMSuggestions;
    _Bool _showCMMInvitations;
    _Bool _showEditSuggestions;
    _Bool _showRecentInterestSuggestions;
    _Bool _showPeopleQuestions;
    _Bool _showSurveyQuestions;
    _Bool _showFooter;
    _Bool _showSampleSuggestionGadgets;
    _Bool _showVerticalSampleGadgets;
    _Bool _showHorizontalGadget;
    _Bool _allowVideoPlayback;
    _Bool _allowLoopPlayback;
    _Bool _allowGIFPlayback;
    _Bool _useMockData;
    _Bool _forceDisplayReportJunk;
    _Bool _forcePortraitBias;
    _Bool _useSquareSharedAlbumActivity;
    _Bool _disableSharedAlbumTopMargin;
    _Bool _alwaysShowSuggestionRenderingOverlay;
    _Bool _showFeaturedPhotosBadges;
    _Bool _delayEditRenders;
    _Bool _useCachedEditRenders;
    unsigned long long _maxSimultaneousVideoCount;
    double _minimumVisibilityForVideoPlayback;
    long long _sortingAlgorithm;
    unsigned long long _maxMemoriesToFetch;
}

+ (id)keyPathsAffectingGadgetVisibility;
+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) unsigned long long maxMemoriesToFetch; // @synthesize maxMemoriesToFetch=_maxMemoriesToFetch;
@property(nonatomic) long long sortingAlgorithm; // @synthesize sortingAlgorithm=_sortingAlgorithm;
@property(nonatomic) _Bool useCachedEditRenders; // @synthesize useCachedEditRenders=_useCachedEditRenders;
@property(nonatomic) _Bool delayEditRenders; // @synthesize delayEditRenders=_delayEditRenders;
@property(nonatomic) _Bool showFeaturedPhotosBadges; // @synthesize showFeaturedPhotosBadges=_showFeaturedPhotosBadges;
@property(nonatomic) _Bool alwaysShowSuggestionRenderingOverlay; // @synthesize alwaysShowSuggestionRenderingOverlay=_alwaysShowSuggestionRenderingOverlay;
@property(nonatomic) _Bool disableSharedAlbumTopMargin; // @synthesize disableSharedAlbumTopMargin=_disableSharedAlbumTopMargin;
@property(nonatomic) _Bool useSquareSharedAlbumActivity; // @synthesize useSquareSharedAlbumActivity=_useSquareSharedAlbumActivity;
@property(nonatomic) _Bool forcePortraitBias; // @synthesize forcePortraitBias=_forcePortraitBias;
@property(nonatomic) _Bool forceDisplayReportJunk; // @synthesize forceDisplayReportJunk=_forceDisplayReportJunk;
@property(nonatomic) _Bool useMockData; // @synthesize useMockData=_useMockData;
@property(nonatomic) double minimumVisibilityForVideoPlayback; // @synthesize minimumVisibilityForVideoPlayback=_minimumVisibilityForVideoPlayback;
@property(nonatomic) unsigned long long maxSimultaneousVideoCount; // @synthesize maxSimultaneousVideoCount=_maxSimultaneousVideoCount;
@property(nonatomic) _Bool allowGIFPlayback; // @synthesize allowGIFPlayback=_allowGIFPlayback;
@property(nonatomic) _Bool allowLoopPlayback; // @synthesize allowLoopPlayback=_allowLoopPlayback;
@property(nonatomic) _Bool allowVideoPlayback; // @synthesize allowVideoPlayback=_allowVideoPlayback;
@property(nonatomic) _Bool showHorizontalGadget; // @synthesize showHorizontalGadget=_showHorizontalGadget;
@property(nonatomic) _Bool showVerticalSampleGadgets; // @synthesize showVerticalSampleGadgets=_showVerticalSampleGadgets;
@property(nonatomic) _Bool showSampleSuggestionGadgets; // @synthesize showSampleSuggestionGadgets=_showSampleSuggestionGadgets;
@property(nonatomic) _Bool showFooter; // @synthesize showFooter=_showFooter;
@property(nonatomic) _Bool showSurveyQuestions; // @synthesize showSurveyQuestions=_showSurveyQuestions;
@property(nonatomic) _Bool showPeopleQuestions; // @synthesize showPeopleQuestions=_showPeopleQuestions;
@property(nonatomic) _Bool showRecentInterestSuggestions; // @synthesize showRecentInterestSuggestions=_showRecentInterestSuggestions;
@property(nonatomic) _Bool showEditSuggestions; // @synthesize showEditSuggestions=_showEditSuggestions;
@property(nonatomic) _Bool showCMMInvitations; // @synthesize showCMMInvitations=_showCMMInvitations;
@property(nonatomic) _Bool showCMMSuggestions; // @synthesize showCMMSuggestions=_showCMMSuggestions;
@property(nonatomic) _Bool showSharedAlbumActivity; // @synthesize showSharedAlbumActivity=_showSharedAlbumActivity;
@property(nonatomic) _Bool showMemories; // @synthesize showMemories=_showMemories;
@property(nonatomic) _Bool showForYouSettingsAtTopLevel; // @synthesize showForYouSettingsAtTopLevel=_showForYouSettingsAtTopLevel;
- (void)setDefaultValues;
- (id)parentSettings;

@end

