//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDCameraFrame, GEOPDLocationInfo, PBDataReader;

@interface GEOPDMuninViewState : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    GEOPDCameraFrame *_cameraFrame;
    GEOPDLocationInfo *_locationInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_cameraFrame:1;
        unsigned int read_locationInfo:1;
        unsigned int wrote_cameraFrame:1;
        unsigned int wrote_locationInfo:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOPDLocationInfo *locationInfo;
@property(readonly, nonatomic) _Bool hasLocationInfo;
- (void)_readLocationInfo;
@property(retain, nonatomic) GEOPDCameraFrame *cameraFrame;
@property(readonly, nonatomic) _Bool hasCameraFrame;
- (void)_readCameraFrame;
- (id)initWithData:(id)arg1;
- (id)init;

@end

