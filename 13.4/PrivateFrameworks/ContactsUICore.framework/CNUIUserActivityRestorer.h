//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore;
@protocol CNUIUserActivityRestorerDelegate;

@interface CNUIUserActivityRestorer : NSObject
{
    id <CNUIUserActivityRestorerDelegate> _delegate;
    CNContactStore *_contactStore;
}

+ (id)log;
- (void).cxx_destruct;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(nonatomic) __weak id <CNUIUserActivityRestorerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)restoreUserActivity:(id)arg1;
- (_Bool)shouldEnableActivityIndicatorWhenRestoringUserActivityWithType:(id)arg1;
- (id)initWithContactStore:(id)arg1;

@end

