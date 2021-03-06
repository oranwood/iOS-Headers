/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class UITableView;

@interface SUMenuViewController : SUViewController <UITableViewDataSource, UITableViewDelegate>
{
    id <SUMenuViewControllerDelegate> _delegate;
    long long _selectedIndex;
    UITableView *_tableView;
}

@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) id <SUMenuViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_tableView;
- (_Bool)_sendDidCancel;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)reload;
- (struct CGSize)minimumViewSize;
- (struct CGSize)maximumViewSize;
- (void)loadView;
- (id)titleOfMenuItemAtIndex:(long long)arg1;
- (void)performActionForMenuItemAtIndex:(long long)arg1;
- (long long)numberOfMenuItems;
- (_Bool)isMenuItemEnabledAtIndex:(long long)arg1;
- (void)dealloc;
- (id)init;

@end

