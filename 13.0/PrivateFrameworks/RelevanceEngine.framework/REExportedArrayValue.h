//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REExportedValue.h>

@class NSArray;

@interface REExportedArrayValue : REExportedValue
{
    NSArray *_array;
}

- (void).cxx_destruct;
- (id)exportedValueForKey:(id)arg1;
- (void)enumerateValuesUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)propertyCount;
- (unsigned long long)type;
- (id)arrayValue;
- (id)initWithArray:(id)arg1;

@end

