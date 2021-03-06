//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PXAutoloopRequest;

@interface _PXAutoloopSchedulerRequest : NSObject
{
    _Bool _shouldSimulateRequest;
    PXAutoloopRequest *_request;
    CDUnknownBlockType _completionHandler;
}

@property(nonatomic) _Bool shouldSimulateRequest; // @synthesize shouldSimulateRequest=_shouldSimulateRequest;
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) PXAutoloopRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)cancel;
- (void)start;
- (id)initWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

