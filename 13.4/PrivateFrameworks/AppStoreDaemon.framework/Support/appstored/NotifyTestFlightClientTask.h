//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Task.h"

@class NSString;

@interface NotifyTestFlightClientTask : Task
{
    _Bool _successfulInstall;
    NSString *_betaExternalVersionID;
    NSString *_bundleID;
    NSString *_bundleVersion;
    NSString *_failureReason;
    NSString *_shortVersion;
}

+ (id)successfulInstallTaskWithProxy:(id)arg1;
+ (id)failedInstallTaskForBundleID:(id)arg1 betaEVID:(id)arg2 andError:(id)arg3;
- (void).cxx_destruct;
@property _Bool successfulInstall; // @synthesize successfulInstall=_successfulInstall;
@property(copy, nonatomic) NSString *shortVersion; // @synthesize shortVersion=_shortVersion;
@property(copy, nonatomic) NSString *failureReason; // @synthesize failureReason=_failureReason;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSString *betaExternalVersionID; // @synthesize betaExternalVersionID=_betaExternalVersionID;
- (id)_launchOptionsDictionaryForURLString:(id)arg1;
- (void)main;

@end

