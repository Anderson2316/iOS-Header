//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface HULinkedApplicationRatingView : UIView
{
    double _rating;
    NSArray *_starViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *starViews; // @synthesize starViews=_starViews;
@property(nonatomic) double rating; // @synthesize rating=_rating;
- (void)updateStarViews;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

