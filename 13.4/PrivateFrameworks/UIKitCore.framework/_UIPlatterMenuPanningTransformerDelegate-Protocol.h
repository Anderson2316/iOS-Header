//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class _UIPlatterMenuPanningTransformer;

@protocol _UIPlatterMenuPanningTransformerDelegate <NSObject>
- (void)panningTransformer:(_UIPlatterMenuPanningTransformer *)arg1 didEnterTransitionNotchForTransformedPosition:(struct CGPoint)arg2;
- (void)panningTransformer:(_UIPlatterMenuPanningTransformer *)arg1 didEndPanToTransformedPosition:(struct CGPoint)arg2 offsetFromPrevious:(struct CGVector)arg3 velocity:(struct CGVector)arg4;
- (void)panningTransformer:(_UIPlatterMenuPanningTransformer *)arg1 didPanToTransformedPosition:(struct CGPoint)arg2 offsetFromPrevious:(struct CGVector)arg3 touchPosition:(struct CGPoint)arg4 velocity:(struct CGVector)arg5 didChangeAxis:(_Bool)arg6 axisLock:(unsigned long long)arg7;
- (void)panningTransformer:(_UIPlatterMenuPanningTransformer *)arg1 didBeginPanToTransformedPosition:(struct CGPoint)arg2;
@end

