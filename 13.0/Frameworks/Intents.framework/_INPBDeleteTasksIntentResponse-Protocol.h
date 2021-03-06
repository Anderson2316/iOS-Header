//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBTask;

@protocol _INPBDeleteTasksIntentResponse <NSObject>
+ (Class)deletedTasksType;
@property(readonly, nonatomic) unsigned long long deletedTasksCount;
@property(copy, nonatomic) NSArray *deletedTasks;
- (_INPBTask *)deletedTasksAtIndex:(unsigned long long)arg1;
- (void)addDeletedTasks:(_INPBTask *)arg1;
- (void)clearDeletedTasks;
@end

