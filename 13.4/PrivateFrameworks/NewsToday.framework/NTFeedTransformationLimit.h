//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NTFeedTransforming-Protocol.h>

@class NSString;

@interface NTFeedTransformationLimit : NSObject <NTFeedTransforming>
{
    unsigned long long _limit;
}

@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
- (id)transformFeedItems:(id)arg1;
- (id)initWithLimit:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

