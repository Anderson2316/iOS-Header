//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIColor;

@interface UICheckeredPatternView : UIView
{
    UIColor *_patternColor;
    double _scale;
    UIColor *_checkerColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *checkerColor; // @synthesize checkerColor=_checkerColor;
- (void)updatePatternColor;
- (void)didMoveToWindow;
- (_Bool)_canDrawContent;
- (id)initWithFrame:(struct CGRect)arg1;

@end

