//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPerspectiveRotate : CIFilter
{
    struct float3x3 K;
    struct float3x3 invK;
    CIImage *inputImage;
    NSNumber *inputFocalLength;
    NSNumber *inputPitch;
    NSNumber *inputYaw;
    NSNumber *inputRoll;
}

+ (id)customAttributes;
@property(copy, nonatomic) NSNumber *inputRoll; // @synthesize inputRoll;
@property(copy, nonatomic) NSNumber *inputYaw; // @synthesize inputYaw;
@property(copy, nonatomic) NSNumber *inputPitch; // @synthesize inputPitch;
@property(copy, nonatomic) NSNumber *inputFocalLength; // @synthesize inputFocalLength;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id).cxx_construct;
- (id)outputImage;
@property(readonly, nonatomic) CDStruct_d80e62f2 outputTransform;
- (void)computeCameraIntrinsics;

@end

