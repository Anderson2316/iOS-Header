//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Pegasus/PGPictureInPictureExportedInterface-Protocol.h>

@class NSArray, NSString, NSXPCConnection, PGHostedWindow, PGSetterThrottler, UIViewController;
@protocol OS_dispatch_queue, PGPictureInPictureProxyDelegate, PGPictureInPictureViewController;

@interface PGPictureInPictureProxy : NSObject <PGPictureInPictureExportedInterface>
{
    struct CGSize _preferredContentSize;
    struct CGRect _initialLayerFrame;
    NSString *_sceneSessionPersistentIdentifier;
    _Bool _isPictureInPicturePossible;
    _Bool _isPictureInPictureActive;
    _Bool _isPictureInPictureSuspended;
    _Bool _pictureInPictureShouldStartWhenEnteringBackground;
    _Bool _pictureInPictureWasStartedWhenEnteringBackground;
    _Bool _shouldCancelActivePictureInPictureOnStart;
    _Bool _shouldPullCancellationPolicyOnStart;
    id _windowSceneActivationStateObserver;
    double _playbackProgress;
    double _playbackRate;
    NSArray *_loadedTimeRanges;
    PGSetterThrottler *_playbackProgressSetterThrottler;
    PGSetterThrottler *_loadedTimeRangesSetterThrottler;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    PGHostedWindow *_hostedWindow;
    UIViewController *_rootViewController;
    _Bool _isStartingStoppingOrCancellingPictureInPicture;
    _Bool _isHostedWindowSizeChangeDuringPinchGesture;
    id <PGPictureInPictureProxyDelegate> _delegate;
    struct {
        unsigned int pictureInPictureProxyInterfaceOrientationForTransitionAnimation:1;
        unsigned int pictureInPictureProxyViewFrameForTransitionAnimation:1;
        unsigned int pictureInPictureProxyViewControllerWindowForTransitionAnimation:1;
        unsigned int pictureInPictureProxy_willStartPictureInPictureWithAnimationType:1;
        unsigned int pictureInPictureProxy_didStartPictureInPictureWithAnimationType:1;
        unsigned int pictureInPictureProxy_failedToStartPictureInPictureWithAnimationType_error:1;
        unsigned int pictureInPictureProxy_restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:1;
        unsigned int pictureInPictureProxy_willStopPictureInPictureWithAnimationType_reason:1;
        unsigned int pictureInPictureProxy_didStopPictureInPictureWithAnimationType_reason:1;
        unsigned int pictureInPictureProxyPictureInPictureInterruptionBegan:1;
        unsigned int pictureInPictureProxyPictureInPictureInterruptionEnded:1;
    } _delegateRespondsTo;
    long long _controlsStyle;
    UIViewController<PGPictureInPictureViewController> *_viewController;
}

+ (id)pictureInPictureProxyWithControlsStyle:(long long)arg1 viewController:(id)arg2;
+ (void)_updatePictureInPictureActive:(_Bool)arg1;
+ (_Bool)isPictureInPictureActive;
+ (_Bool)isPictureInPictureSupported;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIViewController<PGPictureInPictureViewController> *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) long long controlsStyle; // @synthesize controlsStyle=_controlsStyle;
- (oneway void)actionButtonTapped;
- (oneway void)hostedWindowSizeChangeEnded;
- (oneway void)hostedWindowSizeChangeBegan;
- (oneway void)updateHostedWindowSize:(struct CGSize)arg1 animationType:(long long)arg2 initialSpringVelocity:(double)arg3 synchronizationFence:(id)arg4;
- (oneway void)pictureInPictureCancelled;
- (oneway void)pictureInPictureResumed;
- (oneway void)pictureInPictureSuspended;
- (oneway void)pictureInPictureInterruptionEnded;
- (oneway void)pictureInPictureInterruptionBegan;
- (oneway void)updatePictureInPicturePossible:(_Bool)arg1;
- (oneway void)pictureInPictureCancelRequestedAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (oneway void)pictureInPictureStopRequestedAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (oneway void)pictureInPictureStartRequestedAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_stopObservingWindowSceneActivationState;
- (void)_updateAutoPIPSettingsAndNotifyRemoteObject;
- (void)_updateAutoPIPSettingsAndNotifyRemoteObjectIfNeeded;
- (id)_expectedScene;
- (void)_executeDelegateCallbackBlock:(CDUnknownBlockType)arg1 assumeApplicationActive:(_Bool)arg2;
- (id)_sourceScene;
- (_Bool)_isViewControllerWindowSceneActive;
- (id)_sceneSessionPersistentIdentifierForTransitionAnimationAssumeApplicationActive:(_Bool)arg1;
- (struct CGRect)_viewFrameForTransitionAnimationAssumeApplicationActive:(_Bool)arg1;
- (long long)_interfaceOrientationForTransitionAnimationAssumeApplicationActive:(_Bool)arg1;
- (void)_stopPictureInPictureAnimated:(_Bool)arg1 restoreUserInterface:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_didStartWithSuccess:(_Bool)arg1 animationType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_actuallyStartAnimated:(_Bool)arg1 animationType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_setupStart:(_Bool)arg1 animationType:(long long)arg2 initialLayerFrame:(struct CGRect)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_manageStartAnimated:(_Bool)arg1 cancelActiveOnStart:(_Bool)arg2 competionHandler:(CDUnknownBlockType)arg3;
- (void)_updateCancellationPolicyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_startPictureInPictureAnimated:(_Bool)arg1 enteringBackground:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setControlsStyle:(long long)arg1 animated:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)rotateContentContainer:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setPlaybackProgress:(double)arg1 playbackRate:(double)arg2;
- (void)stopPictureInPictureAndRestoreUserInterface:(_Bool)arg1;
- (void)startPictureInPicture;
- (void)windowSceneForInteractiveTransitionAnimationWhenEnteringBackgroundDidChangeForViewController;
- (void)viewFrameForInteractiveTransitionAnimationWhenEnteringBackgroundDidChangeForViewController;
- (void)preferredContentSizeDidChangeForViewController;
- (void)setLoadedTimeRanges:(id)arg1;
- (id)loadedTimeRanges;
- (double)playbackRate;
- (double)playbackProgress;
@property(readonly, nonatomic) _Bool pictureInPictureWasStartedWhenEnteringBackground;
@property(nonatomic) _Bool pictureInPictureShouldStartWhenEnteringBackground;
@property(readonly, nonatomic, getter=isPictureInPictureSuspended) _Bool pictureInPictureSuspended;
@property(readonly, nonatomic, getter=isPictureInPictureActive) _Bool pictureInPictureActive;
@property(readonly, nonatomic, getter=isPictureInPicturePossible) _Bool pictureInPicturePossible;
@property(nonatomic) __weak id <PGPictureInPictureProxyDelegate> delegate;
- (void)dealloc;
- (id)init;
- (id)initWithControlsStyle:(long long)arg1 viewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

