//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/WBSRemotePlistSnapshot-Protocol.h>

@class NSDictionary, NSString;

@interface _SFRequestDesktopSiteQuirksSnapshot : NSObject <WBSRemotePlistSnapshot>
{
    NSDictionary *_requestDesktopSiteQuirks;
}

- (void).cxx_destruct;
- (id)plistDataWithFormat:(unsigned long long)arg1;
- (id)allRequestDesktopSiteQuirks;
- (id)requestDesktopSiteSettingForDomain:(id)arg1;
- (id)initWithPlistData:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

