//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SYDWriteTrackerClient : NSObject
{
    unsigned short _numberOfWrites;
    unsigned long long _bytesWritten;
}

@property(nonatomic) unsigned short numberOfWrites; // @synthesize numberOfWrites=_numberOfWrites;
@property(nonatomic) unsigned long long bytesWritten; // @synthesize bytesWritten=_bytesWritten;
- (id)plistRepresentation;
- (id)initWithPlistRepresentation:(id)arg1;

@end

