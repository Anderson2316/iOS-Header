//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class NSDictionary, NSString;

@interface MPRTCReportingPrepareInternalSessionOperation : MPAsyncOperation
{
    int _clientType;
    NSDictionary *_additionalUserInfo;
    NSString *_clientName;
    long long _clientVersion;
    id _hierarchyToken;
    NSString *_serviceIdentifier;
    long long _sessionID;
    CDUnknownBlockType _responseHandler;
}

+ (id)RTCReportingFrameworkPath;
+ (id)newHierarchyTokenFromParentToken:(id)arg1;
+ (_Bool)isRTCReportingSupported;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(nonatomic) long long sessionID; // @synthesize sessionID=_sessionID;
@property(copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(retain, nonatomic) id hierarchyToken; // @synthesize hierarchyToken=_hierarchyToken;
@property(nonatomic) long long clientVersion; // @synthesize clientVersion=_clientVersion;
@property(nonatomic) int clientType; // @synthesize clientType=_clientType;
@property(copy, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(copy, nonatomic) NSDictionary *additionalUserInfo; // @synthesize additionalUserInfo=_additionalUserInfo;
- (void)execute;

@end

