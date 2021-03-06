//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEORecentLocations, NSArray, NSLock;

__attribute__((visibility("hidden")))
@interface DeviceRecentLocations : NSObject
{
    NSLock *locationsLock;
    GEORecentLocations *deviceLocations;
    NSArray *_recentLocations;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *recentLocations; // @synthesize recentLocations=_recentLocations;
- (void)updateLocationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end

