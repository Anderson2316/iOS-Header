//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WFKeyboard : NSObject
{
    _Bool _visible;
    long long _animationCurve;
    double _animationDuration;
    struct CGRect _keyboardFrame;
}

+ (void)beginObservingKeyboardNotifications;
+ (id)sharedKeyboard;
@property(readonly, nonatomic) struct CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;
@property(readonly, nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(readonly, nonatomic) long long animationCurve; // @synthesize animationCurve=_animationCurve;
@property(readonly, nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
- (struct CGRect)keyboardFrameInView:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardWillChangeVisible:(id)arg1;
- (void)dealloc;
- (id)init;

@end

