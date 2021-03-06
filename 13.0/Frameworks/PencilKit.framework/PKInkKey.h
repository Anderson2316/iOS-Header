//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/NSCopying-Protocol.h>

@class NSString;

@interface PKInkKey : NSObject <NSCopying>
{
    NSString *_identifier;
    unsigned long long _version;
    NSString *_variant;
}

@property(readonly, copy, nonatomic) NSString *variant; // @synthesize variant=_variant;
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 version:(unsigned long long)arg2 variant:(id)arg3;

@end

