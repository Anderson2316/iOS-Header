//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/NSObject-Protocol.h>

@class RTPredictedDatesCriteria, RTPredictedLocationsOfInterestCriteria;

@protocol RTPredictedLocationOfInterestProvider <NSObject>
- (void)fetchPredictedExitDatesWithCriteria:(RTPredictedDatesCriteria *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchPredictedLocationsOfInterestWithCriteria:(RTPredictedLocationsOfInterestCriteria *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchNextPredictedLocationsOfInterestWithCriteria:(RTPredictedLocationsOfInterestCriteria *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
@end

