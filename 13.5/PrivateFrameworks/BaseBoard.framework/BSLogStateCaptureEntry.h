//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface BSLogStateCaptureEntry : NSObject
{
    NSString *_title;
    CDUnknownBlockType _captureBlock;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) CDUnknownBlockType captureBlock; // @synthesize captureBlock=_captureBlock;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

