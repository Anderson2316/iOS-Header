//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSDate, NSString;

@interface SAMovieV2ReviewListCell : SADomainObject
{
}

+ (id)reviewListCellWithDictionary:(id)arg1 context:(id)arg2;
+ (id)reviewListCell;
@property(copy, nonatomic) NSString *reviewText;
@property(copy, nonatomic) NSDate *reviewDate;
@property(copy, nonatomic) NSString *reviewAuthor;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

