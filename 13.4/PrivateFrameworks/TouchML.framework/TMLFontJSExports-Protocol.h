//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TouchML/JSExport-Protocol.h>

@class NSDictionary, NSString, TMLFont;

@protocol TMLFontJSExports <JSExport>
@property(readonly, nonatomic) double leading;
@property(readonly, nonatomic) double lineHeight;
@property(readonly, nonatomic) double xHeight;
@property(readonly, nonatomic) double capHeight;
@property(readonly, nonatomic) double descender;
@property(readonly, nonatomic) double ascender;
@property(readonly, nonatomic) double pointSize;
@property(readonly, nonatomic) NSString *fontName;
@property(readonly, nonatomic) NSString *familyName;
@property(readonly, nonatomic) struct CGFont *CGFontRef;
- (TMLFont *)withScaleTransform:(double)arg1;
- (TMLFont *)withScale:(double)arg1;
- (TMLFont *)withAXRestrictedStyle:(NSString *)arg1;
- (TMLFont *)withStyle:(NSString *)arg1;
- (TMLFont *)withAttributes:(NSDictionary *)arg1;
- (TMLFont *)withSymbolicTraits:(unsigned int)arg1;
- (TMLFont *)withWidth:(double)arg1;
- (TMLFont *)withWeight:(double)arg1;
- (TMLFont *)withFamily:(NSString *)arg1;
- (TMLFont *)withSize:(double)arg1;
- (TMLFont *)italic;
- (TMLFont *)bold;
@end

