//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSEntityMigrationPolicy.h>

@interface ExternalSequenceNumberToAttachmentNoteBodyToAttachmentMigrationPolicy : NSEntityMigrationPolicy
{
}

- (_Bool)endEntityMapping:(id)arg1 manager:(id)arg2 error:(id *)arg3;
- (_Bool)createRelationshipsForDestinationInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id *)arg4;
- (_Bool)createDestinationInstancesForSourceInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id *)arg4;
- (id)unarchiveObjectWithExternalRepresentation:(id)arg1;

@end

