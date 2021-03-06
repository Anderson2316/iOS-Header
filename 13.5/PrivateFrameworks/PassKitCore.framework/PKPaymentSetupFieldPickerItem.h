//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSString;

@interface PKPaymentSetupFieldPickerItem : NSObject <NSCopying>
{
    NSString *_localizedDisplayName;
    NSString *_submissionValue;
}

+ (id)_itemWithDictionary:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *submissionValue; // @synthesize submissionValue=_submissionValue;
@property(readonly, copy, nonatomic) NSString *localizedDisplayName; // @synthesize localizedDisplayName=_localizedDisplayName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 value:(id)arg2;

@end

