//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface BRUITestDiagnostic : NSObject
{
    NSString *_outputDirectoryPath;
    NSMutableDictionary *_diagnosticDataBySectionName;
}

- (void).cxx_destruct;
- (_Bool)writeToDiskWithError:(id *)arg1;
- (void)addDiagnosticData:(id)arg1 forFilename:(id)arg2 sectionName:(id)arg3;
- (void)addDiagnosticData:(id)arg1 forFilename:(id)arg2;
- (id)initWithOutputDirectoryPath:(id)arg1;

@end

