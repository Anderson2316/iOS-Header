//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CarWaypointsController.h"

@class AddressBookAddress, NSString;

__attribute__((visibility("hidden")))
@interface CarAddressWaypointsController : CarWaypointsController
{
    AddressBookAddress *_address;
    NSString *_title;
}

- (void).cxx_destruct;
- (id)subtitleForCurrentDestination;
- (id)titleForCurrentDestination;
- (id)destinationWaypoint;
- (id)initWithAddress:(id)arg1;
- (id)initWithAddress:(id)arg1 overridingTitle:(id)arg2;

@end

