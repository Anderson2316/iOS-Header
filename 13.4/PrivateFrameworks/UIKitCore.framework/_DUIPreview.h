//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class UIBezierPath, UIColor, UIDragPreviewParameters;

@interface _DUIPreview : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _fadesHorizontally;
    _Bool _fadesVertically;
    _Bool _hidesSourceView;
    _Bool _avoidAnimation;
    _Bool _wantsSuppressedMask;
    UIColor *_backgroundColor;
    UIBezierPath *_outline;
    double _originalRotation;
    long long _previewMode;
    struct CGPoint _contentOffset;
    struct CGSize _contentSize;
    struct CGPoint _originalCenter;
    struct CGPoint _liftAnchorPoint;
    struct CGSize _viewScaleFactor;
}

+ (double)defaultStackAlpha;
+ (id)defaultPreviewWithFrame:(struct CGRect)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize viewScaleFactor; // @synthesize viewScaleFactor=_viewScaleFactor;
@property(nonatomic) _Bool wantsSuppressedMask; // @synthesize wantsSuppressedMask=_wantsSuppressedMask;
@property(nonatomic) _Bool avoidAnimation; // @synthesize avoidAnimation=_avoidAnimation;
@property(nonatomic) struct CGPoint liftAnchorPoint; // @synthesize liftAnchorPoint=_liftAnchorPoint;
@property(nonatomic) long long previewMode; // @synthesize previewMode=_previewMode;
@property(nonatomic) double originalRotation; // @synthesize originalRotation=_originalRotation;
@property(nonatomic) struct CGPoint originalCenter; // @synthesize originalCenter=_originalCenter;
@property(copy, nonatomic) UIBezierPath *outline; // @synthesize outline=_outline;
@property(nonatomic) _Bool hidesSourceView; // @synthesize hidesSourceView=_hidesSourceView;
@property(nonatomic) _Bool fadesVertically; // @synthesize fadesVertically=_fadesVertically;
@property(nonatomic) _Bool fadesHorizontally; // @synthesize fadesHorizontally=_fadesHorizontally;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) struct CGSize croppedScaledSize;
@property(readonly, nonatomic) struct CGPoint croppedScaledAnchorPoint;
@property(readonly, nonatomic) _Bool _springboardPlatterStyle;
@property(nonatomic) _Bool textMode;
- (double)_topOffset;
@property(readonly, nonatomic) struct CGSize unscaledSize;
@property(readonly, nonatomic) struct CGPoint unscaledAnchorPoint;
@property(readonly, nonatomic) double topAlpha;
@property(readonly, nonatomic) double stackAlpha;
@property(readonly, nonatomic) double scaleFactor;
@property(readonly, nonatomic) struct CGSize scaledSize;
@property(readonly, nonatomic, getter=isOversized) _Bool oversized;
@property(readonly, nonatomic) struct CGAffineTransform liftTransform;
@property(readonly, nonatomic) double liftAlpha;
@property(readonly, nonatomic) struct CGSize boundingSize;
@property(readonly, nonatomic) double backAlpha;
@property(readonly, nonatomic) UIDragPreviewParameters *parameters;
- (id)initWithView:(id)arg1 container:(id)arg2 parameters:(id)arg3 center:(struct CGPoint)arg4;
- (id)initWithView:(id)arg1 container:(id)arg2 parameters:(id)arg3;
- (id)initWithBounds:(struct CGRect)arg1 outline:(id)arg2;
- (id)init;

@end

