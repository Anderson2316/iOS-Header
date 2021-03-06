//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class NSArray, NSNumber, NSProgress, NSString, NSUUID;

@protocol HDCloudSyncServerInterface <NSObject>
- (NSProgress *)remote_waitOnHealthCloudSyncWithUUID:(NSUUID *)arg1 completion:(void (^)(long long, NSError *))arg2;
- (NSProgress *)retmote_fetchCloudSyncProgressWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (NSProgress *)remote_disableCloudSyncAndDeleteAllCloudDataWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_fetchCloudSyncStatusWithCompletion:(void (^)(_Bool, NSDate *, NSDate *, _Bool, NSError *))arg1;
- (NSProgress *)remote_fetchCloudDescriptionWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (NSProgress *)remote_forceCloudResetWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (NSProgress *)remote_forceCloudSyncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_createCloudShareWithRecipient:(NSString *)arg1 sampleTypes:(NSArray *)arg2 maxSampleAge:(NSNumber *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
@end

