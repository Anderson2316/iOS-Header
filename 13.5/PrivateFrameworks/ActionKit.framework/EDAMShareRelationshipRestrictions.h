//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMShareRelationshipRestrictions : FATObject
{
    NSNumber *_noSetReadOnly;
    NSNumber *_noSetReadPlusActivity;
    NSNumber *_noSetModify;
    NSNumber *_noSetFullAccess;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *noSetFullAccess; // @synthesize noSetFullAccess=_noSetFullAccess;
@property(retain, nonatomic) NSNumber *noSetModify; // @synthesize noSetModify=_noSetModify;
@property(retain, nonatomic) NSNumber *noSetReadPlusActivity; // @synthesize noSetReadPlusActivity=_noSetReadPlusActivity;
@property(retain, nonatomic) NSNumber *noSetReadOnly; // @synthesize noSetReadOnly=_noSetReadOnly;

@end

