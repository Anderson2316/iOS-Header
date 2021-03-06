//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BusinessChat/BCDictionaryImageSerializable-Protocol.h>

@class BCError, NSArray, NSDictionary, NSString;

@interface BCInternalAuthenticationResponse : NSObject <BCDictionaryImageSerializable>
{
    NSString *_status;
    NSString *_businessIdentifier;
    NSString *_groupIdentifier;
    NSString *_credentials;
    NSArray *_errors;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(retain, nonatomic) NSString *credentials; // @synthesize credentials=_credentials;
@property(retain, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(retain, nonatomic) NSString *businessIdentifier; // @synthesize businessIdentifier=_businessIdentifier;
@property(nonatomic) NSString *status; // @synthesize status=_status;
@property(readonly, nonatomic) BCError *error;
@property(readonly, nonatomic) NSDictionary *dictionaryValue;
- (id)responseMessageFor:(id)arg1 message:(id)arg2;
- (id)initWithBusinessIdentifier:(id)arg1 groupIdentifier:(id)arg2 credentials:(id)arg3 error:(id)arg4;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 imageDictionary:(id)arg2;

@end

