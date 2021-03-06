//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriActivation/SiriContext.h>

@class BBBulletin, NSDictionary, UNNotification;

@interface SiriDirectActionContext : SiriContext
{
    NSDictionary *_payload;
    BBBulletin *_bulletin;
    UNNotification *_notification;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) UNNotification *notification; // @synthesize notification=_notification;
@property(readonly, nonatomic) BBBulletin *bulletin; // @synthesize bulletin=_bulletin;
@property(readonly, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)bundleId;
- (_Bool)isMessagingDirectAction;
- (long long)directActionEvent;
- (id)description;
- (id)initWithUNNotification:(id)arg1;
- (id)initWithBBBulletin:(id)arg1;
- (id)initWithPayload:(id)arg1;

@end

