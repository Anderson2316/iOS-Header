//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSData, UIImageView, WFWorkflowIcon;

@interface WFWorkflowWizardNameIconButton : UIButton
{
    WFWorkflowIcon *_icon;
    NSData *_customImageData;
    UIImageView *_backgroundImageView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(readonly, nonatomic) NSData *customImageData; // @synthesize customImageData=_customImageData;
@property(readonly, nonatomic) WFWorkflowIcon *icon; // @synthesize icon=_icon;
- (struct CGSize)intrinsicContentSize;
- (void)setIcon:(id)arg1 customImageData:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

