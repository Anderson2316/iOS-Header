//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetricKit/MXMetric.h>

@class MXAverage;

@interface MXDisplayMetric : MXMetric
{
    MXAverage *_averagePixelLuminance;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) MXAverage *averagePixelLuminance; // @synthesize averagePixelLuminance=_averagePixelLuminance;
- (id)toDictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAveragePictureLevel:(id)arg1;

@end

