/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:47 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MCD_OLD_TableViewController.h>
#import <UIKit/UITableViewDelegate.h>

@class NSIndexPath, NSArray, UINavigationController, UIActivityIndicatorView, MCDNewPlaylistsTableViewController, NSString;

@interface MCDContentItemTableViewController : MCD_OLD_TableViewController <UITableViewDelegate> {

	BOOL _rankedList;
	BOOL _shouldQueueDataSource;
	NSIndexPath* _selectedIndexPath;
	NSArray* _dataSource;
	UINavigationController* _nowPlayingNavigationController;
	UIActivityIndicatorView* _activityIndicator;
	MCDNewPlaylistsTableViewController* _viewController;
	NSArray* _queuedDataSource;

}

@property (assign,nonatomic) BOOL rankedList;                                                      //@synthesize rankedList=_rankedList - In the implementation block
@property (assign,nonatomic) BOOL shouldQueueDataSource;                                           //@synthesize shouldQueueDataSource=_shouldQueueDataSource - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                                      //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (nonatomic,retain) NSArray * dataSource;                                                 //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) UINavigationController * nowPlayingNavigationController;              //@synthesize nowPlayingNavigationController=_nowPlayingNavigationController - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                          //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) MCDNewPlaylistsTableViewController * viewController;                  //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) NSArray * queuedDataSource;                                           //@synthesize queuedDataSource=_queuedDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDataSource:(NSArray *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(NSArray *)dataSource;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setViewController:(MCDNewPlaylistsTableViewController *)arg1 ;
-(MCDNewPlaylistsTableViewController *)viewController;
-(void)viewDidLoad;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
-(void)_limitedUIDidChange;
-(void)setNowPlayingNavigationController:(UINavigationController *)arg1 ;
-(void)didStartPlaying:(id)arg1 ;
-(UINavigationController *)nowPlayingNavigationController;
-(void)_setupDataSourceQueue;
-(BOOL)rankedList;
-(BOOL)shouldQueueDataSource;
-(id)_setupMetadataContextForContentItem:(id)arg1 ;
-(void)setQueuedDataSource:(NSArray *)arg1 ;
-(void)_removeTrackNumberAndArtworkFromCell:(id)arg1 ;
-(void)_addTrackNumberAndArtworkToCell:(id)arg1 artworkCatalog:(id)arg2 trackNumber:(unsigned long long)arg3 ;
-(void)_animateActivityIndicatorForCell:(id)arg1 shouldBegin:(BOOL)arg2 ;
-(id)_setupPlaybackContextForQueuedSongsLength:(long long)arg1 ;
-(void)_initiatePlaybackWithError:(id)arg1 forCell:(id)arg2 ;
-(id)_setupPlaybackContextForContentItem:(id)arg1 ;
-(id)initWithPlayer:(id)arg1 serviceProvider:(id)arg2 dataSource:(id)arg3 ;
-(NSArray *)queuedDataSource;
-(id)_normalizedStringStoreIDForContentItem:(id)arg1 ;
-(void)setRankedList:(BOOL)arg1 ;
-(void)setShouldQueueDataSource:(BOOL)arg1 ;
@end

