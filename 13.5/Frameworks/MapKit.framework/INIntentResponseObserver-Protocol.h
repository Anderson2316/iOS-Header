//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class INIntentResponse, NSSet;

@protocol INIntentResponseObserver <NSObject>
- (void)intentResponseDidUpdate:(INIntentResponse *)arg1 withSerializedCacheItems:(NSSet *)arg2;

@optional
- (void)intentResponseDidUpdate:(INIntentResponse *)arg1;
@end

