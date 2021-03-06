//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/PPQuickTypeServantProtocol-Protocol.h>

@class PPLocalEventStore;

@interface PPQuickTypeEventsServant : NSObject <PPQuickTypeServantProtocol>
{
    PPLocalEventStore *_localEventStore;
}

- (void).cxx_destruct;
- (struct _NSRange)_dateRangeForQuery:(id)arg1;
- (id)_lastFreeEventsFromEvents:(id)arg1 explanationSet:(id)arg2;
- (id)_nextFreeEventsFromEvents:(id)arg1 explanationSet:(id)arg2;
- (id)_freeEventsAndGapsFromEvents:(id)arg1 explanationSet:(id)arg2;
- (id)_unscheduledFreeTimeEventFrom:(id)arg1 to:(id)arg2;
- (_Bool)_eventIsHappening:(id)arg1;
- (id)_lastBusyEventsFromEvents:(id)arg1 people:(id)arg2 explanationSet:(id)arg3;
- (id)_nextBusyEventsFromEvents:(id)arg1 people:(id)arg2 explanationSet:(id)arg3;
- (id)_busyEventsFromEvents:(id)arg1 people:(id)arg2 explanationSet:(id)arg3;
- (_Bool)_isFreeTime:(id)arg1;
- (_Bool)_shouldTreatAsUnscheduledFreeTime:(id)arg1;
- (_Bool)_userDidOrganizeEvent:(id)arg1;
- (_Bool)_userIsInvitedToEvent:(id)arg1;
- (unsigned char)_userStatusForEvent:(id)arg1;
- (_Bool)_areAllPeopleOfInterest:(id)arg1 inAttendeeList:(id)arg2;
- (id)_valuesForPrediction:(id)arg1 fields:(unsigned int)arg2 formatter:(id)arg3;
- (id)_labelForEvent:(id)arg1 value:(id)arg2 fields:(unsigned int)arg3 formatter:(id)arg4;
- (id)_quickTypeItemsForEvent:(id)arg1 fields:(unsigned int)arg2 formatter:(id)arg3;
- (id)_quickTypeItemsForEvents:(id)arg1 fields:(unsigned int)arg2 limit:(unsigned long long)arg3 formatter:(id)arg4 explanationSet:(id)arg5;
- (id)_fuzzyNextEvents:(id)arg1 minimumCount:(unsigned long long)arg2;
- (id)_filterEvents:(id)arg1 time:(unsigned char)arg2 people:(id)arg3 busy:(_Bool)arg4 fields:(unsigned int)arg5 explanationSet:(id)arg6;
- (id)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3;
- (void)_warmUpFormatters;
- (id)init;

@end

