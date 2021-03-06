//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface TSUProgress : NSObject
{
    NSMutableSet *_progressObservers;
    NSObject<OS_dispatch_queue> *_progressObserversQueue;
    NSObject<OS_dispatch_queue> *_progressObserversValueQueue;
    NSString *_message;
}

- (void).cxx_destruct;
@property(copy) NSString *message; // @synthesize message=_message;
- (double)protected_minProgressObserverValueInterval;
- (_Bool)protected_hasProgressObservers;
- (void)protected_progressDidChange;
- (void)removeProgressObserver:(id)arg1;
- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
@property(readonly, getter=isIndeterminate) _Bool indeterminate;
@property(readonly) double maxValue;
@property(readonly) double value;
- (id)initForSubclass;

@end

