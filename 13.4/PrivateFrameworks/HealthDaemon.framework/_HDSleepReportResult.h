//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCalendar, NSDate, NSDateInterval, NSDictionary;

@interface _HDSleepReportResult : NSObject
{
    NSDictionary *_inBedSamplesBySource;
    NSDateInterval *_dateInterval;
    NSCalendar *_calendar;
}

+ (id)_correctedDateFromDate:(id)arg1 dateInterval:(id)arg2 calendar:(id)arg3;
- (void).cxx_destruct;
- (id)finalWakeupForSource:(id)arg1;
- (id)sleepOnsetForSource:(id)arg1;
- (id)deviceForSource:(id)arg1;
@property(readonly, nonatomic) double appleBedtimeDeltaFromSleepDayStart;
@property(readonly, nonatomic) NSDate *appleFinalWakeupTime;
- (id)_lastEndDateInSampleArray:(id)arg1;
@property(readonly, nonatomic) NSDate *appleStartOfLongestSleepInterval;
@property(readonly, nonatomic) NSDate *appleFirstSleepInterruption;
@property(readonly, nonatomic) double appleTotalInBedTime;
@property(readonly, nonatomic) NSDate *appleWaketime;
@property(readonly, nonatomic) NSDate *appleCorrectedBedtime;
@property(readonly, nonatomic) NSDate *appleBedtime;
@property(readonly, nonatomic) double appleBedtimeCorrection;
- (id)_firstAppleInBedSample;
@property(readonly, nonatomic) _Bool usedAppleBedtimeAlarm;
@property(readonly, nonatomic) NSArray *sources;
@property(readonly, nonatomic) NSDateInterval *dateInterval;
- (id)initWithDateInterval:(id)arg1 inBedSamplesBySource:(id)arg2 calendar:(id)arg3;

@end

