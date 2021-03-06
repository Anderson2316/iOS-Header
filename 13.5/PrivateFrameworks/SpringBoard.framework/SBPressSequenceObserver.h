//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBAWDMetricDelegate-Protocol.h>
#import <SpringBoard/SBPressCollectorDelegate-Protocol.h>

@class NSString, NSUUID, SBPressCollector;
@protocol SBPressSequenceObserverDelegate;

@interface SBPressSequenceObserver : NSObject <SBPressCollectorDelegate, SBAWDMetricDelegate>
{
    NSUUID *_sosTriggerUUID;
    NSString *_pressName;
    SBPressCollector *_pressCollector;
    id <SBPressSequenceObserverDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SBPressSequenceObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SBPressCollector *pressCollector; // @synthesize pressCollector=_pressCollector;
@property(readonly, nonatomic) NSString *pressName; // @synthesize pressName=_pressName;
- (void)_setPressCollector:(id)arg1;
- (void)_notePowerDownImminent;
- (void)metricDidPost:(id)arg1 data:(id)arg2;
- (void)pressCollector:(id)arg1 didCollectSequence:(id)arg2;
- (void)noteDidBeginSOSWithUUID:(id)arg1;
- (void)dealloc;
- (id)initWithPressName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

