//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface BRCDatabaseRestoreManager : NSObject
{
    NSURL *_userURL;
    NSURL *_clientDatabaseURL;
}

@property(retain, nonatomic) NSURL *clientDatabaseURL; // @synthesize clientDatabaseURL=_clientDatabaseURL;
@property(retain, nonatomic) NSURL *userURL; // @synthesize userURL=_userURL;
- (void).cxx_destruct;
- (void)restoreWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithUserURL:(id)arg1;

@end

