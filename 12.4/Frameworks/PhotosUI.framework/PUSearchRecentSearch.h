//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface PUSearchRecentSearch : NSObject <NSSecureCoding>
{
    NSArray *_representedObjects;
}

+ (id)new;
+ (_Bool)supportsSecureCoding;
+ (_Bool)_isSupportedRepresentedObjects:(id)arg1;
@property(readonly, nonatomic) NSArray *representedObjects; // @synthesize representedObjects=_representedObjects;
- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSString *title;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithRepresentedObjects:(id)arg1;

@end

