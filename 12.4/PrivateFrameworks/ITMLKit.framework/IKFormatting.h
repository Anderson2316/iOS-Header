//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumberFormatter;

@interface IKFormatting : NSObject
{
    NSMutableDictionary *_dateFormatters;
    struct os_unfair_lock_s _dateFormattersLock;
    NSMutableDictionary *_numberFormatters;
    struct os_unfair_lock_s _numberFormattersLock;
    NSNumberFormatter *_durationFormatter;
    NSNumberFormatter *_durationPaddedFormatter;
}

+ (id)isoDateFormatter;
+ (id)rfc1123DateFormatter;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)formatNumber:(id)arg1 style:(id)arg2 postiveFormat:(id)arg3 negativeFormat:(id)arg4;
- (id)formatDuration:(id)arg1;
- (id)formatDate:(id)arg1 format:(id)arg2;
- (id)init;

@end

