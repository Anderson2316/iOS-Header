//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioUnitEQFilterParameters;

@interface AVAudioEnvironmentReverbParameters : NSObject
{
    void *_impl;
}

- (void)dealloc;
- (void)loadFactoryReverbPreset:(long long)arg1;
@property(readonly, nonatomic) AVAudioUnitEQFilterParameters *filterParameters;
@property(nonatomic) float level;
@property(nonatomic) _Bool enable;
- (id)initWithEnvironment:(struct AVAudioEnvironmentNodeImpl *)arg1;
- (id)init;

@end

