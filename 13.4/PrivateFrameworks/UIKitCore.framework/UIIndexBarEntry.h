//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString, UIImage;

@interface UIIndexBarEntry : NSObject
{
    NSString *_title;
    NSString *_shortTitle;
    long long _type;
    UIImage *_image;
    NSIndexPath *_indexPath;
}

+ (id)_externalDotImageInView:(id)arg1;
+ (id)_dotImageInView:(id)arg1;
+ (id)entryForDotInView:(id)arg1;
+ (id)entryForSearch;
+ (id)entryForNumbers;
+ (id)entryWithTitle:(id)arg1;
+ (id)entryWithType:(long long)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *shortTitle; // @synthesize shortTitle=_shortTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *effectiveShortTitle;
- (id)description;

@end

