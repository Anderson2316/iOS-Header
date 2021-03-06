//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, XPCRequestToken;

@protocol UpdatesControllerInterface <NSObject>
- (void)updateAllWithOrder:(NSArray *)arg1 requestToken:(XPCRequestToken *)arg2 replyHandler:(void (^)(_Bool, NSArray *, NSError *))arg3;
- (void)setAutoUpdateEnabled:(_Bool)arg1 withReplyHandler:(void (^)(void))arg2;
- (void)reloadFromServerWithReplyHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)refreshUpdateCountWithReplyHandler:(void (^)(long long, NSError *))arg1;
- (void)getUpdatesWithReplyHandler:(void (^)(NSArray *))arg1;
- (void)confirmAgentRequestedUpdateAll:(void (^)(_Bool))arg1;
- (void)autoUpdateEnabled:(void (^)(_Bool))arg1;
@end

