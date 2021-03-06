//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AXUIService-Protocol.h"

@class AXStickyKeysViewController, NSString;

@interface AXStickyKeysUIServer : NSObject <AXUIService>
{
    AXStickyKeysViewController *_stickyKeysViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AXStickyKeysViewController *stickyKeysViewController; // @synthesize stickyKeysViewController=_stickyKeysViewController;
- (void)_handleStickyKeyUpdatedWithKeycode:(unsigned short)arg1 usagePage:(unsigned int)arg2 state:(long long)arg3;
- (void)_playSoundForState:(long long)arg1;
- (void)_handleStickyKeysDisabled;
- (void)_handleStickyKeysToggledViaShift;
- (void)_showUIIfNeeded;
- (id)processMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(id)arg3 error:(id *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

