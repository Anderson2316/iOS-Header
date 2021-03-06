//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SRStarkItemController-Protocol.h"

@class NSString, NSUUID, SRStarkUnavailableSnippetView;
@protocol SRStarkItemControllerDelegate;

@interface SRStarkUnavailableViewController : UIViewController <SRStarkItemController>
{
    SRStarkUnavailableSnippetView *_snippetView;
    _Bool _shouldSynthesizeTitles;
    _Bool _dismissAssistantAfterSpeaking;
    id <SRStarkItemControllerDelegate> _delegate;
    NSString *_titleString;
    NSString *_subtitle;
    NSUUID *_conversationItemIdentifier;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool dismissAssistantAfterSpeaking; // @synthesize dismissAssistantAfterSpeaking=_dismissAssistantAfterSpeaking;
@property(nonatomic) _Bool shouldSynthesizeTitles; // @synthesize shouldSynthesizeTitles=_shouldSynthesizeTitles;
@property(copy, nonatomic) NSUUID *conversationItemIdentifier; // @synthesize conversationItemIdentifier=_conversationItemIdentifier;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(nonatomic) __weak id <SRStarkItemControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isActive;
- (long long)preferredUserInterfaceStyle;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool shouldProceedToNextCommandAtSpeechSynthesisEnd;
@property(readonly) Class superclass;

@end

