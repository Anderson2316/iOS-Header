//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ENNoteRef, ENNotebook, NSDate, NSString;

@interface ENSessionFindNotesResult : NSObject
{
    _Bool _hasResources;
    int _updateSequenceNum;
    ENNoteRef *_noteRef;
    ENNotebook *_notebook;
    NSString *_title;
    NSDate *_created;
    NSDate *_updated;
}

- (void).cxx_destruct;
@property(nonatomic) int updateSequenceNum; // @synthesize updateSequenceNum=_updateSequenceNum;
@property(nonatomic) _Bool hasResources; // @synthesize hasResources=_hasResources;
@property(retain, nonatomic) NSDate *updated; // @synthesize updated=_updated;
@property(retain, nonatomic) NSDate *created; // @synthesize created=_created;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) ENNotebook *notebook; // @synthesize notebook=_notebook;
@property(retain, nonatomic) ENNoteRef *noteRef; // @synthesize noteRef=_noteRef;
- (id)description;

@end

