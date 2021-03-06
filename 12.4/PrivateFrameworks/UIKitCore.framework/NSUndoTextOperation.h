//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UITextInputController;

__attribute__((visibility("hidden")))
@interface NSUndoTextOperation : NSObject
{
    UITextInputController *_inputController;
    struct _NSRange _affectedRange;
}

@property(nonatomic) __weak UITextInputController *inputController; // @synthesize inputController=_inputController;
@property(nonatomic) struct _NSRange affectedRange; // @synthesize affectedRange=_affectedRange;
- (void).cxx_destruct;
- (_Bool)supportsCoalescing;
- (void)undoRedo;
- (id)initWithAffectedRange:(struct _NSRange)arg1 inputController:(id)arg2;

@end

