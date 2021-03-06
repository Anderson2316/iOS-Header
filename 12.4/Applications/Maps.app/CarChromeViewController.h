//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "StackedChromeViewController.h"

#import "CarBannerControllerDelegate-Protocol.h"
#import "CarCardViewDelegate-Protocol.h"
#import "CarChromeViews-Protocol.h"
#import "CarMapControlsDelegate-Protocol.h"
#import "CarMapSettingsDelegate-Protocol.h"
#import "CarOverlayControllerDelegate-Protocol.h"
#import "CarOverlayHosting-Protocol.h"
#import "CarZoomButtonViewDelegate-Protocol.h"
#import "LightLevelObserver-Protocol.h"
#import "PassThroughViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "_UIFocusEnvironmentPrivate-Protocol.h"

@class CarAccessoriesOverlay, CarAlertViewController, CarCardsOverlay, CarChromeState, CarDebugFramesView, CarMapControlsOverlay, CarMapNudgerizer, CarMapSettings, CarMapsFocusGuide, CarNavigationController, CarNavigationDisplay, CarOverlayController, CarRouteGeniusAnnotationsManager, CarRouteGeniusManager, CustomPOIsController, DirectionsController, DirectionsManager, GEOMapServiceTraits, MKMapView, MapCameraController, MapViewResponder, NSArray, NSHashTable, NSMapTable, NSString, NSTimer, ParkedCarManager, PersonalizedItemManager, RouteAnnotationsController, SearchPinsManager, UILayoutGuide, UITapGestureRecognizer, UIView, UIViewController;
@protocol CarChromeModeController, UIFocusEnvironment, UIFocusItemContainer;

__attribute__((visibility("hidden")))
@interface CarChromeViewController : StackedChromeViewController <UIGestureRecognizerDelegate, CarZoomButtonViewDelegate, CarCardViewDelegate, _UIFocusEnvironmentPrivate, CarMapSettingsDelegate, LightLevelObserver, PassThroughViewDelegate, CarMapControlsDelegate, CarBannerControllerDelegate, CarOverlayControllerDelegate, CarChromeViews, CarOverlayHosting>
{
    NSTimer *_autohideIdleTimer;
    UITapGestureRecognizer *_autohideTapRecognizer;
    UITapGestureRecognizer *_doubleTapRecognizer;
    unsigned long long _autohideInterruptionsCount;
    NSHashTable *_interactionTokens;
    NSTimer *_navigationObscuredTimeout;
    _Bool _isCurrentlyVisible;
    _Bool _mapViewRegionIsChanging;
    _Bool _configuringMapView;
    CarChromeState *_lastOverlayState;
    CarAlertViewController *_currentAlertViewController;
    PersonalizedItemManager *_personalizedItemManager;
    CustomPOIsController *_customPOIsController;
    id <CarChromeModeController> _restoreFocusForMode;
    _Bool _ownsFocus;
    CarMapsFocusGuide *_overlayFocusGuide;
    _Bool _debugLayoutGuides;
    CarDebugFramesView *_debugLayoutGuidesView;
    _Bool _forceMapViewInactive;
    _Bool _runningNavigation;
    _Bool _haveVehicleDirection;
    SearchPinsManager *_searchPinsManager;
    RouteAnnotationsController *_routeAnnotationsController;
    ParkedCarManager *_parkedCarManager;
    CarNavigationDisplay *_navigationDisplay;
    CarCardsOverlay *_cardsOverlay;
    CarOverlayController *_overlayController;
    CarAccessoriesOverlay *_accessoriesOverlay;
    CarMapControlsOverlay *_mapControlsOverlay;
    CarMapSettings *_defaultMapSettings;
    MapCameraController *_cameraController;
    CarRouteGeniusAnnotationsManager *_routeGeniusAnnotationsManager;
    CarRouteGeniusManager *_routeGeniusManager;
    CarMapNudgerizer *_nudgerizer;
    MapViewResponder *_mapViewResponder;
    UITapGestureRecognizer *_backButtonRecognizer;
    CDUnknownBlockType _doubleTapBlock;
    NSMapTable *_lastFocusedIdentifiersByMode;
    NSMapTable *_lastFocusedItemsByMode;
}

