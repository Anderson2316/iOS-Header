//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class PSDActivity;

@protocol PSDActivityDelegate <NSObject>
- (void)activity:(PSDActivity *)arg1 didUpdateProgress:(float)arg2;
- (void)activityDidCompleteSending:(PSDActivity *)arg1;
@end

