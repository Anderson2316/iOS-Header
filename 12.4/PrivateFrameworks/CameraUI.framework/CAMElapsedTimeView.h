//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDate, NSTimer, UIImageView, UILabel;

@interface CAMElapsedTimeView : UIView
{
    long long _layoutStyle;
    UILabel *__timeLabel;
    UIImageView *__recordingImageView;
    NSTimer *__updateTimer;
    NSDate *__startTime;
}

@property(readonly, nonatomic) NSDate *_startTime; // @synthesize _startTime=__startTime;
@property(readonly, nonatomic) NSTimer *_updateTimer; // @synthesize _updateTimer=__updateTimer;
@property(readonly, nonatomic) UIImageView *_recordingImageView; // @synthesize _recordingImageView=__recordingImageView;
@property(readonly, nonatomic) UILabel *_timeLabel; // @synthesize _timeLabel=__timeLabel;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
- (void).cxx_destruct;
- (void)_endRecordingAnimation;
- (void)_beginRecordingAnimation;
- (void)resetTimer;
- (void)endTimer;
- (void)_setStartTime:(id)arg1;
- (void)startTimer;
- (void)_updateText;
- (void)_updateForTimer:(id)arg1;
- (void)updateToContentSize:(id)arg1;
- (void)_updateFont;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)_commonCAMElapsedTimeViewInitializationWithLayoutStyle:(long long)arg1;

@end

