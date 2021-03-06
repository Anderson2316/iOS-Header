//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSBagValue, NSString;
@protocol OS_dispatch_queue;

@interface URLBagMemoizedValue : NSObject
{
    AMSBagValue *_bagValue;
    NSString *_bagKey;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _isMemoized;
    id _memoizedValue;
    double _timeout;
}

- (void).cxx_destruct;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
- (void)_handleBagChangedNotification:(id)arg1;
- (id)valueWithError:(id *)arg1;
- (id)initWithBagValue:(id)arg1 bagKey:(id)arg2;

@end

