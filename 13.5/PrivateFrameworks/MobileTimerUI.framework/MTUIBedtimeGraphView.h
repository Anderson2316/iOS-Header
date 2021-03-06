//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MTAlarm, MTUIBedtimeGraphData, NSArray, NSLayoutConstraint, NSMutableArray, UILayoutGuide, UITapGestureRecognizer;

@interface MTUIBedtimeGraphView : UIView
{
    UILayoutGuide *_axesLayoutGuide;
    MTAlarm *_sleepAlarm;
    NSArray *_sleepData;
    MTUIBedtimeGraphData *_graphData;
    NSMutableArray *_orderedGraphColumns;
    NSLayoutConstraint *_topAxisConstraint;
    NSLayoutConstraint *_bottomAxisConstraint;
    NSArray *_dayLabels;
    NSArray *_labelTitles;
    NSArray *_dayCenterXConstraints;
    NSLayoutConstraint *_labelBaselineConstraint;
    UITapGestureRecognizer *_tapRecognizer;
    unsigned long long _graphStyle;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long graphStyle; // @synthesize graphStyle=_graphStyle;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) NSLayoutConstraint *labelBaselineConstraint; // @synthesize labelBaselineConstraint=_labelBaselineConstraint;
@property(retain, nonatomic) NSArray *dayCenterXConstraints; // @synthesize dayCenterXConstraints=_dayCenterXConstraints;
@property(retain, nonatomic) NSArray *labelTitles; // @synthesize labelTitles=_labelTitles;
@property(retain, nonatomic) NSArray *dayLabels; // @synthesize dayLabels=_dayLabels;
@property(retain, nonatomic) NSLayoutConstraint *bottomAxisConstraint; // @synthesize bottomAxisConstraint=_bottomAxisConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topAxisConstraint; // @synthesize topAxisConstraint=_topAxisConstraint;
@property(retain, nonatomic) NSMutableArray *orderedGraphColumns; // @synthesize orderedGraphColumns=_orderedGraphColumns;
@property(retain, nonatomic) MTUIBedtimeGraphData *graphData; // @synthesize graphData=_graphData;
@property(retain, nonatomic) NSArray *sleepData; // @synthesize sleepData=_sleepData;
@property(copy, nonatomic) MTAlarm *sleepAlarm; // @synthesize sleepAlarm=_sleepAlarm;
@property(retain, nonatomic) UILayoutGuide *axesLayoutGuide; // @synthesize axesLayoutGuide=_axesLayoutGuide;
@property(readonly, nonatomic) double wakeTimeOriginY;
@property(readonly, nonatomic) double bedtimeOriginY;
- (double)barOriginXForBarAtIndex:(unsigned long long)arg1 outOfCount:(unsigned long long)arg2 shouldChangeForRTL:(_Bool)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (void)processSleepData;
- (void)graphTapped:(id)arg1;
- (void)_updateLabelTitles;
- (id)viewForLastBaselineLayout;
- (void)layoutSubviews;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1 graphStyle:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

