//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface REDependencyGraphNode : NSObject
{
    id _item;
    NSHashTable *_connections;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *connections; // @synthesize connections=_connections;
@property(readonly, nonatomic) id item; // @synthesize item=_item;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithItem:(id)arg1;

@end

