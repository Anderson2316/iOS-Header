//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantUI/NSObject-Protocol.h>

@class AFBulletin, AFUISiriRemoteSceneViewController, NSString;

@protocol AFUISiriRemoteSceneViewControllerDataSource <NSObject>
- (unsigned long long)lockStateForSiriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1;
- (AFBulletin *)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 bulletinWithIdentifier:(NSString *)arg2;
@end

