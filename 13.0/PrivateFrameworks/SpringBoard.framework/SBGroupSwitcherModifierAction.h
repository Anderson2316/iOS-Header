//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifierAction.h>

@class NSMutableArray;

@interface SBGroupSwitcherModifierAction : SBSwitcherModifierAction
{
    NSMutableArray *_actions;
}

+ (id)groupActionWithActions:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)leafCount;
- (void)enumerateLeafActionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateActionsUsingBlock:(CDUnknownBlockType)arg1;
- (id)appendAction:(id)arg1;
- (void)addActions:(id)arg1;
- (void)addAction:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)init;
- (long long)type;

@end

