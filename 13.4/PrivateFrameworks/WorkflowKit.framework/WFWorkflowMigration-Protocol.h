//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;

@protocol WFWorkflowMigration <NSObject>
+ (_Bool)workflowNeedsMigration:(NSDictionary *)arg1 fromClientVersion:(NSString *)arg2;
- (void)migrateWorkflowIfNeeded:(NSMutableDictionary *)arg1 completion:(void (^)(NSSet *))arg2;
@end

