//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ShareSheet/NSObject-Protocol.h>

@class NSArray, NSNumber, NSString, NSUUID;

@protocol UIActivityContentDelegate <NSObject>
- (NSString *)_titleForActivity:(NSString *)arg1;
- (void)_editActionsTapped;
- (NSArray *)fallbackURLsForLinkPresentation;
- (NSArray *)requestMetadataValues;
- (void)showScreenTimeRestrictedAlert;
- (void)selectedActionWithIdentifier:(NSUUID *)arg1;
- (void)selectedAppWithIdentifier:(NSUUID *)arg1;
- (void)selectedPersonWithIdentifier:(NSUUID *)arg1;
- (void)nextButtonTappedWithPeopleProxies:(NSArray *)arg1 shareProxies:(NSArray *)arg2 actionProxies:(NSArray *)arg3 nearbyCountSlotID:(NSNumber *)arg4;
- (void)optionsButtonTapped;
- (void)closeButtonTapped;
@end

