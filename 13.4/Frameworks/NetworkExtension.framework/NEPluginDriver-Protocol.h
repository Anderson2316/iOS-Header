//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NEConfiguration;

@protocol NEPluginDriver
- (void)wakeup;
- (void)sleepWithCompletionHandler:(void (^)(void))arg1;
- (void)updateConfiguration:(NEConfiguration *)arg1;
- (void)startWithConfiguration:(NEConfiguration *)arg1 completionHandler:(void (^)(_Bool, int, NSArray *, NSArray *))arg2;
@end

