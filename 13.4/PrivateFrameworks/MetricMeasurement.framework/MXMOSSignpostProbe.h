//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetricMeasurement/MXMProbe.h>

@class MXMMutableSampleData, NSDate, NSObject, NSURL, SignpostSupportObjectExtractor;
@protocol OS_dispatch_semaphore;

@interface MXMOSSignpostProbe : MXMProbe
{
    SignpostSupportObjectExtractor *_extractor;
    unsigned long long _mode;
    NSURL *_logArchivePath;
    NSDate *_startDate;
    NSDate *_endDate;
    NSObject<OS_dispatch_semaphore> *_finishedProcessingSema;
    MXMMutableSampleData *_data;
}

+ (id)probeWithLogArchivePath:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (id)probeWithLogArchivePath:(id)arg1;
+ (id)probeHostSystemLogArchiveWithStartDate:(id)arg1 endDate:(id)arg2;
+ (id)probeHostSystemLogArchiveWithRelativeTimeInterval:(double)arg1;
+ (id)probeHostLive;
- (void).cxx_destruct;
- (id)sampleWithTimeout:(double)arg1 stopReason:(unsigned long long *)arg2;
- (void)_stopUpdates;
- (void)_beginUpdates;
- (void)_buildData:(id)arg1 signpostAnimationInterval:(id)arg2;
- (void)_buildData:(id)arg1 signpostInterval:(id)arg2;
- (void)_buildData:(id)arg1 attributes:(id)arg2 signpostEvent:(id)arg3;
- (id)_buildSampleSetWithData:(id)arg1 tag:(id)arg2 unit:(id)arg3 attributes:(id)arg4 signpostObject:(id)arg5;
- (void)_setupProcessingBlocks;
- (void)_setupProcessingFilter;
- (id)initWithMode:(unsigned long long)arg1;
- (id)initWithLogArchive:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)initWithLogArchive:(id)arg1;
- (id)initWithMode:(unsigned long long)arg1 logArchive:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;

@end

