//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNTextureOffscreenRenderingSource.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface SCNTextureLayerSource : SCNTextureOffscreenRenderingSource
{
    CALayer *_layer;
    double _lastUpdate;
    double _nextUpdateDate;
}

@property(retain, nonatomic) CALayer *layer; // @synthesize layer=_layer;
- (struct __C3DTexture *)_textureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (struct __C3DTexture *)textureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (double)layerContentsScaleFactor;
- (struct CGSize)layerSizeInPixels;
- (void)cleanup:(struct __C3DRendererContext *)arg1;
- (double)__updateTextureWithLayer:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2 sampler:(struct __C3DTextureSampler *)arg3;
- (double)__renderLayer:(id)arg1 withCARenderer:(id)arg2 engineContext:(struct __C3DEngineContext *)arg3 viewport:(double)arg4 atTime:(_Bool)arg5 forceUpdate:(_Bool *)arg6 didUpdate: /* Error: Ran out of types for this method. */;
- (float)clearValue;
- (id)layerToFocusForRenderedLayer:(id)arg1;
- (void)renderWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (_Bool)prefersGL3;
- (_Bool)supportsMetal;
- (void)dealloc;

@end

