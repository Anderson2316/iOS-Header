//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSArray, UIFont, UIKeyCommandDiscoverabilityHUDVisualStyle, UILayoutGuide;
@protocol UIKeyCommandDiscoverabilityHUDColumnViewDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyCommandDiscoverabilityHUDColumnView : UIView
{
    id <UIKeyCommandDiscoverabilityHUDColumnViewDelegate> _delegate;
    UIKeyCommandDiscoverabilityHUDVisualStyle *_visualStyle;
    UIFont *_baseFont;
    UILayoutGuide *_descriptionColumnLayoutGuide;
    UILayoutGuide *_modifiersColumnLayoutGuide;
    UILayoutGuide *_inputStringColumnLayoutGuide;
    NSArray *_descriptionViews;
    NSArray *_modifierViews;
    NSArray *_inputStringViews;
    NSArray *_constraints;
    double _fontScaleFactor;
}

- (void).cxx_destruct;
@property(nonatomic) double fontScaleFactor; // @synthesize fontScaleFactor=_fontScaleFactor;
- (void)setKeyCommands:(id)arg1 withVisualStyle:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end

