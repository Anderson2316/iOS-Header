//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SKUIProductPageProductInfo : NSObject
{
    NSMutableArray *_labels;
    NSMutableArray *_values;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long numberOfEntries;
- (void)enumerateEntriesWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithInfoSectionDictionaries:(id)arg1;

@end

