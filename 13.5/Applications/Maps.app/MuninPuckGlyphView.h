//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface MuninPuckGlyphView : UIView
{
    UIImage *_image;
    _Bool _tilted;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isTilted) _Bool tilted; // @synthesize tilted=_tilted;
- (void)setTilted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)tintColorDidChange;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

