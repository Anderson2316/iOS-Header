//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSTTableDataObject.h>

@class TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSTTableDataFormulaError : TSTTableDataObject
{
    TSWPStorage *_formulaError;
}

@property(readonly, nonatomic) TSWPStorage *formulaError; // @synthesize formulaError=_formulaError;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initObjectWithFormulaError:(id)arg1 refCount:(unsigned int)arg2;

@end

