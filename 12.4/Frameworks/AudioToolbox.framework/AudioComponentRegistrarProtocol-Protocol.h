//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol AudioComponentRegistrarProtocol
- (void)getComponentList:(NSString *)arg1 linkedSDKVersion:(int)arg2 includeExtensions:(_Bool)arg3 reply:(void (^)(NSData *, NSData *, NSArray *, _Bool))arg4;
@end

