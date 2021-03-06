//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class KeepAlive, NSError, NSLock;

@interface Task : NSOperation
{
    KeepAlive *_keepAlive;
    NSLock *_lock;
    _Bool _success;
    NSError *_error;
}

- (void).cxx_destruct;
@property _Bool success; // @synthesize success=_success;
@property(copy) NSError *error; // @synthesize error=_error;
- (void)_dispatchCompletionBlock;
- (void)unlock;
- (_Bool)runSubTask:(id)arg1 returningError:(id *)arg2;
- (void)lock;
- (void)completeWithSuccess;
- (void)completeWithError:(id)arg1;
- (id)init;

@end

