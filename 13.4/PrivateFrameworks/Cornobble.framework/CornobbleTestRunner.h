//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Cornobble/CornobbleTestRunnerProtocol-Protocol.h>

@class NSString;

@interface CornobbleTestRunner : NSObject <CornobbleTestRunnerProtocol>
{
}

+ (void)performFingerOnGlassScrollTestNamed:(id)arg1 withParameters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)performTestNamed:(id)arg1 withRecapFile:(id)arg2 onView:(id)arg3;
+ (void)performTestNamed:(id)arg1 withRecapCommandString:(id)arg2 onView:(id)arg3;
+ (void)performTestNamed:(id)arg1 withEventStream:(id)arg2;
+ (void)performTestNamed:(id)arg1 usingComposer:(CDUnknownBlockType)arg2;
+ (void)performStandardScrollingTestNamed:(id)arg1 onScrollView:(id)arg2 iterations:(unsigned long long)arg3 canFlick:(_Bool)arg4;
+ (void)performFingerOnGlassScrollWithParameters:(id)arg1;
+ (void)performTestNamed:(id)arg1 withRecapCommandString:(id)arg2 onView:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)performTestNamed:(id)arg1 withRecapFile:(id)arg2 onView:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)performTestNamed:(id)arg1 usingComposer:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)performTestNamed:(id)arg1 withEventStream:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)performStandardScrollingTestNamed:(id)arg1 onScrollView:(id)arg2 iterations:(unsigned long long)arg3 pages:(unsigned long long)arg4 canFlick:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (void)performStandardScrollingTestNamed:(id)arg1 onScrollView:(id)arg2 iterations:(unsigned long long)arg3 pages:(unsigned long long)arg4 direction:(long long)arg5 canFlick:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (void)performStandardScrollingTestNamed:(id)arg1 onScrollView:(id)arg2 iterations:(unsigned long long)arg3 canFlick:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)performStandardScrollingTestNamed:(id)arg1 onScrollView:(id)arg2 iterations:(unsigned long long)arg3;
+ (void)performStandardScrollingTestNamed:(id)arg1 onScrollView:(id)arg2;
+ (_Bool)isCornobbleAvailable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

