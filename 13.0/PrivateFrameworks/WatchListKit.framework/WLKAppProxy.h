//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchListKit/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface WLKAppProxy : NSObject <NSSecureCoding>
{
    _Bool _isEntitled;
    _Bool _isBetaApp;
    _Bool _isSystemApp;
    _Bool _supportsTVApp;
    NSString *_bundleIdentifier;
    NSString *_version;
    NSString *_subscriptionInfo;
    NSNumber *_itemID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(readonly, copy, nonatomic) NSString *subscriptionInfo; // @synthesize subscriptionInfo=_subscriptionInfo;
@property(readonly, nonatomic) _Bool supportsTVApp; // @synthesize supportsTVApp=_supportsTVApp;
@property(readonly, nonatomic) _Bool isSystemApp; // @synthesize isSystemApp=_isSystemApp;
@property(readonly, nonatomic) _Bool isBetaApp; // @synthesize isBetaApp=_isBetaApp;
@property(readonly, nonatomic) _Bool isEntitled; // @synthesize isEntitled=_isEntitled;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
@property(readonly, nonatomic) _Bool isTVApp;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

@end

