//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/NSCopying-Protocol.h>

@class NSString;

@interface PMLLabelLimitRowId : NSObject <NSCopying>
{
    NSString *_label;
    long long _limit;
    long long _rowId;
}

+ (id)labelLimitRowIdWithLabel:(id)arg1 limit:(long long)arg2 rowId:(long long)arg3;
@property(readonly, nonatomic) long long rowId; // @synthesize rowId=_rowId;
@property(readonly, nonatomic) long long limit; // @synthesize limit=_limit;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToLabelLimitRowId:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLabel:(id)arg1 limit:(long long)arg2 rowId:(long long)arg3;

@end

