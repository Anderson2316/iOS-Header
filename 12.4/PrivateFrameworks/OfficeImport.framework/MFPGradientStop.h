//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface MFPGradientStop : NSObject
{
    OITSUColor *mColor;
    float mPosition;
}

- (float)position;
- (id)color;
- (void)dealloc;
- (id)initWithColor:(id)arg1 position:(float)arg2;

@end

