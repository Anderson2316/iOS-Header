//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSBag, AMSMediaTask, NSString;

@interface WFMediaSessionManager : NSObject
{
    AMSMediaTask *_task;
    AMSBag *_bag;
    NSString *_clientIdentifier;
    NSString *_clientVersion;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(readonly, copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, nonatomic) AMSBag *bag; // @synthesize bag=_bag;
@property(readonly, nonatomic) AMSMediaTask *task; // @synthesize task=_task;
- (void)lookupMediaType:(long long)arg1 withIdentifiers:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)initWithClientIdentifier:(id)arg1 clientVersion:(id)arg2;
- (id)init;

@end

