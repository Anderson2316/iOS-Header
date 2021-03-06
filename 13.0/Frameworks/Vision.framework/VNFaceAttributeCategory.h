//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>
#import <Vision/VNRequestRevisionProviding-Protocol.h>

@class NSArray, VNClassificationObservation;

@interface VNFaceAttributeCategory : NSObject <NSSecureCoding, NSCopying, VNRequestRevisionProviding>
{
    VNClassificationObservation *_mostLikelyLabel;
    NSArray *_allLabelsWithConfidences;
    unsigned long long _requestRevision;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long requestRevision; // @synthesize requestRevision=_requestRevision;
@property(copy, nonatomic) NSArray *allLabelsWithConfidences; // @synthesize allLabelsWithConfidences=_allLabelsWithConfidences;
@property(copy, nonatomic) VNClassificationObservation *label; // @synthesize label=_mostLikelyLabel;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1;
- (void)_computeLabel;

@end

