//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocs/BRFileObjectID.h>

@interface BRInodeObjectID : BRFileObjectID
{
    unsigned long long _ino;
}

+ (_Bool)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isFolderOrAliasID;
- (id)folderID;
- (unsigned long long)rawID;
- (id)asString;
- (id)description;
- (id)initWithFileID:(unsigned long long)arg1;

@end

