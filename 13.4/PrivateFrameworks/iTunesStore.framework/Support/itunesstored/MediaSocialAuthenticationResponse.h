//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableOrderedSet, NSNumber, NSOrderedSet, SSAuthenticateResponse;

@interface MediaSocialAuthenticationResponse : NSObject <NSCopying>
{
    NSNumber *_accountIdentifier;
    SSAuthenticateResponse *_authenticateResponse;
    NSMutableOrderedSet *_postIdentifiers;
    NSMutableOrderedSet *_uploadIdentifiers;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSOrderedSet *uploadIdentifiers; // @synthesize uploadIdentifiers=_uploadIdentifiers;
@property(copy, nonatomic) NSOrderedSet *postIdentifiers; // @synthesize postIdentifiers=_postIdentifiers;
@property(retain, nonatomic) SSAuthenticateResponse *authenticateResponse; // @synthesize authenticateResponse=_authenticateResponse;
@property(copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addUploadIdentifier:(long long)arg1;
- (void)addPostIdentifier:(long long)arg1;
- (id)init;

@end

