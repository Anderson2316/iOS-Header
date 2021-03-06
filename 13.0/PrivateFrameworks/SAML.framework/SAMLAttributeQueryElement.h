//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAML/SAMLBaseElement.h>

@class NSArray, NSDate, NSString, SAMLSignature, SAMLSubject;

__attribute__((visibility("hidden")))
@interface SAMLAttributeQueryElement : SAMLBaseElement
{
}

+ (id)createElement:(id *)arg1;
- (void)addAttribute:(id)arg1;
@property(readonly, nonatomic) NSArray *samlAttributes;
@property(retain, nonatomic) SAMLSubject *subject;
@property(readonly, nonatomic) SAMLSignature *signature;
@property(retain, nonatomic) NSString *channelId;
@property(readonly, nonatomic) NSString *consent;
@property(readonly, nonatomic) NSString *destination;
@property(readonly, nonatomic) NSDate *issueInstant;
@property(readonly, nonatomic) NSString *identifier;

@end

