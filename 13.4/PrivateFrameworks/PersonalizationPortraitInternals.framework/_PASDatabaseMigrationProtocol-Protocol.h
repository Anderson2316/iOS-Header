//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PersonalizationPortraitInternals/NSObject-Protocol.h>

@class NSArray, NSDictionary, _PASSqliteDatabase;

@protocol _PASDatabaseMigrationProtocol <NSObject>
- (NSArray *)queriesToSkipFromEmptyToVersion:(unsigned int *)arg1;
- (NSDictionary *)migrations;
- (_PASSqliteDatabase *)databaseHandle;
@end

