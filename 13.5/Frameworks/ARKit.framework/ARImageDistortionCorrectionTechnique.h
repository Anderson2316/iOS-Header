//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ARKit/ARTechnique.h>

@class MISSING_TYPE;

@interface ARImageDistortionCorrectionTechnique : ARTechnique
{
    vector_7584168e _mappingU;
    vector_7584168e _mappingV;
    struct vImageMapping *_mapping;
    struct __CVPixelBufferPool *_undistortedImageBufferPool;
    struct __CVPixelBufferPool *_rgbImagePool;
    struct __CVPixelBufferPool *_rgbUndistortedImagePool;
    MISSING_TYPE *_radialDistortion;
    struct CGSize _imageSize;
    CDStruct_8e0628e6 _intrinsics;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) MISSING_TYPE *radialDistortion; // @synthesize radialDistortion=_radialDistortion;
@property(readonly, nonatomic) CDStruct_8e0628e6 intrinsics; // @synthesize intrinsics=_intrinsics;
- (void)undistortImage:(struct __CVBuffer *)arg1 toTargetImage:(struct __CVBuffer *)arg2;
- (id)processData:(id)arg1;
- (id)initWithIntrinsics:(CDStruct_8e0628e6)arg1 radialDistortion:(struct CGSize)arg2 imageSize: /* Error: Ran out of types for this method. */;

@end

