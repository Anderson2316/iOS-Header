//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNLabeledCell.h>

@class NSString, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface CNGeminiPickerCell : CNLabeledCell
{
    UILabel *_labelLabel;
    UILabel *_valueLabel;
    NSString *_badgeText;
    UIView *_badgeView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
@property(readonly, nonatomic) NSString *badgeText; // @synthesize badgeText=_badgeText;
@property(readonly, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(readonly, nonatomic) UILabel *labelLabel; // @synthesize labelLabel=_labelLabel;
- (id)variableConstraints;
- (void)tintColorDidChange;
- (id)valueView;
- (id)labelView;
- (void)setText:(id)arg1 detailText:(id)arg2;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

