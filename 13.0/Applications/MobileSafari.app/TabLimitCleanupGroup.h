//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIAlertAction;

@interface TabLimitCleanupGroup : NSObject
{
    UIAlertAction *_action;
    NSString *_message;
}

@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) UIAlertAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)initWithAlertMesssage:(id)arg1 actionTitle:(id)arg2 tabs:(id)arg3 browserWindowController:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;

@end

