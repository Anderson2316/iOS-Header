//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMAVMicrophone, NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

@interface IMAVMicrophoneController : NSObject
{
    id _internal;
    NSMutableArray *_microphones;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) IMAVMicrophone *currentMicrophone;
- (void)_loadSavedMicrophone;
- (void)_rebuildMicrophoneList;
- (void)dealloc;
@property(readonly, retain, nonatomic) NSArray *microphones;
- (id)init;

@end

