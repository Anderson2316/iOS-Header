//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FileProviderUI/NSObject-Protocol.h>

@class NSArray, NSError;
@protocol FPUIAuthenticationDelegate;

@protocol FPUIAuthenticationConnectionFlowDelegate <NSObject>
- (void)authenticationDelegate:(id <FPUIAuthenticationDelegate>)arg1 didFinishWithError:(NSError *)arg2 completionHandler:(void (^)(void))arg3;
- (void)authenticationDelegate:(id <FPUIAuthenticationDelegate>)arg1 didEncounterError:(NSError *)arg2;
- (void)authenticationDelegate:(id <FPUIAuthenticationDelegate>)arg1 didReceiveVolumeMountRepresentations:(NSArray *)arg2;
- (void)authenticationDelegate:(id <FPUIAuthenticationDelegate>)arg1 didReceiveCredentialDescriptors:(NSArray *)arg2;
@end

