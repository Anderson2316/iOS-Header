//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCNNode;

@interface AVTStickerCamera : NSObject
{
    SCNNode *_node;
}

+ (id)cameraFromDictionary:(id)arg1 assetsPath:(id)arg2;
+ (id)stickerCameraCache;
- (void).cxx_destruct;
@property(retain, nonatomic) SCNNode *node; // @synthesize node=_node;
- (id)buildNode;
- (id)initWithScene:(id)arg1 cameraName:(id)arg2;

@end

