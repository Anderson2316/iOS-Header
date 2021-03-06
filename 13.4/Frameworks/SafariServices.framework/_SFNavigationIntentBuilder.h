//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _SFNavigationIntentBuilder : NSObject
{
    _Bool _prefersOpenInNewTab;
    _Bool _prefersOpenInNewWindow;
    _Bool _prefersRelationToSourceTab;
    long long _modifierFlags;
    long long _navigationType;
    long long _preferredTabOrder;
}

+ (_Bool)canCreateNavigationIntentForDropSession:(id)arg1;
+ (void)registerBookmarkCollectionFactory:(CDUnknownBlockType)arg1;
+ (id)builderWithModifierFlags:(long long)arg1;
+ (id)builder;
@property(nonatomic) _Bool prefersRelationToSourceTab; // @synthesize prefersRelationToSourceTab=_prefersRelationToSourceTab;
@property(nonatomic) _Bool prefersOpenInNewWindow; // @synthesize prefersOpenInNewWindow=_prefersOpenInNewWindow;
@property(nonatomic) _Bool prefersOpenInNewTab; // @synthesize prefersOpenInNewTab=_prefersOpenInNewTab;
@property(nonatomic) long long preferredTabOrder; // @synthesize preferredTabOrder=_preferredTabOrder;
@property(nonatomic) long long navigationType; // @synthesize navigationType=_navigationType;
@property(readonly, nonatomic) long long modifierFlags; // @synthesize modifierFlags=_modifierFlags;
- (long long)_navigationPolicyForCreatingNewTabOrWindow;
- (long long)_navigationPolicyForNavigationEvent;
- (long long)_navigationPolicyForStandardEvent;
- (long long)_navigationPolicy;
- (_Bool)_shouldOrderToForeground;
- (_Bool)_modifiersEqualToModifierIgnoringCapsLock:(long long)arg1;
- (_Bool)_hasModifierFlag:(long long)arg1;
- (id)_navigationIntentForMKMapItem:(id)arg1;
- (id)_navigationIntentWithItems:(id)arg1;
- (void)buildNavigationIntentForItemProviders:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)buildNavigationIntentForDropSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)navigationIntentWithOpenURLContexts:(id)arg1;
- (id)navigationIntentWithMultipleIntents:(id)arg1;
- (id)navigationIntentWithURL:(id)arg1;
- (id)navigationIntentWithText:(id)arg1;
- (id)navigationIntentWithHistoryURL:(id)arg1;
- (id)navigationIntentWithRecentlyClosedTabStateData:(id)arg1;
- (id)navigationIntentWithCloudTab:(id)arg1;
- (id)navigationIntentWithBookmark:(id)arg1;
- (id)_initializeNavigationIntentWithType:(unsigned long long)arg1 value:(id)arg2;
- (id)_initWithModifierFlags:(long long)arg1;

@end

