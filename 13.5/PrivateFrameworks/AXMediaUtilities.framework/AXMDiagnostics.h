//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AXMDiagnostics : NSObject <NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_diagnosticMetrics;
    NSMutableArray *_queue_visionObservations;
    _Bool _diagnosticsEnabled;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool diagnosticsEnabled; // @synthesize diagnosticsEnabled=_diagnosticsEnabled;
@property(readonly, copy, nonatomic) NSArray *visionObservations;
- (void)appendVisionObservations:(id)arg1;
- (id)startMeasurement:(long long)arg1 name:(id)arg2;
- (id)captureMetrics:(long long)arg1 name:(id)arg2 forTask:(CDUnknownBlockType)arg3;
- (id)captureMetrics:(long long)arg1 name:(id)arg2 forTask:(CDUnknownBlockType)arg3 signpostStartBlock:(CDUnknownBlockType)arg4 signpostEndBlock:(CDUnknownBlockType)arg5;
@property(readonly, copy, nonatomic) NSArray *metrics;
- (void)clearMetrics;
- (void)addMetric:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)init;

@end

