//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/CKSQLiteDelegate-Protocol.h>

__attribute__((visibility("hidden")))
@interface CKPackageDBDelegate : NSObject <CKSQLiteDelegate>
{
}

@property(readonly, nonatomic) int userVersion;
- (_Bool)migrateDatabase:(id)arg1 fromVersion:(int)arg2;

@end

