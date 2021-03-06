//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUpNextBaseCell.h>

@interface NTKUpNextPhotoCell : NTKUpNextBaseCell
{
    struct CGSize _scaledImageSize;
    struct CGRect _facesRect;
    double _aspectRatio;
    _Bool _wantsFullCellPhoto;
}

- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)prepareForReuse;
- (id)transitionContextInView:(id)arg1;
- (void)layoutSubviews;
- (void)configureWithContent:(id)arg1;

@end

