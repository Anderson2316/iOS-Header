//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItem-Protocol.h>

@class NSString, PKAccount, PKPaymentPass, PKPaymentTransaction;

@interface PKDashboardPaymentTransactionItem : NSObject <PKDashboardItem>
{
    PKPaymentPass *_pass;
    PKPaymentTransaction *_transaction;
    _Bool _isFeaturedTransaction;
    PKAccount *_account;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFeaturedTransaction; // @synthesize isFeaturedTransaction=_isFeaturedTransaction;
@property(retain, nonatomic) PKAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property(readonly, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
- (id)initWithPaymentPass:(id)arg1 transaction:(id)arg2 account:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

