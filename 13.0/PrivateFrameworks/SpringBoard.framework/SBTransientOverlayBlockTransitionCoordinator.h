//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBTransientOverlayTransitionCoordinating-Protocol.h>

@class NSString;

@interface SBTransientOverlayBlockTransitionCoordinator : NSObject <SBTransientOverlayTransitionCoordinating>
{
    CDUnknownBlockType _startTransitionHandler;
    CDUnknownBlockType _finalizeTransitionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType finalizeTransitionHandler; // @synthesize finalizeTransitionHandler=_finalizeTransitionHandler;
@property(copy, nonatomic) CDUnknownBlockType startTransitionHandler; // @synthesize startTransitionHandler=_startTransitionHandler;
- (void).cxx_destruct;
- (void)finalizeTransitionWithContextProvider:(id)arg1;
- (void)startTransitionWithContextProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

