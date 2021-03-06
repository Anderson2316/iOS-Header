//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIScreenBasedObject-Protocol.h>

@class NSDictionary, NSString, UIScreen;

@interface UITextEffectsHostingInfo : NSObject <_UIScreenBasedObject>
{
    unsigned long long _hostedUseCount;
    UIScreen *_screen;
    NSDictionary *_perScreenOptions;
}

+ (id)hostingInfoForScreen:(id)arg1;
@property(retain, nonatomic) NSDictionary *perScreenOptions; // @synthesize perScreenOptions=_perScreenOptions;
@property(retain, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
- (void).cxx_destruct;
@property(nonatomic) _Bool useHostedInstance;
@property(readonly) NSDictionary *_options;
@property(readonly) UIScreen *_intendedScreen;
- (_Bool)_matchingOptions:(id)arg1;
- (id)_initWithScreen:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

