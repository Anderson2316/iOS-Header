//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface CLSNowPlayingStreamSession : NSObject
{
    NSDate *_localEndDate;
    NSDate *_localStartDate;
    NSArray *_events;
}

+ (id)playbackStreamSessionDateSortDescriptors;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *events; // @synthesize events=_events;
@property(readonly, nonatomic) NSDate *localStartDate; // @synthesize localStartDate=_localStartDate;
@property(readonly, nonatomic) NSDate *localEndDate; // @synthesize localEndDate=_localEndDate;
- (id)debugDescription;
- (id)description;
- (id)initWithDataCluster:(id)arg1;
- (id)initWithEvents:(id)arg1;

@end

