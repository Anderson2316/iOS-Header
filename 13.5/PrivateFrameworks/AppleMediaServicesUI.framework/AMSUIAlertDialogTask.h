//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class AMSDialogRequest, UIViewController;

@interface AMSUIAlertDialogTask : AMSTask
{
    AMSDialogRequest *_request;
    UIViewController *_presentingViewController;
}

+ (long long)_keyboardTypeFromType:(long long)arg1;
+ (id)_convertTextField:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(readonly, nonatomic) AMSDialogRequest *request; // @synthesize request=_request;
- (id)_createIOSViewControllerFromRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)present;
- (id)initWithRequest:(id)arg1 presentingViewController:(id)arg2;

@end

