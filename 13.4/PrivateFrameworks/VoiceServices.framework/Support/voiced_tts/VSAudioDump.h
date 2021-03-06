//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface VSAudioDump : NSObject
{
    NSString *_audioDumpPath;
}

+ (id)defaultAudioDumpStore;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *audioDumpPath; // @synthesize audioDumpPath=_audioDumpPath;
- (void)dumpAudio:(id)arg1;
- (void)createDirectoryIfNeeded;
- (void)deleteAudioDump;
- (unsigned long long)totalAudioDumpSize;
- (void)cleanAudioDump;
- (id)initWithStorePath:(id)arg1;

@end

