//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PLAssetsdClientXPCConnection, PLAssetsdDemoClient, PLAssetsdLibraryManagementClient, PLAssetsdSystemLibraryURLReadOnlyClient;
@protocol OS_dispatch_queue;

@interface PLNonBindingAssetsdClient : NSObject
{
    PLAssetsdClientXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    PLAssetsdSystemLibraryURLReadOnlyClient *_systemLibraryURLReadOnlyClient;
    PLAssetsdLibraryManagementClient *_libraryManagementClient;
    PLAssetsdDemoClient *_demoClient;
}

- (void).cxx_destruct;
- (void)_updateLibraryStateConnectionInterrupted:(id)arg1;
@property(readonly) PLAssetsdDemoClient *demoClient;
@property(readonly) PLAssetsdLibraryManagementClient *libraryManagementClient;
@property(readonly) PLAssetsdSystemLibraryURLReadOnlyClient *systemLibraryURLReadOnlyClient;
- (id)init;

@end

