//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/SSDownloadManagerObserver-Protocol.h>
#import <iTunesStoreUI/SSEventMonitorDelegate-Protocol.h>
#import <iTunesStoreUI/SSPurchaseRequestDelegate-Protocol.h>
#import <iTunesStoreUI/SSPurchaseRequestDelegatePrivate-Protocol.h>
#import <iTunesStoreUI/SUContinuationDelegate-Protocol.h>

@class NSDictionary, NSMutableArray, NSMutableSet, NSNumber, NSSet, NSString, SSEventMonitor, SUQueueSessionManager;
@protocol SUPurchaseManagerDelegate;

@interface SUPurchaseManager : NSObject <SSPurchaseRequestDelegatePrivate, SSEventMonitorDelegate, SUContinuationDelegate, SSDownloadManagerObserver, SSPurchaseRequestDelegate>
{
    id <SUPurchaseManagerDelegate> _delegate;
    SSEventMonitor *_eventMonitor;
    NSMutableSet *_futurePurchases;
    NSMutableSet *_inflightContinuations;
    NSMutableArray *_observedDownloadManagers;
    NSMutableArray *_pendingContinuations;
    NSMutableArray *_pendingPurchases;
    NSMutableSet *_purchasedIdentifiers;
    NSMutableArray *_purchaseRequests;
    SUQueueSessionManager *_queueSessionManager;
    _Bool _showingErrorDialogs;
    NSDictionary *_tidHeaders;
    long long _updatesCount;
    NSString *_userAgent;
    _Bool _waitingForAuthentication;
    NSNumber *_accountDSID;
}

@property(copy, nonatomic) NSNumber *accountDSID; // @synthesize accountDSID=_accountDSID;
@property(copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(copy, nonatomic) NSDictionary *tidHeaders; // @synthesize tidHeaders=_tidHeaders;
@property(retain, nonatomic) SUQueueSessionManager *queueSessionManager; // @synthesize queueSessionManager=_queueSessionManager;
@property(readonly, nonatomic) NSSet *purchasedItemIdentifiers; // @synthesize purchasedItemIdentifiers=_purchasedIdentifiers;
@property(readonly, nonatomic) NSSet *futurePurchases; // @synthesize futurePurchases=_futurePurchases;
@property(nonatomic) id <SUPurchaseManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_startPurchases:(id)arg1;
- (void)_startContinuations:(id)arg1;
- (void)_showDialogsForErrors:(id)arg1;
- (void)_removePurchaseRequest:(id)arg1;
- (void)_removePlaceholdersForPurchase:(id)arg1;
- (void)_performNextAction;
- (_Bool)_needsAuthenticationForPurchases:(id)arg1;
- (_Bool)_issuePurchaseRequestForPurchases:(id)arg1;
- (void)_enqueuePurchases:(id)arg1;
- (void)_enqueueExternalDownload:(id)arg1;
- (void)_enqueueContinuations:(id)arg1;
- (id)_downloadManagerForDownloadKind:(id)arg1;
- (id)_accountDSIDForPurchase:(id)arg1;
- (void)requestDidFinish:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)purchaseRequest:(id)arg1 purchaseDidSucceedWithResponse:(id)arg2;
- (void)purchaseRequest:(id)arg1 purchaseDidSucceed:(id)arg2;
- (void)purchaseRequest:(id)arg1 purchaseDidFail:(id)arg2 withError:(id)arg3;
- (void)continuationFinished:(id)arg1;
- (void)continuation:(id)arg1 failedWithError:(id)arg2;
- (void)_dialogDidFinish:(id)arg1;
- (void)eventMonitor:(id)arg1 receivedEventWithName:(id)arg2 userInfo:(id)arg3;
- (void)removePurchasedItemIdentifier:(unsigned long long)arg1;
@property(readonly, nonatomic) long long numberOfPendingPurchases;
- (id)newPurchaseBatchForItems:(id)arg1 offers:(id)arg2;
- (_Bool)itemIdentifierIsPurchasing:(unsigned long long)arg1;
- (_Bool)itemIdentifierIsPurchased:(unsigned long long)arg1;
- (void)endUpdates;
- (void)cancelFuturePurchase:(id)arg1;
- (void)beginUpdates;
- (void)addPurchasedItemIdentifiers:(id)arg1;
- (void)addPurchasedItemIdentifier:(unsigned long long)arg1;
- (_Bool)addPurchaseBatch:(id)arg1;
- (void)addFuturePurchase:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_schedulePurchaseCallback:(id)arg1 forPurchases:(id)arg2;
- (id)_newPurchaseBatchForPurchases:(id)arg1;
- (id)_newExternalDownloadWithItemDictionary:(id)arg1;
- (id)_newExternalDownloadWithDownloadDictionary:(id)arg1;
- (id)_newExternalDownloadWithDictionary:(id)arg1;
- (id)_newDictionaryForWebScriptValue:(id)arg1 inContext:(struct OpaqueJSContext *)arg2;
- (void)_addBatchForPurchases:(id)arg1 options:(id)arg2;
- (void)purchaseScriptObject:(id)arg1 withOptions:(id)arg2 inContext:(struct OpaqueJSContext *)arg3;
- (void)purchaseScriptObject:(id)arg1;
- (void)enqueueScriptPurchases:(id)arg1;
- (id)copyPurchaseForScriptObject:(id)arg1 inContext:(struct OpaqueJSContext *)arg2;
- (id)copyPurchaseForScriptObject:(id)arg1;
- (void)addExternalDownloads:(id)arg1 withOptions:(id)arg2 inContext:(struct OpaqueJSContext *)arg3;
- (void)addExternalDownloads:(id)arg1 inContext:(struct OpaqueJSContext *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

