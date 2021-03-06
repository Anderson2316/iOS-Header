//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LSApplicationProxy, NSDate, NSError, NSMutableSet;

@interface AppReceiptTaskResult : NSObject
{
    NSMutableSet *_expiring;
    NSMutableSet *_refreshed;
    NSError *_resultingError;
    NSMutableSet *_revoked;
    LSApplicationProxy *_soonestExpiring;
    NSDate *_soonestExpirationDate;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *soonestExpirationDate; // @synthesize soonestExpirationDate=_soonestExpirationDate;
@property(copy, nonatomic) LSApplicationProxy *soonestExpiring; // @synthesize soonestExpiring=_soonestExpiring;
@property(readonly, nonatomic) NSMutableSet *revoked; // @synthesize revoked=_revoked;
@property(copy, nonatomic) NSError *resultingError; // @synthesize resultingError=_resultingError;
@property(readonly, nonatomic) NSMutableSet *refreshed; // @synthesize refreshed=_refreshed;
@property(readonly, nonatomic) NSMutableSet *expiring; // @synthesize expiring=_expiring;
- (void)addRefreshed:(id)arg1;
- (void)addRevoked:(id)arg1;
- (void)addExpiring:(id)arg1 expirationDate:(id)arg2;

@end

