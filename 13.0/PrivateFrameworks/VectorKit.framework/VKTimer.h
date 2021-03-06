//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface VKTimer : NSObject
{
    NSObject<OS_dispatch_source> *_source;
    double _nextFireDate;
}

@property(readonly, nonatomic) double nextFireDate; // @synthesize nextFireDate=_nextFireDate;
- (void)invalidate;
- (void)disable;
- (void)fireAfter:(double)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 queue:(id)arg3;

@end

