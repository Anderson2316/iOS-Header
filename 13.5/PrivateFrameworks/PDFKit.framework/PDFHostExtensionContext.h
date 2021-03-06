//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <PDFKit/PDFHostProtocol-Protocol.h>

@class NSString, PDFHostViewController;

@interface PDFHostExtensionContext : NSExtensionContext <PDFHostProtocol>
{
    PDFHostViewController *_hostViewController;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void).cxx_destruct;
@property(nonatomic) __weak PDFHostViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
- (oneway void)extensionToHost:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

