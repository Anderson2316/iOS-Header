//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSPredicate;

@interface HFConditionCollection : NSObject
{
    NSArray *_conditions;
}

+ (id)_singleConditionForPredicate:(id)arg1 knownConditionsOnly:(_Bool)arg2;
+ (id)_findBestConditionMatchForPredicates:(id)arg1;
+ (id)_findBestMatchingConditionsForPredicates:(id)arg1;
+ (id)_flattenedSubpredicatesForAndPredicate:(id)arg1;
+ (id)conditionCollectionForPredicate:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *conditions; // @synthesize conditions=_conditions;
@property(readonly, copy, nonatomic) NSPredicate *predicate;
- (void)removeCondition:(id)arg1;
- (void)addCondition:(id)arg1;
- (id)initWithConditions:(id)arg1;
- (id)init;

@end

