//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBDataPlanAlertItem.h>

#import <SpringBoard/SBDataPlanAlertActions-Protocol.h>

@class NSURL;

@interface SBDataPlanAccountAlertItem : SBDataPlanAlertItem <SBDataPlanAlertActions>
{
    NSURL *_accountURL;
}

+ (id)nowButtonTitle;
+ (id)laterButtonTitle;
@property(copy, nonatomic) NSURL *accountURL; // @synthesize accountURL=_accountURL;
- (void).cxx_destruct;
- (void)takeAction;
- (void)notNow;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithAccountURL:(id)arg1;

@end

