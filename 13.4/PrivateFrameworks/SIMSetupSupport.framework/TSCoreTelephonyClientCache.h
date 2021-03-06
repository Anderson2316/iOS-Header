//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CoreTelephonyClient;

@interface TSCoreTelephonyClientCache : NSObject
{
    CoreTelephonyClient *_client;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)installPendingPlan:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pendingInstallItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)setDataFallbackEnabled:(_Bool)arg1 forIccid:(id)arg2;
- (_Bool)getTransferCapability:(unsigned long long)arg1;
- (void)isAnyPlanOfTransferCapability:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)bootstrapPlanTransferUsingMessageSession:(id)arg1;
- (void)transferPlansWithIdentifier:(id)arg1 fromDevice:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)transferPlanWithIdentifier:(id)arg1 fromDevice:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)transferPlanListWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

