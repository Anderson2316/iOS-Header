//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIDragItem, UITargetedDragPreview, UIViewPropertyAnimator, UIWindow, _DUIVisibleDroppedItem, _UIDragSetDownAnimation;

@protocol _UIDragSetDownAnimationTarget <NSObject>
- (_Bool)_setDownAnimation:(_UIDragSetDownAnimation *)arg1 shouldDelaySetDownOfDragItem:(UIDragItem *)arg2 completion:(void (^)(void))arg3;
- (void)_setDownAnimation:(_UIDragSetDownAnimation *)arg1 willAnimateSetDownOfDragItem:(UIDragItem *)arg2 withAnimator:(UIViewPropertyAnimator *)arg3;
- (UITargetedDragPreview *)_setDownAnimation:(_UIDragSetDownAnimation *)arg1 prepareForSetDownOfDragItem:(UIDragItem *)arg2 visibleDroppedItem:(_DUIVisibleDroppedItem *)arg3;
- (UIWindow *)_setDownAnimation:(_UIDragSetDownAnimation *)arg1 windowForSetDownOfDragItem:(UIDragItem *)arg2;
@end

