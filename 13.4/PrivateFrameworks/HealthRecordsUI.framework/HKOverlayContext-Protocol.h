//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthRecordsUI/NSObject-Protocol.h>

@class HKDisplayType, HKDisplayTypeContextItem, HKInteractiveChartViewController, HKSampleType, NSDateInterval;

@protocol HKOverlayContext <NSObject>
- (HKDisplayTypeContextItem *)contextItemForLastUpdate;
- (void)updateContextItemForDateInterval:(NSDateInterval *)arg1 timeScope:(long long)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (HKDisplayType *)overlayDisplayTypeForTimeScope:(long long)arg1;
- (HKSampleType *)sampleTypeForDateRangeUpdates;

@optional
- (void)invalidateContextItem;
- (void)overlayStateDidChange:(_Bool)arg1 contextItem:(HKDisplayTypeContextItem *)arg2 chartController:(HKInteractiveChartViewController *)arg3;
@end

