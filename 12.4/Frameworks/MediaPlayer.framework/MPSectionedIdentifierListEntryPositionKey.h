//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MPSectionedIdentifierListEntryPositionKey : NSObject
{
    NSString *_deviceIdentifier;
    NSString *_generation;
}

+ (id)positionKeyWithDeviceIdentifier:(id)arg1 generation:(id)arg2;
@property(copy, nonatomic) NSString *generation; // @synthesize generation=_generation;
@property(copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;

@end

