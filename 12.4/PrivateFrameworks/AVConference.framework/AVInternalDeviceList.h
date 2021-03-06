//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVInternalDeviceList : NSObject
{
    CDUnknownBlockType changeListener;
    NSMutableArray *deviceList;
    struct _opaque_pthread_mutex_t listLock;
}

+ (id)defaultDeviceOfType:(unsigned int)arg1;
+ (id)newDeviceList;
@property(copy, nonatomic) CDUnknownBlockType changeListener;
- (id)deviceList;
- (void)notifyDeviceListChanged;
- (void)dealloc;
- (void)cleanup;
- (id)init;
- (unsigned int)dataSourceControlID;

@end

