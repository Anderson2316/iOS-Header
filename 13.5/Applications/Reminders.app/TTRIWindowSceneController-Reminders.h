//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TTRIWindowSceneController.h"

#import "UIWindowSceneDelegate-Protocol.h"

@interface TTRIWindowSceneController (Reminders) <UIWindowSceneDelegate>
- (void)windowScene:(id)arg1 userDidAcceptCloudKitShareWithMetadata:(id)arg2;
- (void)windowScene:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)scene:(id)arg1 openURLContexts:(id)arg2;
- (void)scene:(id)arg1 continueUserActivity:(id)arg2;
- (void)scene:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (id)stateRestorationActivityForScene:(id)arg1;
- (void)sceneDidEnterBackground:(id)arg1;
- (void)sceneWillEnterForeground:(id)arg1;
- (void)sceneWillResignActive:(id)arg1;
- (void)sceneDidBecomeActive:(id)arg1;
- (void)sceneDidDisconnect:(id)arg1;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
@end

