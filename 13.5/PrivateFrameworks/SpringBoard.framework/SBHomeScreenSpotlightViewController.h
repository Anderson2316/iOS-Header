//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSpotlightMultiplexingViewController.h>

@class FBDisplayLayoutElement;
@protocol SBHomeScreenSpotlightDismissalDelegate;

@interface SBHomeScreenSpotlightViewController : SBSpotlightMultiplexingViewController
{
    id <SBHomeScreenSpotlightDismissalDelegate> _homescreenSpotlightDelegate;
    FBDisplayLayoutElement *_displayLayoutElement;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FBDisplayLayoutElement *displayLayoutElement; // @synthesize displayLayoutElement=_displayLayoutElement;
@property(readonly, nonatomic) __weak id <SBHomeScreenSpotlightDismissalDelegate> homescreenSpotlightDelegate; // @synthesize homescreenSpotlightDelegate=_homescreenSpotlightDelegate;
- (unsigned long long)remoteSearchViewPresentationSource;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned long long)level;
- (id)initWithDelegate:(id)arg1;

@end

