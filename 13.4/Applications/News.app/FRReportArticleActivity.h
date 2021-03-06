//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

@class FRArticleViewHeadlineContext;
@protocol FRReportActivityDelegate;

@interface FRReportArticleActivity : UIActivity
{
    FRArticleViewHeadlineContext *_headlineContext;
    id <FRReportActivityDelegate> _delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <FRReportActivityDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FRArticleViewHeadlineContext *headlineContext; // @synthesize headlineContext=_headlineContext;
- (void)performActivity;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (id)initWithHeadlineContext:(id)arg1;

@end

