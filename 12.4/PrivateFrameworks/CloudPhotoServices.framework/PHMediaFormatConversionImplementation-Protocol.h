//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoServices/NSObject-Protocol.h>

@class PHMediaFormatConversionRequest;

@protocol PHMediaFormatConversionImplementation <NSObject>
@property(readonly) long long transferBehaviorUserPreference;
- (void)performConversionRequest:(PHMediaFormatConversionRequest *)arg1 completionHandler:(void (^)(void))arg2;
@end

