//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>

#import <MapsSuggestions/MapsSuggestionsMeCardObserver-Protocol.h>
#import <MapsSuggestions/MapsSuggestionsSource-Protocol.h>

@class MapsSuggestionsCanKicker, MapsSuggestionsShortcutManager, NSObject, NSString;
@protocol MapsSuggestionsSourceDelegate, OS_dispatch_queue;

@interface MapsSuggestionsShortcutSource : MapsSuggestionsBaseSource <MapsSuggestionsMeCardObserver, MapsSuggestionsSource>
{
    NSObject<OS_dispatch_queue> *_queue;
    MapsSuggestionsCanKicker *_updateForcer;
    MapsSuggestionsShortcutManager *_shortcutManager;
}

+ (unsigned long long)disposition;
+ (_Bool)isEnabled;
- (void).cxx_destruct;
@property(retain, nonatomic) MapsSuggestionsShortcutManager *shortcutManager; // @synthesize shortcutManager=_shortcutManager;
- (void)meCardReader:(id)arg1 didUpdateMeCard:(id)arg2;
- (_Bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)canProduceEntriesOfType:(long long)arg1;
- (double)updateSuggestionEntries;
- (void)stop;
- (void)start;
- (void)_updateSuggestionEntries;
- (void)_treatShortcuts:(id)arg1 error:(id)arg2;
- (id)initWithDelegate:(id)arg1 name:(id)arg2;
- (void)_renameDuplicateMeCardTypes:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MapsSuggestionsSourceDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end

