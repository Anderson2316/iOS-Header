//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKCircle.h>

@protocol MKAnnotation;

@interface FMAccuracyOverlay : MKCircle
{
    id <MKAnnotation> _parentAnnotation;
    double _horizontalAccuracy;
}

- (void).cxx_destruct;
@property(nonatomic) double horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(nonatomic) __weak id <MKAnnotation> parentAnnotation; // @synthesize parentAnnotation=_parentAnnotation;
- (id)description;

@end

