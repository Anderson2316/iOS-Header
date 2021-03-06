//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ContaineeViewController.h"

#import "FloatingControlsProtocol-Protocol.h"
#import "HeaderViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class ContainerHeaderView, MKStackingViewController, NSArray, NSLayoutConstraint, NSString, UILabel, UIViewController;
@protocol ContainerProtocol, _MKInfoCardController;

__attribute__((visibility("hidden")))
@interface InfoCardViewController : ContaineeViewController <HeaderViewDelegate, UIScrollViewDelegate, FloatingControlsProtocol>
{
    _Bool _dragging;
    struct CGPoint _beginOffset;
    _Bool _allowScroll;
    double _previousParentHeight;
    NSLayoutConstraint *_titleBaselineToTopConstraint;
    NSLayoutConstraint *_titleLeadingConstraint;
    _Bool _isObservingUserDefaultsKVO;
    _Bool _useSmoothTransition;
    MKStackingViewController<_MKInfoCardController> *_contentViewController;
    ContainerHeaderView *_titleHeaderView;
    UILabel *_titleLabel;
}

@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) ContainerHeaderView *titleHeaderView; // @synthesize titleHeaderView=_titleHeaderView;
@property(retain, nonatomic) MKStackingViewController<_MKInfoCardController> *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)clipToBounds:(_Bool)arg1;
- (void)didScrollPastTransition;
@property(readonly, nonatomic) _Bool isShowingFullHeader;
@property(readonly, nonatomic) long long floatingControlsOptions;
- (void)closedBySwipe;
- (void)applyAlphaToContent:(double)arg1;
- (void)willBecomeCurrent:(_Bool)arg1;
- (void)willChangeLayout:(unsigned long long)arg1;
- (_Bool)updateConstraintsForLayout:(unsigned long long)arg1;
- (void)headerViewTapped:(id)arg1;
- (void)headerViewButtonTapped:(id)arg1;
- (void)_showHeader:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewDidLayoutSubviews;
- (double)heightForLayout:(unsigned long long)arg1;
- (_Bool)useDefaultLayout;
- (void)viewWillLayoutSubviews;
- (void)_contentSizeDidChange;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)updateTheme;
- (void)updateTitleConstraint;
- (void)viewLayoutMarginsDidChange;
- (void)viewDidLoad;

// Remaining properties
@property(nonatomic) __weak UIViewController<ContainerProtocol> *containerViewController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool presentedModally;
@property(readonly) Class superclass;
@property(nonatomic) _Bool takesAvailableHeight;
@property(readonly, nonatomic) NSArray *topBannerItems;

@end

