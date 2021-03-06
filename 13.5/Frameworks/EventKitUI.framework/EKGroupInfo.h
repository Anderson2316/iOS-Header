//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EKSource, NSArray, NSMutableArray, NSSet, NSString;

@interface EKGroupInfo : NSObject
{
    NSMutableArray *_calendars;
    int _customGroupType;
    NSString *_customTitle;
    NSString *_customTitleAtBeginningOfSentence;
    NSString *_typeTitle;
    NSString *_title;
    NSString *_titleForBeginningOfSentence;
    _Bool _selected;
    _Bool _showSelectAllButton;
    _Bool _showVerifyAccountButton;
    EKSource *_source;
    NSString *_footer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *footer; // @synthesize footer=_footer;
@property(nonatomic) _Bool showVerifyAccountButton; // @synthesize showVerifyAccountButton=_showVerifyAccountButton;
@property(nonatomic) _Bool showSelectAllButton; // @synthesize showSelectAllButton=_showSelectAllButton;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) EKSource *source; // @synthesize source=_source;
@property(readonly, nonatomic) EKSource *sourceForSyncError;
- (id)description;
@property(readonly, nonatomic) int sortOrder;
@property(readonly, nonatomic) _Bool isSubscribed;
@property(readonly, nonatomic) _Bool showCalendarNameIfSolitary;
@property(readonly, nonatomic) _Bool showAddCalendarButton;
- (void)selectNone;
- (void)selectAll;
@property(readonly, copy, nonatomic) NSSet *selectedCalendarSet;
@property(readonly, copy, nonatomic) NSSet *calendarSet;
- (id)copyCalendars;
- (id)calendarAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numSelectedCalendars;
@property(readonly, nonatomic) unsigned long long numSelectableCalendars;
@property(readonly, nonatomic) unsigned long long numCalendars;
@property(readonly, retain, nonatomic) NSArray *calendarInfos;
@property(readonly, copy, nonatomic) NSString *typeTitle;
- (void)setCustomTitle:(id)arg1 forBeginningOfSentence:(id)arg2;
- (id)titleForBeginningOfSentence:(_Bool)arg1;
@property(readonly, copy, nonatomic) NSString *title;
- (void)removeCalendar:(id)arg1;
- (void)insertCalendarInfo:(id)arg1;
- (id)initWithCustomGroupType:(int)arg1;
- (id)initWithSource:(id)arg1;
- (id)init;

@end

