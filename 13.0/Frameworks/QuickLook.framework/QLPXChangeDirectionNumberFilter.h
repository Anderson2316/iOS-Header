//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLPXNumberFilter.h>

__attribute__((visibility("hidden")))
@interface QLPXChangeDirectionNumberFilter : QLPXNumberFilter
{
    double _threshold;
    double _minimumChange;
}

@property(nonatomic) double minimumChange; // @synthesize minimumChange=_minimumChange;
- (double)updatedOutput;
- (double)initialOutputForInput:(double)arg1;
- (id)initWithInput:(double)arg1;

@end

