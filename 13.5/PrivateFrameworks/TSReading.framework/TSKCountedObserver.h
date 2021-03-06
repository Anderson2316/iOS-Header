//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSUWeakReference;

@interface TSKCountedObserver : NSObject
{
    TSUWeakReference *mWeakObserver;
    unsigned long long mCount;
}

- (unsigned long long)decrementCount;
- (unsigned long long)incrementCount;
- (id)observer;
- (void)dealloc;
- (id)initWithObserver:(id)arg1;

@end

