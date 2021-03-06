//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSKit/TSKModel-Protocol.h>

@class NSObject, TSKCommand, TSKSearch;
@protocol TSKSearchReplaceProvider;

@protocol TSKSearchable <TSKModel>

@optional
- (TSKCommand *)commandForReplaceAllWithProvider:(NSObject<TSKSearchReplaceProvider> *)arg1;
- (void)continueAnnotationSearch:(TSKSearch *)arg1;
- (void)enumerateAllAnnotationsInModelWithHitBlock:(void (^)(id <TSKSearchReference>))arg1;
- (TSKSearch *)searchForAnnotationsWithHitBlock:(void (^)(id <TSKSearchReference>))arg1;
@end

