//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

#import <ActionKit/NSFastEnumeration-Protocol.h>

@class ONOXMLDocument;

@interface ONOXPathEnumerator : NSEnumerator <NSFastEnumeration>
{
    struct _xmlXPathObject *_xmlXPath;
    unsigned long long _cursor;
    ONOXMLDocument *_document;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ONOXMLDocument *document; // @synthesize document=_document;
@property(nonatomic) unsigned long long cursor; // @synthesize cursor=_cursor;
@property(nonatomic) struct _xmlXPathObject *xmlXPath; // @synthesize xmlXPath=_xmlXPath;
- (id)nextObject;
- (id)allObjects;
- (id)objectAtIndex:(long long)arg1;
- (void)dealloc;

@end

