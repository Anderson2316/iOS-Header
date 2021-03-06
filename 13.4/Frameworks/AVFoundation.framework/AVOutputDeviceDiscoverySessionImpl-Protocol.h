//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/NSObject-Protocol.h>

@class AVAudioSession, AVOutputDeviceDiscoverySession, AVOutputDeviceDiscoverySessionAvailableOutputDevices;

@protocol AVOutputDeviceDiscoverySessionImpl <NSObject>
@property(readonly, nonatomic) _Bool devicePresenceDetected;
@property(readonly, nonatomic) AVOutputDeviceDiscoverySessionAvailableOutputDevices *availableOutputDevicesObject;
@property(retain, nonatomic) AVAudioSession *targetAudioSession;
@property __weak AVOutputDeviceDiscoverySession *parentOutputDeviceDiscoverySession;
- (void)outputDeviceDiscoverySessionDidChangeDiscoveryMode:(AVOutputDeviceDiscoverySession *)arg1;
@end

