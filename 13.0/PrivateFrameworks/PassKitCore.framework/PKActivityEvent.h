//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface PKActivityEvent : NSObject
{
    _Bool _unread;
    NSString *_eventType;
    NSString *_identifier;
    NSDate *_date;
}

+ (id)eventsWithTransactions:(id)arg1;
@property(readonly, nonatomic, getter=isUnread) _Bool unread; // @synthesize unread=_unread;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
- (void).cxx_destruct;
- (_Bool)isEqualToActivityEvent:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 date:(id)arg2 unread:(_Bool)arg3;

@end

