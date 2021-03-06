//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSString;

@interface AFAccount : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _peerSiriEnabled;
    _Bool _isActive;
    NSString *_identifier;
    NSString *_label;
    NSString *_assistantIdentifier;
    NSString *_loggingAssistantIdentifier;
    NSString *_speechIdentifier;
    NSString *_hostname;
    NSString *_peerAssistantIdentifier;
    NSString *_peerLoggingAssistantIdentifier;
    NSString *_peerSpeechIdentifier;
    NSString *_peerUserAgentString;
    NSString *_peerLanguageCode;
    NSString *_peerHostname;
    NSString *_predefinedServer;
    NSString *_aceHost;
    NSDictionary *_connectionPolicy;
    NSDate *_connectionPolicyDate;
    NSString *_connectionPolicyHostname;
    NSString *_group;
    NSDictionary *_lastSyncDates;
    NSString *_localeIdentifier;
    NSDate *_connectionPolicyFirstFailureDate;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *connectionPolicyFirstFailureDate; // @synthesize connectionPolicyFirstFailureDate=_connectionPolicyFirstFailureDate;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(copy, nonatomic) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property(copy, nonatomic) NSDictionary *lastSyncDates; // @synthesize lastSyncDates=_lastSyncDates;
@property(copy, nonatomic) NSString *group; // @synthesize group=_group;
@property(copy, nonatomic) NSString *connectionPolicyHostname; // @synthesize connectionPolicyHostname=_connectionPolicyHostname;
@property(copy, nonatomic) NSDate *connectionPolicyDate; // @synthesize connectionPolicyDate=_connectionPolicyDate;
@property(copy, nonatomic) NSDictionary *connectionPolicy; // @synthesize connectionPolicy=_connectionPolicy;
@property(copy, nonatomic) NSString *aceHost; // @synthesize aceHost=_aceHost;
@property(copy, nonatomic) NSString *predefinedServer; // @synthesize predefinedServer=_predefinedServer;
@property(copy, nonatomic) NSString *peerHostname; // @synthesize peerHostname=_peerHostname;
@property(nonatomic) _Bool peerSiriEnabled; // @synthesize peerSiriEnabled=_peerSiriEnabled;
@property(copy, nonatomic) NSString *peerLanguageCode; // @synthesize peerLanguageCode=_peerLanguageCode;
@property(copy, nonatomic) NSString *peerUserAgentString; // @synthesize peerUserAgentString=_peerUserAgentString;
@property(copy, nonatomic) NSString *peerSpeechIdentifier; // @synthesize peerSpeechIdentifier=_peerSpeechIdentifier;
@property(copy, nonatomic) NSString *peerLoggingAssistantIdentifier; // @synthesize peerLoggingAssistantIdentifier=_peerLoggingAssistantIdentifier;
@property(copy, nonatomic) NSString *peerAssistantIdentifier; // @synthesize peerAssistantIdentifier=_peerAssistantIdentifier;
@property(copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(copy, nonatomic) NSString *speechIdentifier; // @synthesize speechIdentifier=_speechIdentifier;
@property(copy, nonatomic) NSString *loggingAssistantIdentifier; // @synthesize loggingAssistantIdentifier=_loggingAssistantIdentifier;
@property(copy, nonatomic) NSString *assistantIdentifier; // @synthesize assistantIdentifier=_assistantIdentifier;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)messageDictionary;
- (id)initWithMessageDictionary:(id)arg1;
- (id)description;

@end

