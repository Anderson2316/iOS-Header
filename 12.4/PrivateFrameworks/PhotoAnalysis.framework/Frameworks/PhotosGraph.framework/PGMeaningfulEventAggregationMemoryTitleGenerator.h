//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGTitleGenerator.h>

@class NSSet;

@interface PGMeaningfulEventAggregationMemoryTitleGenerator : PGTitleGenerator
{
    unsigned long long _meaning;
    NSSet *_features;
    NSSet *_collectionNodes;
}

+ (id)_momentNodesFromCollectionNodes:(id)arg1;
@property(readonly, nonatomic) NSSet *collectionNodes; // @synthesize collectionNodes=_collectionNodes;
@property(readonly, nonatomic) NSSet *features; // @synthesize features=_features;
@property(readonly, nonatomic) unsigned long long meaning; // @synthesize meaning=_meaning;
- (void).cxx_destruct;
- (id)_meaningLabelForNotReliableTitle;
- (id)_meaningLabelForTitle;
- (id)_subtitle;
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (id)initWithMeaning:(unsigned long long)arg1 features:(id)arg2 collectionNodes:(id)arg3;

@end

