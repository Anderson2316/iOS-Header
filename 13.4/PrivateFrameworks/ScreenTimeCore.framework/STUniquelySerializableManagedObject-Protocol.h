//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenTimeCore/STSerializableManagedObject-Protocol.h>

@class NSDictionary, NSManagedObjectContext;

@protocol STUniquelySerializableManagedObject <STSerializableManagedObject>
+ (id)fetchOrCreateWithDictionaryRepresentation:(NSDictionary *)arg1 inContext:(NSManagedObjectContext *)arg2 error:(id *)arg3;
@end

