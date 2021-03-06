//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/BOXRequest.h>

@class NSArray, NSString;

@interface BOXMetadataDeleteRequest : BOXRequest
{
    NSArray *_notMatchingEtags;
    NSString *_scope;
    NSString *_templateName;
    NSString *_fileID;
}

@property(retain, nonatomic) NSString *fileID; // @synthesize fileID=_fileID;
@property(retain, nonatomic) NSString *templateName; // @synthesize templateName=_templateName;
@property(retain, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(retain, nonatomic) NSArray *notMatchingEtags; // @synthesize notMatchingEtags=_notMatchingEtags;
- (void).cxx_destruct;
- (void)performRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)createOperation;
- (id)initWithFileID:(id)arg1 scope:(id)arg2 template:(id)arg3;
- (id)initWithFileID:(id)arg1 template:(id)arg2;

@end

