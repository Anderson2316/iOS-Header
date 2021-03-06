//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/UIViewControllerAnimatorTransitioning-Protocol.h>

@class NSString, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUISlideshowDismissalAnimator : NSObject <UIViewControllerAnimatorTransitioning>
{
    UIImageView *_imageView;
    struct CGRect _imageRect;
}

@property(nonatomic) struct CGRect imageRect; // @synthesize imageRect=_imageRect;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)animationEnded:(_Bool)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

