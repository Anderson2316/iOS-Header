//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class CKServerChangeToken, HMDBackingStoreCacheGroup;

@interface HMDBackingStoreCacheUpdateGroupTokenOperation : HMDBackingStoreOperation
{
    HMDBackingStoreCacheGroup *_record;
    CKServerChangeToken *_serverChangeToken;
}

@property(retain, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
@property(retain, nonatomic) HMDBackingStoreCacheGroup *record; // @synthesize record=_record;
- (void).cxx_destruct;
- (id)mainReturningError;
- (id)initWithGroup:(id)arg1 serverChangeToken:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;

@end

