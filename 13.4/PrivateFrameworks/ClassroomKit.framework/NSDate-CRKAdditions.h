//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@class NSString;

@interface NSDate (CRKAdditions)
+ (id)crk_sharedDateFormatter;
@property(readonly, copy, nonatomic) NSString *crk_JSONStringValue;
@property(readonly, getter=crk_isInPast) _Bool crk_inPast;
@end

