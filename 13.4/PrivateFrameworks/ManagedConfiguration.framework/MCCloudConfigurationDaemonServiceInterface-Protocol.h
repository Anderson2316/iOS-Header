//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfiguration/NSObject-Protocol.h>

@class MCDeviceUploadCredentials, MCDeviceUploadOrganization, MCDeviceUploadSubmitDeviceRequestPayload, NSString;

@protocol MCCloudConfigurationDaemonServiceInterface <NSObject>
- (void)submitDeviceUploadRequest:(MCDeviceUploadSubmitDeviceRequestPayload *)arg1 credentials:(MCDeviceUploadCredentials *)arg2 completionBlock:(void (^)(_Bool, NSDictionary *, NSError *))arg3;
- (void)retrieveDeviceUploadSoldToIdsForOrganization:(MCDeviceUploadOrganization *)arg1 credentials:(MCDeviceUploadCredentials *)arg2 completionBlock:(void (^)(_Bool, NSDictionary *, NSError *))arg3;
- (void)retrieveDeviceUploadRequestTypesWithCredentials:(MCDeviceUploadCredentials *)arg1 completionBlock:(void (^)(_Bool, NSDictionary *, NSError *))arg2;
- (void)retrieveDeviceUploadOrganizationsWithCredentials:(MCDeviceUploadCredentials *)arg1 completionBlock:(void (^)(_Bool, NSDictionary *, NSError *))arg2;
- (void)unenrollWithCompletionBlock:(void (^)(_Bool, NSDictionary *, NSError *))arg1;
- (void)fetchConfigurationWithCompletionBlock:(void (^)(_Bool, NSDictionary *, NSError *))arg1;
- (void)provisionallyEnrollWithNonce:(NSString *)arg1 completionBlock:(void (^)(_Bool, NSDictionary *, NSError *))arg2;
@end

