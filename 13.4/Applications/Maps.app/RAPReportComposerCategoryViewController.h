//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPReportTableViewController.h"

#import "RAPHomeWorkCoordinatorDelegate-Protocol.h"
#import "RAPInstrumentableTarget-Protocol.h"
#import "RAPRouter-Protocol.h"

@class NSString, RAPAddAPlaceReportComposer, RAPHomeWorkCoordinator, RAPLayoutDownloader, RAPQuestion, RAPReportComposerImageryCorrectionController, RAPTransitStationInfoController, RAPWorkflowLayoutManager, UIActivityIndicatorView;
@protocol RAPMenu;

__attribute__((visibility("hidden")))
@interface RAPReportComposerCategoryViewController : RAPReportTableViewController <RAPHomeWorkCoordinatorDelegate, RAPRouter, RAPInstrumentableTarget>
{
    RAPReportComposerImageryCorrectionController *_imageryCorrectionController;
    RAPAddAPlaceReportComposer *_addAPlaceComposer;
    RAPTransitStationInfoController *_placeCorrectionController;
    RAPLayoutDownloader *_layoutDownloader;
    RAPWorkflowLayoutManager *_layoutManager;
    UIActivityIndicatorView *_activityIndicator;
    RAPQuestion<RAPMenu> *_categoryQuestion;
    RAPHomeWorkCoordinator *_homeWorkCoordinator;
}

- (void).cxx_destruct;
- (void)homeWorkCoordinator:(id)arg1 finishedRefiningCoordinate:(struct CLLocationCoordinate2D)arg2 withShortcut:(id)arg3;
- (void)homeWorkCoordinatorRequestsChangeAddress:(id)arg1 withShortcut:(id)arg2;
- (void)proceedToLineShapeIncorrectQuestion:(id)arg1;
- (void)proceedToSchedulesIncorrectQuestion:(id)arg1;
- (void)proceedToLineNameIncorrectQuestion:(id)arg1;
- (void)proceedToRAPHomeWorkCorrectionsQuestion:(id)arg1;
- (void)proceedToStationAccessPointQuestion:(id)arg1;
- (void)proceedToStationAccessPointSelectionQuestion:(id)arg1;
- (void)proceedToBadRouteSuggestionsQuestion:(id)arg1;
- (void)proceedToTransitLineSelectionQuestion:(id)arg1;
- (void)proceedToTransitSubcategoryQuestion:(id)arg1;
- (void)proceedToTransitStationInfoQuestion:(id)arg1;
- (void)proceedToAddNewPlaceQuestion:(id)arg1;
- (void)proceedToLabelCorrectionsQuestion:(id)arg1;
- (void)proceedToBrandCorrectionsQuestion:(id)arg1;
- (void)proceedToPlaceClosureQuestion:(id)arg1;
- (void)proceedToPlaceCorrectionsQuestion:(id)arg1;
- (void)proceedToPlaceLocationCorrectionsQuestion:(id)arg1;
- (void)proceedToProblemWithImageryQuestion:(id)arg1;
- (void)proceedToProblemWithDirectionsQuestion:(id)arg1;
- (void)proceedToIncorrectSearchResultsQuestion:(id)arg1;
- (void)proceedToArrivalTimeIncorrectQuestion:(id)arg1;
- (void)proceedToProblemNotListedQuestion:(id)arg1;
- (void)proceedToNextQuestion:(id)arg1;
@property(readonly, nonatomic) int analyticTarget;
- (void)_cancel;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)_shouldUseServerControlledUI;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithReport:(id)arg1 question:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

