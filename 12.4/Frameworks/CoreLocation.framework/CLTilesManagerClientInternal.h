//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CLTilesManagerClientInternal : NSObject
{
    NSObject<OS_xpc_object> *fXpcConnection;
    NSObject<OS_dispatch_queue> *fQueue;
    NSDictionary *fNotificationHandlers;
}

@end

