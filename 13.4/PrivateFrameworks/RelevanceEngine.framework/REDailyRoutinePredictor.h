//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/REObservableSingleton.h>

#import <RelevanceEngine/REPeriodOfDayPredictorDelegate-Protocol.h>

@class NSDateInterval, NSLock, NSNumber, NSObject, NSString, REPeriodOfDayPredictor, REUpNextTimer;
@protocol OS_dispatch_queue;

@interface REDailyRoutinePredictor : REObservableSingleton <REPeriodOfDayPredictorDelegate>
{
    REPeriodOfDayPredictor *_periodOfDayPredictor;
    REUpNextTimer *_endMorningRoutineTimer;
    REUpNextTimer *_beginEveningRoutineTimer;
    REUpNextTimer *_endEveningRoutineTimer;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _currentRoutine;
    NSDateInterval *_currentRoutineInterval;
    NSLock *_routineLock;
    NSNumber *_overrideRoutineType;
}

- (void).cxx_destruct;
- (void)_queue_setupEveningBeginTimerIfNeeded;
- (void)_queue_setupMorningBeginTimerIfNeeded;
- (void)_queue_didEndEveningRoutine;
- (void)_queue_didBeginEveningRoutine;
- (void)_queue_didEndMorningRoutine;
- (void)_queue_didBeginMorningRoutine;
- (void)_updateCurrentRoutine;
- (void)periodOfDayPredictorDidUpdatePredictedIntervals:(id)arg1;
- (void)periodOfDayPredictorDidUpdateCurrentPeriodOfDay:(id)arg1;
- (id)_eveningRoutineIntervalForEvening:(id)arg1;
- (id)_morningRoutineIntervalForMorning:(id)arg1;
- (id)routineIntervalForPreviousRoutine:(unsigned long long)arg1;
- (id)routineIntervalForNextRoutine:(unsigned long long)arg1;
@property(readonly, nonatomic) NSDateInterval *currentRoutineInterval;
@property(readonly, nonatomic) unsigned long long currentRoutineType;
- (void)dealloc;
- (id)_init;
- (void)_setOverrideRoutineType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

