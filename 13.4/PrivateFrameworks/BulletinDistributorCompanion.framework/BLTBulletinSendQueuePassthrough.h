//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol BLTBulletinSendQueueDelegate;

@interface BLTBulletinSendQueuePassthrough : NSObject
{
    id <BLTBulletinSendQueueDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <BLTBulletinSendQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sendNow;
- (void)queuePending;
- (_Bool)handleFileURL:(id)arg1;
- (void)sendRequest:(id)arg1 withTimeout:(id)arg2 isTrafficRestricted:(_Bool)arg3 didSend:(CDUnknownBlockType)arg4;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 didSend:(CDUnknownBlockType)arg3 didQueue:(CDUnknownBlockType)arg4;

@end

