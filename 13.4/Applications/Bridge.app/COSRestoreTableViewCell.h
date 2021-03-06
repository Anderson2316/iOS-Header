//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class COSWatchView, NSDateFormatter, UIImageView, UILabel;

@interface COSRestoreTableViewCell : UITableViewCell
{
    _Bool _isCloudBackup;
    COSWatchView *_watchView;
    UILabel *_deviceTitleLabel;
    UILabel *_pairedStatusLabel;
    UILabel *_deviceMaterialLabel;
    UILabel *_deviceLastBackupDetailLabel;
    UILabel *_deviceCaseSizeLabel;
    UIImageView *_cloudImage;
    NSDateFormatter *_dateFormatter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(readonly, nonatomic) UIImageView *cloudImage; // @synthesize cloudImage=_cloudImage;
@property(nonatomic) _Bool isCloudBackup; // @synthesize isCloudBackup=_isCloudBackup;
@property(readonly, nonatomic) UILabel *deviceCaseSizeLabel; // @synthesize deviceCaseSizeLabel=_deviceCaseSizeLabel;
@property(readonly, nonatomic) UILabel *deviceLastBackupDetailLabel; // @synthesize deviceLastBackupDetailLabel=_deviceLastBackupDetailLabel;
@property(readonly, nonatomic) UILabel *deviceMaterialLabel; // @synthesize deviceMaterialLabel=_deviceMaterialLabel;
@property(readonly, nonatomic) UILabel *pairedStatusLabel; // @synthesize pairedStatusLabel=_pairedStatusLabel;
@property(readonly, nonatomic) UILabel *deviceTitleLabel; // @synthesize deviceTitleLabel=_deviceTitleLabel;
@property(readonly, nonatomic) COSWatchView *watchView; // @synthesize watchView=_watchView;
- (void)layoutSubviews;
- (void)setRestoreDetailsFromDevice:(id)arg1;
- (void)setRestoreDetailsFromBackup:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

