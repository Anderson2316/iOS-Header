//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SecXPCHelper : NSObject
{
}

+ (id)encodedDataFromError:(id)arg1;
+ (id)errorFromEncodedData:(id)arg1;
+ (id)cleanseErrorForXPC:(id)arg1;
+ (id)cleanObjectForXPC:(id)arg1;
+ (id)cleanDictionaryForXPC:(id)arg1;
+ (id)safeErrorClasses;
+ (id)safeErrorCollectionClasses;
+ (id)safeErrorPrimitiveClasses;

@end

