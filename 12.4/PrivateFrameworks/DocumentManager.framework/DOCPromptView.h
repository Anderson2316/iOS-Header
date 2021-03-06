//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <DocumentManager/DOCAppearanceProtocol-Protocol.h>

@class NSString, UILabel;

@interface DOCPromptView : UIView <DOCAppearanceProtocol>
{
    UILabel *_label;
    NSString *_promptText;
}

@property(copy, nonatomic) NSString *promptText; // @synthesize promptText=_promptText;
- (void).cxx_destruct;
- (void)updateAppearance:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

