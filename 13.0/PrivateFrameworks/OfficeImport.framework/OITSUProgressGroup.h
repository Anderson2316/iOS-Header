//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OITSUProgress.h>

@class NSArray, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OITSUProgressGroup : OITSUProgress
{
    NSArray *mChildren;
    NSArray *mChildrenProgressObservers;
    NSObject<OS_dispatch_queue> *mChildrenProgressObserversQueue;
}

- (void)p_updateChildrenProgressObservers;
- (void)removeProgressObserver:(id)arg1;
- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)isIndeterminate;
- (double)maxValue;
- (double)value;
- (void)dealloc;
- (id)initWithChildren:(id)arg1;

@end

