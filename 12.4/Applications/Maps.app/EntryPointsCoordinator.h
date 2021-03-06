//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LaunchAlertsManagerDelegate-Protocol.h"

@class NSMutableArray, NSString, RichMapsActivity;
@protocol EntryPointsCoordinatorDelegate, LoadingToken, OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface EntryPointsCoordinator : NSObject <LaunchAlertsManagerDelegate>
{
    _Bool _launchedWithExternalInput;
    _Bool _coldLaunch;
    _Bool _mergeLocked;
    _Bool _launchedInBackground;
    _Bool _restoreTaskAdded;
    _Bool _waitingForAlerts;
    NSObject<OS_dispatch_queue> *_tasksQueue;
    NSObject<OS_dispatch_group> *_tasksGroup;
    unsigned long long _tasksDone;
    NSMutableArray *_tasks;
    NSMutableArray *_tasksToPerform;
    id <LoadingToken> _continuityLoadingToken;
    RichMapsActivity *_mergedRichMapsActivity;
    _Bool _didLaunchWithExplicitIntent;
    id <EntryPointsCoordinatorDelegate> _delegate;
    NSString *_launchApplication;
}

@property(copy, nonatomic) NSString *launchApplication; // @synthesize launchApplication=_launchApplication;
@property(readonly, nonatomic) _Bool didLaunchWithExplicitIntent; // @synthesize didLaunchWithExplicitIntent=_didLaunchWithExplicitIntent;
@property(nonatomic) __weak id <EntryPointsCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)openNotificationData:(id)arg1 forType:(id)arg2 recordIdentifier:(id)arg3;
- (void)openShortcutItem:(id)arg1;
- (void)continueUserActivity:(id)arg1 restorationHandler:(CDUnknownBlockType)arg2;
- (void)didFailToContinueUserActivityWithType:(id)arg1 error:(id)arg2;
- (void)willContinueUserActivityWithType:(id)arg1;
- (void)openURL:(id)arg1 options:(id)arg2;
- (void)_addRestoreTask;
- (id)_dataForRestoration;
- (void)didBecomeActive;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (void)willResignActive;
- (void)didFinishLaunchingWithOptions:(id)arg1;
- (void)willFinishLaunchingWithOptions:(id)arg1;
- (void)prepareBackgroundNavigation;
- (void)launchAlertsManagerDidFinishProcessingAlert:(id)arg1;
- (void)_displayLaunchAlertsIfNecessary;
- (void)_unlockIfPossible;
- (void)_unlockMergeActivities;
- (void)_lockMergeActivities;
- (void)_sendMergedRichMapsActivity;
- (void)_sendMergedRichMapsActivityIfPossible;
- (void)_mergeTasks;
- (void)_addTask:(id)arg1;
- (void)_addCompletionIfNeeded;
- (void)_cleanState;
- (id)init;

@end

