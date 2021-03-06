//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKVersionedDocument : NSObject
{
    struct Document *_documentArchive;
}

+ (unsigned int)versionedDocumentSerializationVersion;
+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;
@property(nonatomic) struct Document *documentArchive; // @synthesize documentArchive=_documentArchive;
- (void)saveToArchive:(struct Document *)arg1;
- (id)serialize;
- (unsigned int)maxDocumentVersion;
- (unsigned long long)mergeWithVersionedDocument:(id)arg1;
- (void)saveCurrentVersion:(struct Version *)arg1;
- (id)serializeCurrentVersion:(unsigned int *)arg1;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
@property(readonly, nonatomic) unsigned long long futureVersionCount;
- (void)dealloc;
- (_Bool)loadDocumentArchive:(struct Document *)arg1;
- (void)loadArchive:(const struct Document *)arg1;
- (_Bool)loadUnzippedData:(id)arg1;
- (_Bool)loadData:(id)arg1;
- (id)initWithArchive:(const struct Document *)arg1;
- (id)initWithUnzippedData:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)init;

@end

