//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFMutableMessage.h>

@interface HMFMutableMessage (InternalMessages)
+ (id)internalMessageWithName:(id)arg1 destination:(id)arg2 messagePayload:(id)arg3;
+ (id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
+ (id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2;
@property(nonatomic, getter=isInternal) _Bool internal;
@end

