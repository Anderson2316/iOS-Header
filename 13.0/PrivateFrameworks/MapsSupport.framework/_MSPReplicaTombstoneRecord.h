//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

@protocol MSPReplicaRecord;

@interface _MSPReplicaTombstoneRecord : NSProxy
{
    id <MSPReplicaRecord> _record;
}

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)contentsTimestamp;
- (id)contents;
- (id)_initWithRecord:(id)arg1;

@end

