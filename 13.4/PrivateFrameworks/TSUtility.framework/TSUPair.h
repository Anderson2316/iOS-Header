//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSUtility/NSCoding-Protocol.h>
#import <TSUtility/NSCopying-Protocol.h>
#import <TSUtility/NSMutableCopying-Protocol.h>

@interface TSUPair : NSObject <NSCopying, NSMutableCopying, NSCoding>
{
    id mFirst;
    id mSecond;
}

+ (id)pair;
+ (id)pairWithPair:(id)arg1;
+ (id)pairWithFirst:(id)arg1 second:(id)arg2;
- (void)p_SetSecond:(id)arg1;
- (void)p_SetFirst:(id)arg1;
- (id)second;
- (id)first;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithPair:(id)arg1;
- (id)initWithFirst:(id)arg1 second:(id)arg2;

@end

