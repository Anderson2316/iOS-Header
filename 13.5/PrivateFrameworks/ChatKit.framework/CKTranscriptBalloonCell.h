//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKTranscriptMessageContentCell.h>

@class CKBalloonView;

@interface CKTranscriptBalloonCell : CKTranscriptMessageContentCell
{
    _Bool _mayReparentPluginViews;
    CKBalloonView *_balloonView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool mayReparentPluginViews; // @synthesize mayReparentPluginViews=_mayReparentPluginViews;
@property(retain, nonatomic) CKBalloonView *balloonView; // @synthesize balloonView=_balloonView;
- (void)setAnimationPauseReasons:(long long)arg1;
- (id)messageDisplayView;
- (void)willLayoutDrawerLabelFrame:(struct CGRect *)arg1;
- (void)clearFilters;
- (void)addFilter:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)configureForChatItem:(id)arg1;

@end

