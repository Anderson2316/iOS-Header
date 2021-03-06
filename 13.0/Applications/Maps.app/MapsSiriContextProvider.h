//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFContextProvider-Protocol.h"

__attribute__((visibility("hidden")))
@interface MapsSiriContextProvider : NSObject <AFContextProvider>
{
}

+ (id)sharedContextProvider;
- (id)_siriMapItemFromConvertibleObject:(id)arg1;
- (id)_siriSearchContextWithResults:(id)arg1 selectedIndex:(unsigned long long)arg2;
- (id)_siriMapViewportWithRegion:(id)arg1;
- (id)_contextFromProvider:(id)arg1;
- (id)getCurrentContext;
- (_Bool)allowContextProvider:(id)arg1;

@end

