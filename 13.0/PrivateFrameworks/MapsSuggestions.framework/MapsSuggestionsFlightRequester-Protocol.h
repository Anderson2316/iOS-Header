//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class NSDate, NSString;

@protocol MapsSuggestionsFlightRequester <MapsSuggestionsObject>
- (_Bool)requestFlightsWithNumber:(unsigned long long)arg1 airlineCode:(NSString *)arg2 departureDate:(NSDate *)arg3 handler:(void (^)(NSArray *, NSError *))arg4;
@end

