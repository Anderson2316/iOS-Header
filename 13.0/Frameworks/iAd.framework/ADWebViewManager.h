//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ADWebView;

@interface ADWebViewManager : NSObject
{
    ADWebView *_preallocatedWebView;
}

+ (id)sharedManager;
@property(retain, nonatomic) ADWebView *preallocatedWebView; // @synthesize preallocatedWebView=_preallocatedWebView;
- (void).cxx_destruct;
- (void)preallocateWebViewWithBackgroundPriority;
- (id)creativeViewForVideo;
- (id)creativeView;
- (id)_webViewForCreativeForVideo;
- (id)_webViewForCreative;

@end

