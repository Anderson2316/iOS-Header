//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@class NSUUID;

@interface NSURL (NumbersDocumentAdditions)
+ (id)sheetHyperlinkURLScheme;
- (id)initWithDefaultSheetURLForDocumentRoot:(id)arg1;
- (id)initWithSheet:(id)arg1;
@property(readonly, nonatomic) NSUUID *sheetUUID;
@property(readonly, nonatomic) _Bool isSheetURL;
@end

