//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CarSearchTableViewCellDataSource-Protocol.h"
#import "RAPAutocompleteSearchResult-Protocol.h"
#import "RecentsItem-Protocol.h"

@class NSString;
@protocol MSPHistoryEntry;

__attribute__((visibility("hidden")))
@interface HistoryEntryRecentsItem : NSObject <RAPAutocompleteSearchResult, CarSearchTableViewCellDataSource, RecentsItem>
{
    id <MSPHistoryEntry> _historyEntry;
    HistoryEntryRecentsItem *_linkedRecentRoute;
}

@property(retain, nonatomic) HistoryEntryRecentsItem *linkedRecentRoute; // @synthesize linkedRecentRoute=_linkedRecentRoute;
@property(readonly, nonatomic) id <MSPHistoryEntry> historyEntry; // @synthesize historyEntry=_historyEntry;
- (void).cxx_destruct;
- (double)timestamp;
- (id)initWithHistoryEntry:(id)arg1;
- (id)entryForHistoryPlace:(id)arg1;
- (id)entryForHistoryRoute:(id)arg1;
- (id)entryForHistorySearch:(id)arg1;
- (id)entryWithTicket:(id)arg1;
- (void)configureModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

