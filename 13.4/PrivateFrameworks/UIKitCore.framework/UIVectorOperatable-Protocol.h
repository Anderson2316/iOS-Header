//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSObject-Protocol.h>

@class NSValue;
@protocol UIVectorOperatable;

@protocol UIVectorOperatable <NSObject, NSCopying>
+ (id <UIVectorOperatable>)epsilon;
+ (id <UIVectorOperatable>)zero;
- (id <UIVectorOperatable>)addVector:(id <UIVectorOperatable>)arg1;
- (id <UIVectorOperatable>)multiplyByVector:(id <UIVectorOperatable>)arg1;
- (id <UIVectorOperatable>)multiplyByScalar:(double)arg1;
- (NSValue *)getNSValue;
- (void)reinitWithVector:(id <UIVectorOperatable>)arg1;
- (id <UIVectorOperatable>)copy;
- (id)getValue;
- (_Bool)isUndefined;
- (_Bool)isApproximatelyEqualTo:(id <UIVectorOperatable>)arg1 withinEpsilon:(id <UIVectorOperatable>)arg2;
- (_Bool)isApproximatelyEqualTo:(id <UIVectorOperatable>)arg1;
- (void)integrateWithVelocity:(id <UIVectorOperatable>)arg1 target:(id <UIVectorOperatable>)arg2 intermediateTarget:(id <UIVectorOperatable>)arg3 intermediateTargetVelocity:(id <UIVectorOperatable>)arg4 parameters:(CDStruct_9e265dec)arg5 state:(CDStruct_289c5ec3)arg6 delta:(double)arg7;
- (id <UIVectorOperatable>)interpolateTo:(id <UIVectorOperatable>)arg1 progress:(double)arg2;
@end

