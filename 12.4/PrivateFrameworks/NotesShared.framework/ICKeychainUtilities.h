//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICKeychainUtilities : NSObject
{
}

+ (_Bool)removeItemForIdentifier:(id)arg1 error:(id *)arg2;
+ (id)getItemForIdentifier:(id)arg1 alertTextForAuthentication:(id)arg2 error:(id *)arg3;
+ (_Bool)addItem:(id)arg1 forIdentifier:(id)arg2 secAccessControlObject:(id)arg3 error:(id *)arg4;
+ (id)secAccessControlObjectWithCreationFlag:(unsigned long long)arg1 error:(id *)arg2;
+ (_Bool)addItemWithoutGuardian:(id)arg1 forIdentifier:(id)arg2 error:(id *)arg3;
+ (_Bool)addDevicePasscodeGuardedItem:(id)arg1 forIdentifier:(id)arg2 error:(id *)arg3;
+ (_Bool)addTouchIDGuardedItem:(id)arg1 forIdentifier:(id)arg2 error:(id *)arg3;
+ (_Bool)biometricIDIsEnrolled;
+ (_Bool)looselyAuthenticateWithDevicePasscodeWithAlertText:(id)arg1;
+ (void)endEvaluatePolicyReplyBlock;
+ (void)beginEvaluatePolicyReplyBlock;

@end

