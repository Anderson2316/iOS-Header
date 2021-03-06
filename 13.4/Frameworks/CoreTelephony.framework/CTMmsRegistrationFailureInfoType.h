//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface CTMmsRegistrationFailureInfoType : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _dataActive;
    _Bool _isDataAttached;
    _Bool _activationForMms;
    NSNumber *_pdpContextId;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool activationForMms; // @synthesize activationForMms=_activationForMms;
@property(nonatomic) _Bool isDataAttached; // @synthesize isDataAttached=_isDataAttached;
@property(nonatomic) _Bool dataActive; // @synthesize dataActive=_dataActive;
@property(retain, nonatomic) NSNumber *pdpContextId; // @synthesize pdpContextId=_pdpContextId;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToCTMmsRegistrationFailureInfoType:(id)arg1;
- (id)init;

@end

