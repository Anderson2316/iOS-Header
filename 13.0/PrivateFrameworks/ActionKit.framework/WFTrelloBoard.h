//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/WFTrelloObject.h>

@class NSString, NSURL;

@interface WFTrelloBoard : WFTrelloObject
{
    _Bool _closed;
    NSString *_itemDescription;
    NSURL *_URL;
}

+ (id)closedJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool closed; // @synthesize closed=_closed;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
- (void).cxx_destruct;

@end

