//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBInteractiveScreenshotGestureManager, SSScreenCapturerPresentationOptions, SSScreenCapturerScreenshotOptionsCollection;

@protocol SBInteractiveScreenshotGestureManagerDelegate <NSObject>
- (void)interactiveScreenshotGestureManager:(SBInteractiveScreenshotGestureManager *)arg1 requestsScreenshotWithOptionsCollection:(SSScreenCapturerScreenshotOptionsCollection *)arg2 presentationOptions:(SSScreenCapturerPresentationOptions *)arg3;
- (void)interactiveScreenshotGestureManager:(SBInteractiveScreenshotGestureManager *)arg1 requestsScreenshotPreheatWithPresentationOptions:(SSScreenCapturerPresentationOptions *)arg2;
@end

