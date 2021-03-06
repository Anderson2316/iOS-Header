//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDJournalEntry.h>

@class HDDataDeletionConfiguration;
@protocol HKUUIDCollection;

@interface _HDDataManagerDeletionJournalEntry : HDJournalEntry
{
    id <HKUUIDCollection> _UUIDCollection;
    HDDataDeletionConfiguration *_configuration;
}

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) HDDataDeletionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) id <HKUUIDCollection> UUIDCollection; // @synthesize UUIDCollection=_UUIDCollection;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 objectUUIDs:(id)arg2;

@end

