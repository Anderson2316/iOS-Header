//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, UIView;

__attribute__((visibility("hidden")))
@interface StackViewItem : NSObject
{
    UIView *_view;
    NSNumber *_horizontalSpacing;
}

@property(readonly, nonatomic) NSNumber *horizontalSpacing; // @synthesize horizontalSpacing=_horizontalSpacing;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)initWithView:(id)arg1 horizontalSpacing:(id)arg2;

@end

