//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBDeleteOperationResult : NSObject
{
    _Bool _didSucceed;
    unsigned long long _count;
}

@property _Bool didSucceed; // @synthesize didSucceed=_didSucceed;
@property unsigned long long count; // @synthesize count=_count;
- (id)initWithCount:(unsigned long long)arg1 andDidSucceed:(_Bool)arg2;

@end

