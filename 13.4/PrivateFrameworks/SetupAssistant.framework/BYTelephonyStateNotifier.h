//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BYTelephonyStateNotifier : NSObject
{
    int _simUnlockNotificationToken;
}

+ (unsigned long long)retrieveSIMUnlockStateFromToken:(int)arg1;
@property(nonatomic) int simUnlockNotificationToken; // @synthesize simUnlockNotificationToken=_simUnlockNotificationToken;
- (void)_endObservingState;
- (void)_beginObservingWithNotificationQueue:(id)arg1 notificationBlock:(CDUnknownBlockType)arg2;
- (void)notifySIMUnlockStateChangedTo:(unsigned long long)arg1;
- (unsigned long long)currentSIMUnlockState;
- (void)dealloc;
- (id)initForNotifying;
- (id)initWithNotificationQueue:(id)arg1 notificationBlock:(CDUnknownBlockType)arg2;

@end

