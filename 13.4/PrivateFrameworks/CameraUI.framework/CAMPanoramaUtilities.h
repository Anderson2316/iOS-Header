//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMPanoramaUtilities : NSObject
{
}

+ (double)singlePreviewFrameWidthForPreviewHeight:(double)arg1;
+ (struct CGSize)bufferSize;
+ (struct UIEdgeInsets)panoramaViewPreviewStripInsetsForLayoutStyle:(long long)arg1;
+ (struct UIEdgeInsets)panoramaViewLayoutInsetsForLayoutStyle:(long long)arg1;
+ (struct CGSize)panoramaViewSizeForCaptureSize:(struct CGSize)arg1 availableWidth:(double)arg2 layoutStyle:(long long)arg3;
+ (struct CGSize)previewStripSizeForCaptureSize:(struct CGSize)arg1 availableWidth:(double)arg2 layoutStyle:(long long)arg3;
+ (struct CGSize)defaultPreviewSize;

@end

