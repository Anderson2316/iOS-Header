//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface ICAddToWishListResponse : NSObject
{
    NSDictionary *_responseDictionary;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *message;
@property(readonly, nonatomic) long long statusCode;
- (id)description;
- (id)initWithResponseDictionary:(id)arg1;

@end

