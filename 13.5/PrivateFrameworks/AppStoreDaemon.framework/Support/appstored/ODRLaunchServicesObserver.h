//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ODRLaunchServicesObserver : NSObject
{
}

+ (_Bool)_installTypeIsDowngrade:(unsigned long long)arg1;
+ (void)_handleUninstalledApplication:(id)arg1;
+ (void)_handleInstalledApplication:(id)arg1;
+ (void)_handleDemotedApplication:(id)arg1;
+ (void)applicationsDidUninstall:(id)arg1;
+ (void)applicationsDidInstall:(id)arg1 isPlaceholder:(_Bool)arg2;

@end

