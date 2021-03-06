/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:47 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MCD_OLD_TableViewController.h>
#import <libobjc.A.dylib/RURadioDataSourceDelegate.h>

@class RURadioDataSource, NSArray, MusicSimpleRadioStationInfo, NSString, UIView, RadioRecentStationsController, NSIndexPath, UINavigationController, UIActivityIndicatorView, MCD_OLD_TableViewController, NSTimer;

@interface MCDRadioViewController : MCD_OLD_TableViewController <RURadioDataSourceDelegate> {

	RURadioDataSource* _dataSource;
	NSArray* _featuredStations;
	NSArray* _myStations;
	MusicSimpleRadioStationInfo* _prominentRadioStation;
	NSString* _featuredStationNamesBrief;
	UIView* _placeholderView;
	UIView* _MCD_tableView;
	BOOL _loadingRadioStation;
	BOOL _radioStationsLoaded;
	RadioRecentStationsController* _recentStationsController;
	NSIndexPath* _selectedIndexPath;
	UINavigationController* _nowPlayingNavigationController;
	UIActivityIndicatorView* _activityIndicator;
	id _currentlyPlayingRadioStation;
	unsigned long long _featuredStationsIndex;
	unsigned long long _genresStationsIndex;
	MCD_OLD_TableViewController* _viewController;
	NSTimer* _loadingTimer;

}

@property (assign,nonatomic,__weak) RadioRecentStationsController * recentStationsController;              //@synthesize recentStationsController=_recentStationsController - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                                              //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (nonatomic,retain) UINavigationController * nowPlayingNavigationController;                      //@synthesize nowPlayingNavigationController=_nowPlayingNavigationController - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                                  //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic) BOOL loadingRadioStation;                                                     //@synthesize loadingRadioStation=_loadingRadioStation - In the implementation block
@property (nonatomic,retain) id currentlyPlayingRadioStation;                                              //@synthesize currentlyPlayingRadioStation=_currentlyPlayingRadioStation - In the implementation block
@property (assign,nonatomic) unsigned long long featuredStationsIndex;                                     //@synthesize featuredStationsIndex=_featuredStationsIndex - In the implementation block
@property (assign,nonatomic) unsigned long long genresStationsIndex;                                       //@synthesize genresStationsIndex=_genresStationsIndex - In the implementation block
@property (nonatomic,retain) MCD_OLD_TableViewController * viewController;                                 //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) BOOL radioStationsLoaded;                                                     //@synthesize radioStationsLoaded=_radioStationsLoaded - In the implementation block
@property (nonatomic,retain) NSTimer * loadingTimer;                                                       //@synthesize loadingTimer=_loadingTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setViewController:(MCD_OLD_TableViewController *)arg1 ;
-(MCD_OLD_TableViewController *)viewController;
-(void)viewDidLoad;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
-(RadioRecentStationsController *)recentStationsController;
-(void)setRecentStationsController:(RadioRecentStationsController *)arg1 ;
-(void)_networkTypeDidChangeNotification:(id)arg1 ;
-(id)viewControllerForRowAtIndexPath:(id)arg1 ;
-(void)_limitedUIDidChange;
-(void)setNowPlayingNavigationController:(UINavigationController *)arg1 ;
-(void)didStartPlaying:(id)arg1 ;
-(UINavigationController *)nowPlayingNavigationController;
-(void)radioDataSourceDidInvalidate:(id)arg1 ;
-(void)_reloadRadioStations;
-(void)_updateViewForNetworkType:(long long)arg1 ;
-(void)_categorizeStations;
-(void)_showLoadingScreen;
-(BOOL)loadingRadioStation;
-(void)_setCurrentTableView;
-(void)setFeaturedStationsIndex:(unsigned long long)arg1 ;
-(unsigned long long)featuredStationsIndex;
-(void)setGenresStationsIndex:(unsigned long long)arg1 ;
-(unsigned long long)genresStationsIndex;
-(id)_stationFromIndexPath:(id)arg1 ;
-(id)currentlyPlayingRadioStation;
-(void)_startPlayingStation:(id)arg1 ;
-(void)_presentStationUnavailableAlertForError:(id)arg1 stationName:(id)arg2 ;
-(void)setCurrentlyPlayingRadioStation:(id)arg1 ;
-(void)setLoadingRadioStation:(BOOL)arg1 ;
-(BOOL)_isNetworkTypeAllowed:(long long)arg1 ;
-(id)_filteredRadioStations:(id)arg1 ;
-(id)initWithPlayer:(id)arg1 serviceProvider:(id)arg2 ;
-(BOOL)radioStationsLoaded;
-(void)setRadioStationsLoaded:(BOOL)arg1 ;
-(NSTimer *)loadingTimer;
-(void)setLoadingTimer:(NSTimer *)arg1 ;
@end

