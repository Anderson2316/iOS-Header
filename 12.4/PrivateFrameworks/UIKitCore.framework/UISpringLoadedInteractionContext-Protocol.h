//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIView;

@protocol UISpringLoadedInteractionContext <NSObject>
@property(retain, nonatomic) id targetItem;
@property(retain, nonatomic) UIView *targetView;
@property(readonly, nonatomic) long long state;
- (struct CGPoint)locationInView:(UIView *)arg1;
@end

