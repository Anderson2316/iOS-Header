//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface _ICMusicSubscriptionLeaseIdentityCacheKey : NSObject <NSCopying>
{
    NSNumber *_delegatedDSID;
    NSNumber *_DSID;
    NSString *_carrierBundleDeviceIdentifier;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *carrierBundleDeviceIdentifier; // @synthesize carrierBundleDeviceIdentifier=_carrierBundleDeviceIdentifier;
@property(readonly, copy, nonatomic) NSNumber *DSID; // @synthesize DSID=_DSID;
@property(readonly, copy, nonatomic) NSNumber *delegatedDSID; // @synthesize delegatedDSID=_delegatedDSID;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDSID:(id)arg1 carrierBundleDeviceIdentifier:(id)arg2 delegatedDSID:(id)arg3;

@end

