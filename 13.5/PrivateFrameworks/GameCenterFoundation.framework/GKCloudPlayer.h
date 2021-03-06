//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKBasePlayer.h>

#import <GameCenterFoundation/NSCopying-Protocol.h>
#import <GameCenterFoundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface GKCloudPlayer : GKBasePlayer <NSSecureCoding, NSCopying>
{
    NSString *_identifier;
    NSString *_name;
}

+ (_Bool)supportsSecureCoding;
+ (void)getCurrentSignedInPlayerForContainer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)displayName;
- (id)playerID;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

