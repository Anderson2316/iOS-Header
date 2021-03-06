//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOTransitTicketingSegment : PBCodable <NSCopying>
{
    NSMutableArray *_paths;
    NSString *_segmentName;
    NSString *_ticketingUrl;
}

+ (Class)pathType;
@property(retain, nonatomic) NSMutableArray *paths; // @synthesize paths=_paths;
@property(retain, nonatomic) NSString *segmentName; // @synthesize segmentName=_segmentName;
@property(retain, nonatomic) NSString *ticketingUrl; // @synthesize ticketingUrl=_ticketingUrl;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)pathAtIndex:(unsigned long long)arg1;
- (unsigned long long)pathsCount;
- (void)addPath:(id)arg1;
- (void)clearPaths;
@property(readonly, nonatomic) _Bool hasSegmentName;
@property(readonly, nonatomic) _Bool hasTicketingUrl;

@end

