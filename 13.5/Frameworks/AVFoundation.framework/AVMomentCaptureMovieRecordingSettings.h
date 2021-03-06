//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/NSCopying-Protocol.h>

@class NSArray, NSString, NSURL;

@interface AVMomentCaptureMovieRecordingSettings : NSObject <NSCopying>
{
    long long _uniqueID;
    unsigned long long _userInitiatedCaptureTime;
    NSString *_videoCodecType;
    NSURL *_movieFileURL;
    NSArray *_movieMetadata;
    _Bool _autoSpatialOverCaptureEnabled;
    NSString *_spatialOverCaptureGroupIdentifier;
    NSURL *_spatialOverCaptureMovieFileURL;
    NSArray *_spatialOverCaptureMovieMetadata;
}

+ (id)movieRecordingSettings;
+ (id)movieRecordingSettingsFromMomentCaptureSettings:(id)arg1;
@property(copy, nonatomic) NSURL *spatialOverCaptureMovieFileURL; // @synthesize spatialOverCaptureMovieFileURL=_spatialOverCaptureMovieFileURL;
@property(nonatomic, getter=isAutoSpatialOverCaptureEnabled) _Bool autoSpatialOverCaptureEnabled; // @synthesize autoSpatialOverCaptureEnabled=_autoSpatialOverCaptureEnabled;
@property(copy, nonatomic) NSURL *movieFileURL; // @synthesize movieFileURL=_movieFileURL;
@property(nonatomic) unsigned long long userInitiatedCaptureTime; // @synthesize userInitiatedCaptureTime=_userInitiatedCaptureTime;
@property(readonly, nonatomic) long long uniqueID; // @synthesize uniqueID=_uniqueID;
- (id)_sanitizedMovieMetadataArrayForMovieMetadataArray:(id)arg1 exceptionReason:(id *)arg2;
@property(copy, nonatomic) NSArray *spatialOverCaptureMovieMetadata;
@property(copy, nonatomic) NSArray *movieMetadata;
- (id)spatialOverCaptureGroupIdentifier;
@property(copy, nonatomic) NSString *videoCodecType;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)_initFromMomentCaptureSettings:(id)arg1;

@end

