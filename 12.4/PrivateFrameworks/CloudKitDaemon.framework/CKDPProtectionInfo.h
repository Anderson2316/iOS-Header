//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDPProtectionInfo : PBCodable <NSCopying>
{
    NSData *_protectionInfo;
    NSString *_protectionInfoTag;
}

@property(retain, nonatomic) NSString *protectionInfoTag; // @synthesize protectionInfoTag=_protectionInfoTag;
@property(retain, nonatomic) NSData *protectionInfo; // @synthesize protectionInfo=_protectionInfo;
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
@property(readonly, nonatomic) _Bool hasProtectionInfoTag;
@property(readonly, nonatomic) _Bool hasProtectionInfo;

@end

