//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <Preferences/PSController-Protocol.h>
#import <Preferences/PSSpecifierControllerDelegate-Protocol.h>

@class NSString, PSRootController, PSSpecifierController, UIViewController;
@protocol PSController;

@interface PSThirdPartyAppViewController : UITableViewController <PSController, PSSpecifierControllerDelegate>
{
    UIViewController<PSController> *_parent;
    PSRootController *_root;
    PSSpecifierController *_specifierController;
}

@property(retain, nonatomic) PSSpecifierController *specifierController; // @synthesize specifierController=_specifierController;
@property(retain, nonatomic) PSRootController *root; // @synthesize root=_root;
@property(retain, nonatomic) UIViewController<PSController> *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)handleURL:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)readPreferenceValue:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (void)showController:(id)arg1 animate:(_Bool)arg2;
- (void)showController:(id)arg1;
- (id)specifier;
- (void)setSpecifier:(id)arg1;
- (id)rootController;
- (void)setRootController:(id)arg1;
- (id)parentController;
- (void)setParentController:(id)arg1;
- (_Bool)canBeShownFromSuspendedState;
- (void)didReloadSpecifiers;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

