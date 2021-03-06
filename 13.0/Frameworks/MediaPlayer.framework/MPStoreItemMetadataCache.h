//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPLRUDictionary, NSMapTable;

@interface MPStoreItemMetadataCache : NSObject
{
    CPLRUDictionary *_itemIdentifierToCompositeStoreItemMetadataLRUDictionary;
    NSMapTable *_itemIdentifierToCompositeStoreItemMetadataMapTable;
}

- (void).cxx_destruct;
- (void)removeExpiredMetadata;
- (id)metadataForItemIdentifier:(id)arg1;
@property(readonly, nonatomic) long long count;
- (id)addMetadata:(id)arg1 forItemIdentifier:(id)arg2;
- (id)initWithCacheSize:(long long)arg1;

@end

