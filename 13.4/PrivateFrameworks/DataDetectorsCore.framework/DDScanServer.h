//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DataDetectorsCore/DDScannerService.h>

@interface DDScanServer : DDScannerService
{
    long long _options;
    double _timeout;
}

@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) long long options; // @synthesize options=_options;
- (void)scanString:(id)arg1 resultsBlock:(CDUnknownBlockType)arg2;
- (id)scanString:(id)arg1;
- (id)init;

@end

