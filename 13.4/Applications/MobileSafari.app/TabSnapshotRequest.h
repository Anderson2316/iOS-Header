//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TabSnapshotRequest : NSObject
{
    double _topBackdropHeight;
    unsigned long long _options;
    struct CGSize _size;
}

@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) double topBackdropHeight; // @synthesize topBackdropHeight=_topBackdropHeight;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (id)initWithSize:(struct CGSize)arg1 topBackdropHeight:(double)arg2 options:(unsigned long long)arg3;

@end

