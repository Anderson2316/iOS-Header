//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;
@protocol AEPersistable><AEPolicyWriteOnlyScratchpad, AEPolicyReadOnlyScratchpad><AERemovable;

@protocol AEPolicyStore
- (_Bool)removeAllScratchpadsWithError:(id *)arg1;
- (id <AEPolicyReadOnlyScratchpad><AERemovable>)readOnlyScratchpadForIdentifier:(NSString *)arg1;
- (id <AEPersistable><AEPolicyWriteOnlyScratchpad>)writeOnlyScratchpadForIdentifier:(NSString *)arg1;
@end

