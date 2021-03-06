//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPInstrumentableTarget-Protocol.h"

@class NSArray, NSIndexPath, NSString, RAPQuestion, RAPWorkflowLayoutManager;
@protocol RAPMenuItem;

@protocol RAPMenu <RAPInstrumentableTarget>
@property(retain, nonatomic) RAPQuestion<RAPMenuItem> *selectedMenuItem;
@property(readonly, nonatomic) _Bool shouldShowIcons;
@property(readonly, nonatomic) _Bool shouldShowSubtitles;

@optional
+ (NSString *)localizedHeaderText;
@property(readonly, nonatomic) NSArray *allMenuItems;
@property(readonly, nonatomic) unsigned long long numberOfSections;
- (RAPQuestion<RAPMenuItem> *)menuItemForIndexPath:(NSIndexPath *)arg1;
- (unsigned long long)numberOfMenuItemsInSection:(unsigned long long)arg1;
- (void)updateCategoriesFromLayoutManager:(RAPWorkflowLayoutManager *)arg1;
@end

