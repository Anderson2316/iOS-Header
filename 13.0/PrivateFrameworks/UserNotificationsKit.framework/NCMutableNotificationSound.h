//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsKit/NCNotificationSound.h>

@class NSDictionary, NSString, TLAlertConfiguration;

@interface NCMutableNotificationSound : NCNotificationSound
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *songPath; // @dynamic songPath;
@property(copy, nonatomic) TLAlertConfiguration *alertConfiguration; // @dynamic alertConfiguration;
@property(copy, nonatomic) NSDictionary *controllerAttributes; // @dynamic controllerAttributes;
@property(nonatomic) double maxDuration; // @dynamic maxDuration;
@property(nonatomic, getter=isRepeating) _Bool repeats; // @dynamic repeats;
@property(copy, nonatomic) NSDictionary *vibrationPattern; // @dynamic vibrationPattern;
@property(copy, nonatomic) NSString *ringtoneName; // @dynamic ringtoneName;
@property(nonatomic) unsigned long long soundBehavior; // @dynamic soundBehavior;
@property(nonatomic) unsigned int systemSoundID; // @dynamic systemSoundID;
@property(nonatomic) long long soundType; // @dynamic soundType;

@end

