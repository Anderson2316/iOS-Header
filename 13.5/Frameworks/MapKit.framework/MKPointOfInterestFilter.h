//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/NSCopying-Protocol.h>
#import <MapKit/NSSecureCoding-Protocol.h>

@class NSSet;

@interface MKPointOfInterestFilter : NSObject <NSSecureCoding, NSCopying>
{
    NSSet *_includedCategories;
    NSSet *_excludedCategories;
}

+ (id)filterExcludingAllCategories;
+ (id)filterIncludingAllCategories;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (_Bool)_excludesAllCategories;
- (_Bool)_includesAllCategories;
- (id)_geoPOICategoryFilter;
- (_Bool)excludesCategory:(id)arg1;
- (_Bool)includesCategory:(id)arg1;
- (_Bool)isEqualToPointOfInterestFilter:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initIncludingCategories:(id)arg1 excludingCategories:(id)arg2;
- (id)initExcludingCategories:(id)arg1;
- (id)initIncludingCategories:(id)arg1;
- (id)init;

@end

