//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NSString;
@protocol StoreKitBagContract;

@interface StoreKitMessagesServerRequest : NSObject
{
    id <StoreKitBagContract> _bagContract;
    ACAccount *_account;
    NSString *_bundleID;
    long long _status;
}

- (void).cxx_destruct;
- (id)_requestURL;
- (id)_parseURLFromResponseData:(id)arg1;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithBagContract:(id)arg1 account:(id)arg2 bundleID:(id)arg3 status:(long long)arg4;

@end

