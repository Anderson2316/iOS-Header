//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSSPreset-Protocol.h>

@class NSObject, TSSTheme;
@protocol TSSPreset;

@protocol TSSCustomPresetMigration <TSSPreset>
- (NSObject<TSSPreset> *)migratedPresetInTheme:(TSSTheme *)arg1 followReplacements:(_Bool)arg2;
@end

