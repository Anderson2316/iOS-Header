//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class ADTapGestureRecognizer;
@protocol ADDimmerViewDelegate;

@interface ADDimmerView : UIView
{
    _Bool _dimmed;
    id <ADDimmerViewDelegate> _delegate;
    ADTapGestureRecognizer *_gestureRecognizer;
}

@property(nonatomic) _Bool dimmed; // @synthesize dimmed=_dimmed;
@property(retain, nonatomic) ADTapGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(nonatomic) __weak id <ADDimmerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeADTapGestureRecognizer;
- (void)addADTapGestureRecognizer;
@property(readonly, nonatomic) _Bool enabled;
- (void)_tapRecognized:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

