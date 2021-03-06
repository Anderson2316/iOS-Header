//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBApplicationSceneViewController.h>

#import <SpringBoard/SBDeviceApplicationSceneHandleObserver-Protocol.h>
#import <SpringBoard/SBDeviceApplicationSceneOverlayViewProviderDelegate-Protocol.h>
#import <SpringBoard/SBDeviceApplicationSceneViewControlling-Protocol.h>
#import <SpringBoard/SBSceneViewDelegate-Protocol.h>
#import <SpringBoard/SBSceneViewStatusBarAssertionObserver-Protocol.h>

@class MTLumaDodgePillSettings, NSHashTable, NSMutableArray, NSString, SBDeviceApplicationSceneView, SBFHomeGrabberSettings, SBHomeGrabberView, SBSceneHandle, SBSceneViewStatusBarAssertion, UIApplicationSceneDeactivationAssertion, UIStatusBar, UIView;
@protocol BSInvalidatable, SBApplicationSceneViewControllingStatusBarDelegate, SBScenePlaceholderContentContext;

@interface SBDeviceApplicationSceneViewController : SBApplicationSceneViewController <SBDeviceApplicationSceneOverlayViewProviderDelegate, SBDeviceApplicationSceneHandleObserver, SBSceneViewDelegate, SBSceneViewStatusBarAssertionObserver, SBDeviceApplicationSceneViewControlling>
{
    UIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    NSMutableArray *_overlayViewProviders;
    NSMutableArray *_activeOverlayViewProviders;
    SBSceneViewStatusBarAssertion *_activeOverlayStatusBarAssertion;
    SBSceneViewStatusBarAssertion *_placeholderStatusBarAssertion;
    UIStatusBar *_fakeStatusBar;
    id <BSInvalidatable> _liveContentDisableAssertion;
    SBFHomeGrabberSettings *_homeGrabberSettings;
    _Bool _rendersWhileLocked;
    _Bool _shouldRasterizeSceneHostView;
    NSHashTable *_statusBarAssertions;
    NSString *_sceneHostViewMinificationFilter;
    long long _homeGrabberDisplayMode;
    MTLumaDodgePillSettings *_homeGrabberPillSettings;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MTLumaDodgePillSettings *homeGrabberPillSettings; // @synthesize homeGrabberPillSettings=_homeGrabberPillSettings;
@property(nonatomic) long long homeGrabberDisplayMode; // @synthesize homeGrabberDisplayMode=_homeGrabberDisplayMode;
@property(copy, nonatomic) NSString *sceneHostViewMinificationFilter; // @synthesize sceneHostViewMinificationFilter=_sceneHostViewMinificationFilter;
@property(nonatomic) _Bool shouldRasterizeSceneHostView; // @synthesize shouldRasterizeSceneHostView=_shouldRasterizeSceneHostView;
@property(nonatomic) _Bool rendersWhileLocked; // @synthesize rendersWhileLocked=_rendersWhileLocked;
@property(retain, nonatomic, getter=_statusBarAssertions, setter=_setStatusBarAssertions:) NSHashTable *statusBarAssertions; // @synthesize statusBarAssertions=_statusBarAssertions;
- (void)_didDisableSecureDisplay;
- (void)_willEnableSecureDisplay;
- (void)_configureForSecureDisplay:(_Bool)arg1;
- (void)_configureForCurrentSecureDisplayState;
- (_Bool)_shouldSuppressHomeGrabber;
- (void)_removeFakeStatusBar;
- (void)_addFakeStatusBarWithStyleRequest:(id)arg1 enabledParts:(long long)arg2;
- (void)_layoutFakeStatusBar;
- (_Bool)_configureFakeStatusBarWithCurrentStyleRequestCreatingIfNecessary;
- (void)_relinquishResignActiveAssertion;
- (void)_recalculateResignActiveAssertionForActiveOverlays;
- (void)_destroySceneOverlayViewProviders;
- (void)_createSceneOverlayViewProvidersIfNecessary;
- (void)sceneHandle:(id)arg1 didChangeStatusBarAvoidanceFrame:(struct CGRect)arg2;
- (void)sceneHandle:(id)arg1 didChangeStatusBarParts:(long long)arg2;
- (void)sceneView:(id)arg1 changedPreferredStatusBarStyleTo:(long long)arg2;
- (id)animationFactoryForImplicitTransitionFromMode:(long long)arg1 toMode:(long long)arg2 defaultFactory:(id)arg3;
- (_Bool)_isApplicationStatusBarHidden;
- (_Bool)overlayViewProviderRendersWhileLocked:(id)arg1;
- (void)deactivateOverlayForViewProvider:(id)arg1;
- (void)activateOverlayForViewProvider:(id)arg1;
- (void)_statusBarAssertionsDidUpdate;
- (void)statusBarAssertionDidInvalidate:(id)arg1;
- (void)statusBarAssertionDidUpdate:(id)arg1;
- (id)statusBarAssertionWithStatusBarSettings:(id)arg1 atLevel:(unsigned long long)arg2;
- (id)statusBarAssertionWithStatusBarHidden:(_Bool)arg1 atLevel:(unsigned long long)arg2;
@property(readonly, nonatomic) SBHomeGrabberView *homeGrabberView;
- (_Bool)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (_Bool)definesPresentationContext;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
- (void)invalidate;
- (void)dealloc;
- (id)initWithSceneHandle:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate;
@property(readonly, nonatomic) long long contentInterfaceOrientation;
@property(readonly, nonatomic) struct CGSize contentReferenceSize;
@property(retain, nonatomic) UIView *customContentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long displayMode;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long overrideStatusBarStyle;
@property(retain, nonatomic) id <SBScenePlaceholderContentContext> placeholderContentContext;
@property(readonly, nonatomic) SBSceneHandle *sceneHandle;
@property(readonly, nonatomic, getter=_sceneView) SBDeviceApplicationSceneView *sceneView; // @dynamic sceneView;
@property(readonly, nonatomic) double statusBarAlpha;
@property(readonly) Class superclass;

@end

