//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ASDServiceBroker;

@interface ASDSubscriptionEntitlements : NSObject
{
    ASDServiceBroker *_serviceBroker;
    int _newsCacheUpdatedNotificationToken;
    int _appStoreCacheUpdatedNotificationToken;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)getAppStoreConsumedIntroOfferFamilyIdsWithResultHandler:(CDUnknownBlockType)arg1;
- (void)getSubscriptionEntitlementsForSegment:(unsigned long long)arg1 ignoreCaches:(_Bool)arg2 withResultHandler:(CDUnknownBlockType)arg3;
- (void)getSubscriptionEntitlementsIgnoreCaches:(_Bool)arg1 forActiveAccountWithResultAndExpiryHandler:(CDUnknownBlockType)arg2;
- (void)getSubscriptionEntitlementsIgnoreCaches:(_Bool)arg1 forActiveAccountWithResultHandler:(CDUnknownBlockType)arg2;
- (void)getSubscriptionEntitlementsForActiveAccountWithResultAndExpiryHandler:(CDUnknownBlockType)arg1;
- (void)getSubscriptionEntitlementsForActiveAccountWithResultHandler:(CDUnknownBlockType)arg1;
- (void)setSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2 segment:(unsigned long long)arg3;
- (void)setSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2;
- (id)_initWithServiceBroker:(id)arg1;
- (void)dealloc;
- (id)init;

@end

