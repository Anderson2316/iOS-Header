//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKObject.h>

@interface HKObject (HDDataEntity)
- (_Bool)hd_insertRelatedDataWithPersistentID:(id)arg1 insertionContext:(id)arg2 profile:(id)arg3 database:(id)arg4 error:(id *)arg5;
- (id)hd_relatedJournalEntries;
- (long long)entityType;
@end

