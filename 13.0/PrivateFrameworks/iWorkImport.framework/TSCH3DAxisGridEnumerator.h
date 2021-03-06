//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DValueEnumerator.h>

@class TSCHChartAxis;

__attribute__((visibility("hidden")))
@interface TSCH3DAxisGridEnumerator : TSCH3DValueEnumerator
{
    TSCHChartAxis *mAxis;
}

+ (id)enumeratorWithAxis:(id)arg1;
@property(readonly, nonatomic) TSCHChartAxis *axis; // @synthesize axis=mAxis;
- (struct AxisGridLocation)position;
- (void)update;
- (unsigned long long)count;
@property(readonly, nonatomic) int type;
- (void)dealloc;
- (id)initWithAxis:(id)arg1;

@end

