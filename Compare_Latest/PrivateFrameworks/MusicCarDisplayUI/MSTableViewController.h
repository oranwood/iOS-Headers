/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewController.h"

@class MPAVController, MPMediaQuery, MSNowPlayingButton;

@interface MSTableViewController : UITableViewController
{
    id <MSCarDisplayServiceProvider> _serviceProvider;
    MPAVController *_player;
    MPMediaQuery *_query;
    _Bool _viewHasAppeared;
    MSNowPlayingButton *_nowPlayingButton;
    _Bool _alwaysShowNavBar;
}

+ (id)addAlbumArtViewWithImage:(id)arg1 toCell:(id)arg2 rowHeight:(double)arg3;
+ (id)addAlbumArtViewFromItem:(id)arg1 toCell:(id)arg2 rowHeight:(double)arg3;
@property(nonatomic) _Bool alwaysShowNavBar; // @synthesize alwaysShowNavBar=_alwaysShowNavBar;
@property(readonly, nonatomic) MPMediaQuery *query; // @synthesize query=_query;
@property(readonly, nonatomic) MPAVController *player; // @synthesize player=_player;
@property(readonly, nonatomic) id <MSCarDisplayServiceProvider> serviceProvider; // @synthesize serviceProvider=_serviceProvider;
@property(nonatomic) _Bool viewHasAppeared; // @synthesize viewHasAppeared=_viewHasAppeared;
- (void).cxx_destruct;
- (id)viewControllerForRowAtIndexPath:(id)arg1;
- (void)_updateNowPlayingVisibility;
- (void)_restartNowPlayingTimer;
- (void)_presentNowPlayingViewController;
- (void)_cancelNowPlayingTimer;
- (void)_nowPlayingButtonTapped:(id)arg1;
- (void)_itemChanged:(id)arg1;
- (void)_playbackStateChanged:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)hasRowsToDisplay;
- (id)dequeueReusableCarDisplayCellForTableView:(id)arg1 withIdentifier:(id)arg2;
- (void)dealloc;
- (id)initWithQuery:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

