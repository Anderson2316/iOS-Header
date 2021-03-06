//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKPKStroke.h>

@class PKMutableStroke, PKStroke;

__attribute__((visibility("hidden")))
@interface TSKPKMutableStroke : TSKPKStroke
{
    PKMutableStroke *_yukonMutableStroke;
    PKStroke *_peaceMutableStroke;
}

@property(retain, nonatomic) PKStroke *peaceMutableStroke; // @synthesize peaceMutableStroke=_peaceMutableStroke;
@property(retain, nonatomic) PKMutableStroke *yukonMutableStroke; // @synthesize yukonMutableStroke=_yukonMutableStroke;
- (void).cxx_destruct;
- (id)internalPencilKitStroke;
- (struct CGPoint)locationAtIndex:(unsigned long long)arg1;
- (void)setLocation:(struct CGPoint)arg1 atIndex:(unsigned long long)arg2;
- (void)transformWithTransform:(struct CGAffineTransform)arg1;
- (id)initWithPKStroke:(id)arg1 pencilAnnotationDrawingScale:(double)arg2;

@end

