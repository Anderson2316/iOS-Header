//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsServicesInternal/NSSNewsAnalyticsPBEventStreamObserver-Protocol.h>

@class NSMutableArray, NSSNewsAnalyticsEnvelopeDescriptor;
@protocol NSSNewsAnalyticsSessionManager;

@interface NSSNewsAnalyticsPBEventAccumulator : NSObject <NSSNewsAnalyticsPBEventStreamObserver>
{
    NSSNewsAnalyticsEnvelopeDescriptor *_envelopeDescriptor;
    id <NSSNewsAnalyticsSessionManager> _sessionManager;
    NSMutableArray *_events;
}

@property(readonly, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(readonly, nonatomic) __weak id <NSSNewsAnalyticsSessionManager> sessionManager; // @synthesize sessionManager=_sessionManager;
@property(readonly, copy, nonatomic) NSSNewsAnalyticsEnvelopeDescriptor *envelopeDescriptor; // @synthesize envelopeDescriptor=_envelopeDescriptor;
- (void).cxx_destruct;
- (void)observeEvents:(id)arg1;
- (void)observeEvent:(id)arg1;
- (id)dequeueEventsIntoEnvelope;
- (id)initWithEnvelopeDescriptor:(id)arg1 sessionManager:(id)arg2;
- (id)init;

@end

