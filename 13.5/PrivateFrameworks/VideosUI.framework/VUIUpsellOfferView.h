//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IKImageElement, IKViewElement, VUILabel, VUIUpsellOfferViewLayout, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIUpsellOfferView : UIView
{
    IKViewElement *_viewElement;
    VUIUpsellOfferViewLayout *_layout;
    VUILabel *_titleLabel;
    VUILabel *_descriptionLabel;
    _TVImageView *_imageView;
    IKImageElement *_imageElement;
}

+ (id)upsellViewFromElement:(id)arg1 existingView:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) IKImageElement *imageElement; // @synthesize imageElement=_imageElement;
@property(retain, nonatomic) _TVImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) VUILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) VUIUpsellOfferViewLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
- (struct CGSize)_iOS_layoutWithSize:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

