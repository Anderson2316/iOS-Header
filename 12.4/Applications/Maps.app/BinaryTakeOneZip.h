//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol BinaryTakeOneZipDelegate;

__attribute__((visibility("hidden")))
@interface BinaryTakeOneZip : NSObject
{
    _Bool _didReceiveRightSignal;
    _Bool _didReceiveLeftSignal;
    _Bool _didReceiveBothSignals;
    id <BinaryTakeOneZipDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_recieveRightSignal:(_Bool)arg1 leftSignal:(_Bool)arg2;
- (void)receiveLeftSignal;
- (void)receiveRightSignal;
- (id)initWithDelegate:(id)arg1;

@end

