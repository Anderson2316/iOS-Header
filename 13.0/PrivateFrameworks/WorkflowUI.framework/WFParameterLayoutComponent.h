//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ComponentKit/CKComponent.h>

@class CKInsetComponent, NSArray, NSString;

@interface WFParameterLayoutComponent : CKComponent
{
    NSString *_label;
    NSArray *_labelsToAlignTo;
    CKInsetComponent *_labelComponent;
    struct WFParameterLayoutComponentStyle _style;
    struct WFCompressionResistance _controlResistance;
    CKComponent *_controlComponent;
    CKTypedComponentAction_789af415 _selectionAction;
}

+ (id)newWithLabel:(id)arg1 labelsToAlignTo:(id)arg2 selectionAction:(CKTypedComponentAction_789af415)arg3 selectionEnabled:(_Bool)arg4 style:(const struct WFParameterLayoutComponentStyle *)arg5 accessibility:(const struct WFParameterLayoutComponentAccessibility *)arg6 controlResistance:(const struct WFCompressionResistance *)arg7 controlComponent:(id)arg8;
+ (id)newWithView:(const struct CKComponentViewConfiguration *)arg1 size:(const struct CKComponentSize *)arg2;
+ (struct UIEdgeInsets)edgeInsets;
@property(readonly, nonatomic) CKTypedComponentAction_789af415 selectionAction; // @synthesize selectionAction=_selectionAction;
@property(readonly, nonatomic) CKComponent *controlComponent; // @synthesize controlComponent=_controlComponent;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1;
- (void)handleParameterLayoutPressed;

@end

