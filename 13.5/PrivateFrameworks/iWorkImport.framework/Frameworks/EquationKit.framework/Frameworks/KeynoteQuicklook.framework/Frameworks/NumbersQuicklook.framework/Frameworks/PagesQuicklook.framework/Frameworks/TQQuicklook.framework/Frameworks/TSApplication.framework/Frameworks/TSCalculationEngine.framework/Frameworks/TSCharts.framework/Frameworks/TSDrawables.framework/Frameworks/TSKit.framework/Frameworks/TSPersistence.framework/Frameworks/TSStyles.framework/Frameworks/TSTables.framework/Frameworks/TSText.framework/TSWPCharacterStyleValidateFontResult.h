//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TSUWarning;

@interface TSWPCharacterStyleValidateFontResult : NSObject
{
    int _bold;
    int _italic;
    NSString *_mappedName;
    TSUWarning *_warning;
}

- (void).cxx_destruct;
@property(nonatomic) int italic; // @synthesize italic=_italic;
@property(nonatomic) int bold; // @synthesize bold=_bold;
@property(retain, nonatomic) TSUWarning *warning; // @synthesize warning=_warning;
@property(retain, nonatomic) NSString *mappedName; // @synthesize mappedName=_mappedName;

@end

