//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUPattern.h>

@class NSString;

@interface NUTokenPattern : NUPattern
{
    NSString *_token;
}

@property(readonly) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (_Bool)match:(id)arg1 location:(unsigned long long *)arg2 count:(unsigned long long *)arg3;
- (_Bool)isEqualToTokenPattern:(id)arg1;
- (_Bool)isEqualToPattern:(id)arg1;
- (id)optimizedPattern;
- (id)stringRepresentation;
- (id)shortestMatch;
- (_Bool)isFixedOrder;
- (id)tokens;
- (id)initWithToken:(id)arg1;
- (id)init;

@end

