//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class NSArray, NSMutableDictionary;

@interface SystemAppBootstrapTask : Task
{
    NSMutableDictionary *_installs;
    NSArray *_results;
}

+ (id)_messageForError:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy) NSArray *results; // @synthesize results=_results;
- (void)_showInternalConnectionDialogWithError:(id)arg1;
- (void)main;
- (id)initWithInstalls:(id)arg1;

@end

