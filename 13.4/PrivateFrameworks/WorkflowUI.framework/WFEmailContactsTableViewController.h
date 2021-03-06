//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSMutableSet, NSSet;
@protocol WFEmailContactsTableViewControllerDelegate;

@interface WFEmailContactsTableViewController : UITableViewController
{
    id <WFEmailContactsTableViewControllerDelegate> _delegate;
    NSSet *_allContacts;
    NSMutableSet *_selectedContacts;
    unsigned long long _type;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSMutableSet *selectedContacts; // @synthesize selectedContacts=_selectedContacts;
@property(retain, nonatomic) NSSet *allContacts; // @synthesize allContacts=_allContacts;
@property(nonatomic) __weak id <WFEmailContactsTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (id)initWithType:(unsigned long long)arg1 contacts:(id)arg2;

@end

