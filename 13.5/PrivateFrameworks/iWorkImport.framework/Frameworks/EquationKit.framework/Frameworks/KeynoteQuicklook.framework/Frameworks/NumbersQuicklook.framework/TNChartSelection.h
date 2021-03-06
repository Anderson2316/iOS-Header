//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSDrawables/TSDDrawableSelection.h>

@class TSCHChartDrawableInfo;

@interface TNChartSelection : TSDDrawableSelection
{
    TSCHChartDrawableInfo *_chart;
    struct TSCERangeRef _reference;
}

+ (Class)archivedSelectionClass;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) TSCHChartDrawableInfo *chart; // @synthesize chart=_chart;
@property(readonly, nonatomic) struct TSCERangeRef reference; // @synthesize reference=_reference;
- (void)saveToArchive:(struct ChartSelectionArchive *)arg1 archiver:(id)arg2;
- (id)initFromArchive:(const struct ChartSelectionArchive *)arg1 unarchiver:(id)arg2;
- (_Bool)returnChartFrameForAutoscroll;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithChartInfo:(id)arg1;
- (id)initWithChartInfo:(id)arg1 reference:(struct TSCERangeRef)arg2;

@end

