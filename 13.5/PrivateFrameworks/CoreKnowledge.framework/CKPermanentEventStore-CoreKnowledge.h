//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreKnowledge/CKPermanentEventStore.h>

#import <CoreKnowledge/CKPermanentWritableEventStore-Protocol.h>

@interface CKPermanentEventStore (CoreKnowledge) <CKPermanentWritableEventStore>
+ (id)createEventWithIdentifier:(id)arg1 dateInterval:(id)arg2 metadata:(id)arg3 fromEvent:(id)arg4;
- (void)deleteInteractionsWithBundleId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)deleteInteractionsWithBundleId:(id)arg1 error:(id *)arg2;
- (void)recordInteraction:(id)arg1 bundleId:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)recordInteraction:(id)arg1 bundleId:(id)arg2 error:(id *)arg3;
- (void)recordInteraction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)recordInteraction:(id)arg1 error:(id *)arg2;
- (_Bool)recordEvent:(id)arg1 error:(id *)arg2;
- (void)recordEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@end

