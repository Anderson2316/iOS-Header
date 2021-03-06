//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

#import "TFFeedbackSessionDelegate-Protocol.h"
#import "UIAdaptivePresentationControllerDelegate-Protocol.h"

@class NSString, TFFeedbackSession;

@interface ServiceTFFeedbackFormHostViewController : SBUIRemoteAlertServiceViewController <TFFeedbackSessionDelegate, UIAdaptivePresentationControllerDelegate>
{
    TFFeedbackSession *_hostedFeedbackSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFFeedbackSession *hostedFeedbackSession; // @synthesize hostedFeedbackSession=_hostedFeedbackSession;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)session:(id)arg1 didSubmitFeedbackFromViewController:(id)arg2;
- (void)cancelButtonPressed:(id)arg1;
- (void)_dismissViewService;
- (void)_presentFormViewControllerForSession:(id)arg1;
- (void)handleButtonActions:(id)arg1;
- (void)handleHomeButtonPressed;
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)prefersStatusBarHidden;
- (_Bool)_shouldRemoveViewFromHierarchyOnDisappear;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

