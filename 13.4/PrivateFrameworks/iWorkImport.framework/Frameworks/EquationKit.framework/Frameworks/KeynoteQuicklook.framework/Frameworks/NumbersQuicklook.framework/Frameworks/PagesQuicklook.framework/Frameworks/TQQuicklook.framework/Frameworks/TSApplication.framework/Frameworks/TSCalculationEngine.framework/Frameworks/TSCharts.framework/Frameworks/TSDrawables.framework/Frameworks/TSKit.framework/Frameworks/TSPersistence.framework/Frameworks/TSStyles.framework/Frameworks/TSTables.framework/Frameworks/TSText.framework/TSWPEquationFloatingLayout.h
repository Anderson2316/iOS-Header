//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSText/TSWPEquationLayout.h>

@class TSDInfoGeometry, TSDLayoutGeometry;

@interface TSWPEquationFloatingLayout : TSWPEquationLayout
{
    TSDInfoGeometry *_dynamicInfoGeometry;
    TSDLayoutGeometry *_baseEquationLayoutGeometry;
}

- (void).cxx_destruct;
- (id)computeLayoutGeometry;
- (id)layoutGeometryFromInfo;
- (id)currentInfoGeometry;

@end