+ (Class)userLocationViewClass;
+ (id)mapReplacementColor;
+ (void)initialize;
+ (Class)chromeViewItemClass;
+ (Class)navigationBarClass;
+ (Class)navigationControllerClass;
+ (Class)containingViewClass;
@property(retain, nonatomic) NSMapTable *lastFocusedItemsByMode; // @synthesize lastFocusedItemsByMode=_lastFocusedItemsByMode;
@property(retain, nonatomic) NSMapTable *lastFocusedIdentifiersByMode; // @synthesize lastFocusedIdentifiersByMode=_lastFocusedIdentifiersByMode;
@property(copy, nonatomic) CDUnknownBlockType doubleTapBlock; // @synthesize doubleTapBlock=_doubleTapBlock;
@property(retain, nonatomic) UITapGestureRecognizer *backButtonRecognizer; // @synthesize backButtonRecognizer=_backButtonRecognizer;
@property(retain, nonatomic) MapViewResponder *mapViewResponder; // @synthesize mapViewResponder=_mapViewResponder;
@property(retain, nonatomic) CarMapNudgerizer *nudgerizer; // @synthesize nudgerizer=_nudgerizer;
@property(retain, nonatomic) CarRouteGeniusManager *routeGeniusManager; // @synthesize routeGeniusManager=_routeGeniusManager;
@property(retain, nonatomic) CarRouteGeniusAnnotationsManager *routeGeniusAnnotationsManager; // @synthesize routeGeniusAnnotationsManager=_routeGeniusAnnotationsManager;
@property(retain, nonatomic) MapCameraController *cameraController; // @synthesize cameraController=_cameraController;
@property(nonatomic) _Bool haveVehicleDirection; // @synthesize haveVehicleDirection=_haveVehicleDirection;
@property(retain, nonatomic) CarMapSettings *defaultMapSettings; // @synthesize defaultMapSettings=_defaultMapSettings;
@property(retain, nonatomic) CarMapControlsOverlay *mapControlsOverlay; // @synthesize mapControlsOverlay=_mapControlsOverlay;
@property(retain, nonatomic) CarAccessoriesOverlay *accessoriesOverlay; // @synthesize accessoriesOverlay=_accessoriesOverlay;
@property(retain, nonatomic) CarOverlayController *overlayController; // @synthesize overlayController=_overlayController;
@property(retain, nonatomic) CarCardsOverlay *cardsOverlay; // @synthesize cardsOverlay=_cardsOverlay;
@property(nonatomic, getter=isRunningNavigation) _Bool runningNavigation; // @synthesize runningNavigation=_runningNavigation;
@property(retain, nonatomic) CarNavigationDisplay *navigationDisplay; // @synthesize navigationDisplay=_navigationDisplay;
@property(readonly, nonatomic) PersonalizedItemManager *personalizedItemManager; // @synthesize personalizedItemManager=_personalizedItemManager;
@property(readonly, nonatomic) ParkedCarManager *parkedCarManager; // @synthesize parkedCarManager=_parkedCarManager;
@property(retain, nonatomic) RouteAnnotationsController *routeAnnotationsController; // @synthesize routeAnnotationsController=_routeAnnotationsController;
@property(retain, nonatomic) SearchPinsManager *searchPinsManager; // @synthesize searchPinsManager=_searchPinsManager;
- (void).cxx_destruct;
- (void)searchPinsManager:(id)arg1 displayPlaceCardForResult:(id)arg2;
- (void)carBannerControllerDidUpdateTrafficAlert:(id)arg1;
- (void)_handleBackButton;
- (void)_handleBackButtonPressed:(id)arg1;
- (id)_previousMode;
- (void)updateHardwareBackButtonBehavior;
- (void)setHardwareBackButtonBehavior:(long long)arg1 forMode:(id)arg2;
- (void)endInterruptingAutohideWithToken:(id)arg1;
- (void)beginInterruptingAutohideWithToken:(id)arg1;
- (void)_removeAutohideGestureRecognizer;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_addAutohideGestureRecognizer;
- (void)_stopAutohideIdleTimer;
- (void)_restartAutohideIdleTimer;
- (void)restartAutohideIdleTimerIfStarted;
- (void)_startAutohideIdleTimerIfStopped;
- (_Bool)isAutohidingContentHiddenForMode:(id)arg1;
@property(nonatomic, getter=isAutohidingContentForCurrentModeHidden) _Bool autohidingContentForCurrentModeHidden;
- (void)interruptAutohideForIncidentalInteraction;
- (void)_endAutohideInterruptingInteractionsWithCount:(unsigned long long)arg1;
- (void)_beginAutohideInterruptingInteractionsWithCount:(unsigned long long)arg1;
- (void)_humanPresenceDidChange;
- (void)_autohideGestureRecognizerDetectedTap:(id)arg1;
- (void)_autohideBecameIdle;
- (void)_updateAutohideBehavior;
- (void)_setAutohideBehavior:(long long)arg1 forMode:(id)arg2;
- (long long)_autohidingBehaviorForMode:(id)arg1;
- (void)_setAutohidingContentIsHidden:(_Bool)arg1 forMode:(id)arg2;
- (_Bool)_autohidingContentIsHiddenForMode:(id)arg1;
- (void)_requestAutohideBehaviorForMode:(id)arg1;
- (void)setNeedsAutohideBehaviorUpdateForMode:(id)arg1;
- (id)currentOverlayState;
- (void)carCardViewCloseButtonTapped:(id)arg1;
- (void)reloadCardAnimated:(_Bool)arg1;
- (void)captureUserActionSelectedSearchCategory:(id)arg1 categoriesDisplayed:(id)arg2;
- (void)captureUserActionPannedInDirection:(long long)arg1;
- (void)captureUserActionChangedTrackingMode:(long long)arg1;
- (void)captureUserAction:(int)arg1 selectedRouteIndex:(int)arg2;
- (void)captureUserAction:(int)arg1 mapItem:(id)arg2 atResultIndex:(int)arg3;
- (void)captureUserAction:(int)arg1 mapItem:(id)arg2;
- (void)captureUserAction:(int)arg1;
- (void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3;
- (void)captureUserAction:(int)arg1 onTarget:(int)arg2;
- (void)_captureUserActionBackToMode:(id)arg1;
- (int)_currentUsageTarget;
- (id)_userActionDetailsWithMapItem:(id)arg1 resultIndex:(int)arg2;
- (void)_enableZoomGesture:(_Bool)arg1;
- (void)_refreshZoomGesture;
- (void)updateNavPanRecenterButtonVisibility;
- (void)updateZoomControls;
- (void)zoomOut;
- (void)zoomOutButtonPressed;
- (void)zoomIn;
- (void)zoomInButtonPressed;
- (void)_explicitPanButtonPressed;
- (void)_recenterButtonPressed;
- (void)carMapControls:(id)arg1 didTriggerAction:(unsigned long long)arg2;
- (void)_reloadMapControlsInsetsForMode:(id)arg1;
- (void)_reloadMapControlsForMode:(id)arg1 animated:(_Bool)arg2;
- (void)_reloadAccessoriesInsetsForMode:(id)arg1;
- (void)_reloadAccessoriesForMode:(id)arg1 animated:(_Bool)arg2;
@property(readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (void)setOwnsFocus:(_Bool)arg1;
- (void)_preserveFocusedItemFromMode:(id)arg1 toMode:(id)arg2;
- (id)itemRepresentingOverlays;
- (id)itemRepresentingMapControls;
- (id)itemRepresentingNavigationBar;
- (id)visuallySelectedItem;
- (_Bool)suppressIdleFocus;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)_nudgeHandlesPress:(id)arg1;
- (_Bool)_shouldAllowKnobFocusMovement;
- (void)setNeedsFocusUpdateIfUnfocused;
- (void)disableDoubleTapRecognizer;
- (void)enableDoubleTapRecognizerWithBlock:(CDUnknownBlockType)arg1;
- (void)_handleDoubleTap:(id)arg1;
- (void)_userDefaultsDidChange:(id)arg1;
- (void)_navigationObscuredTimeoutFired:(id)arg1;
- (void)_stopNavigationObscuredTimeout;
- (void)_restartNavigationObscuredTimeout;
- (void)_startNavigationObscuredTimeout;
- (void)_startNavigationDisplayAnimated:(_Bool)arg1;
- (void)stopRunningNavigationAnimated:(_Bool)arg1;
- (void)startRunningNavigationAnimated:(_Bool)arg1;
@property(readonly, nonatomic) GEOMapServiceTraits *navigationAwareTraits;
- (void)_locationAuthorizationDidChange:(id)arg1;
- (void)mapViewNavigationCameraHasStoppedPanning:(id)arg1;
- (void)mapViewNavigationCameraHasStartedPanning:(id)arg1;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(_Bool)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 didStopRespondingToGesture:(long long)arg2 zoomDirection:(long long)arg3 zoomGestureType:(long long)arg4 didDecelerate:(_Bool)arg5 tiltDirection:(long long)arg6;
- (void)mapView:(id)arg1 canZoomOutDidChange:(_Bool)arg2;
- (void)mapView:(id)arg1 canZoomInDidChange:(_Bool)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (_Bool)shouldRecenterAndZoom;
- (void)mapSettings:(id)arg1 didApplyAnimated:(_Bool)arg2;
- (void)mapSettings:(id)arg1 willApplyAnimated:(_Bool)arg2;
- (_Bool)mapSettings:(id)arg1 shouldApplyAnimated:(_Bool *)arg2;
- (void)invalidateMapInsetsAnimated:(_Bool)arg1 duration:(double)arg2;
- (void)invalidateMapInsetsAnimated:(_Bool)arg1;
- (_Bool)shouldAnimateMapTransition:(_Bool)arg1;
- (void)mapViewInstanceDidChange;
- (void)setMapView:(id)arg1;
- (void)_resetMapViewDefaults:(id)arg1;
- (id)mapViewDelegate;
- (void)performUpdateForChangeToLightLevel:(long long)arg1 animation:(id)arg2;
- (void)updateLightLevelAnimated:(_Bool)arg1 lightLevel:(long long)arg2;
- (void)lightLevelController:(id)arg1 didUpdateLightLevel:(long long)arg2;
- (void)_presentAnyPendingAlert:(_Bool)arg1;
- (void)_dismissAlertViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_presentAlertViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)_presentSearchRefinementWithUserInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)presentInterruptionOfKind:(long long)arg1 userInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dismissInterruption;
- (void)_carExternalAccessoryStateUpdated:(id)arg1;
@property(readonly, nonatomic) id <CarChromeModeController> topMode;
- (id)topCarItem;
- (void)currentModeDidChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 animated:(_Bool)arg3;
- (void)currentModeWillChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 animated:(_Bool)arg3;
- (void)_updateDebugLayoutGuidesView;
- (void)overlayControllerDidUpdateMapInsets:(id)arg1;
- (void)setCollisionConstraintsEnabled:(_Bool)arg1 forOverlay:(id)arg2;
- (void)setCollisionConstraints:(id)arg1 forOverlay:(id)arg2;
- (void)setViewportConstraintsEnabled:(_Bool)arg1 forOverlay:(id)arg2;
- (void)setViewportConstraints:(id)arg1 forOverlay:(id)arg2;
- (void)setMapInsetsConstraintsEnabled:(_Bool)arg1 forOverlay:(id)arg2;
- (void)setMapInsetsConstraints:(id)arg1 forOverlay:(id)arg2;
- (void)setShowingConstraintsEnabled:(_Bool)arg1 forOverlay:(id)arg2;
- (void)setConstraints:(id)arg1 forShowingOverlay:(id)arg2;
- (void)setConstraints:(id)arg1 forHidingOverlay:(id)arg2;
- (id)collisionGuideForEdge:(unsigned long long)arg1;
@property(readonly, nonatomic) UILayoutGuide *viewportLayoutGuide;
@property(readonly, nonatomic) UILayoutGuide *mapInsetsLayoutGuide;
@property(readonly, nonatomic) UILayoutGuide *contentLayoutGuide;
@property(readonly, nonatomic) __weak UIViewController *containingViewController;
@property(readonly, nonatomic) UIView *overlayContentView;
- (struct UIEdgeInsets)labelEdgeInsets;
- (_Bool)_navigationBackButtonShouldForcePopToMode:(id)arg1 fromMode:(id)arg2;
- (void)_navigationControllerWillPopMode:(id)arg1 toMode:(id)arg2;
- (void)_navigationControllerWillShowMode:(id)arg1 fromMode:(id)arg2 animated:(_Bool)arg3;
- (id)_toViewControllerForNavContext:(id)arg1 willShowViewController:(id)arg2;
- (_Bool)navigationTransitionShouldOccurImmediately;
- (void)_applyNavigationBarStyleForMode:(id)arg1;
- (_Bool)_shouldAccessoriesModifyMapInsetsForMode:(id)arg1;
- (double)_topBarInset;
- (_Bool)_shouldTopBarModifyMapInsets;
- (struct UIEdgeInsets)mapInsetsIncludingBarsWithNonopaqueParts:(_Bool)arg1;
- (struct UIEdgeInsets)obscuredInsetsForBoundsOptions:(long long)arg1;
- (void)layoutForUnobscuredBoundsChange;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)getPreferredUserInterfaceIdiom:(out long long *)arg1;
- (id)transientMapSettings;
@property(readonly, nonatomic) DirectionsController *directionsController;
@property(readonly, nonatomic) DirectionsManager *directionsManager;
- (void)_setupPersonalizedMaps;
- (id)createMapReplacementView;
- (void)_createNavigationControllerIfNeeded;
- (void)setInactive:(_Bool)arg1;
- (void)didUnsuppress;
- (void)didSuppress;
- (void)setSuppressed:(_Bool)arg1;
- (id)newTraits;
- (id)init;
- (void)dealloc;
@property(readonly, nonatomic) __weak CarNavigationController *carNavigationController;

// Remaining properties
@property(readonly, nonatomic) UIView *containingView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=_isEligibleForFocusInteraction) _Bool eligibleForFocusInteraction;
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MKMapView *mapView;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
@property(readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly) Class superclass;

@end

