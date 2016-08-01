/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:47 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MCD_OLD_TableViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/MCDTimeoutViewDelegate.h>

@class UIView, UIActivityIndicatorView, MusicStoreBrowseResponse, NSIndexPath, MCDContentItemTableViewController, NSTimer, NSString;

@interface MCDNewViewController : MCD_OLD_TableViewController <UITableViewDelegate, MCDTimeoutViewDelegate> {

	BOOL _contentLoaded;
	UIView* _MCD_tableView;
	UIView* _placeholderView;
	long long _modelRevisionID;
	UIActivityIndicatorView* _activityIndicator;
	MusicStoreBrowseResponse* _contentResponse;
	NSIndexPath* _selectedIndexPath;
	MCDContentItemTableViewController* _viewController;
	NSTimer* _loadingTimer;

}

@property (nonatomic,retain) UIView * MCD_tableView;                                          //@synthesize MCD_tableView=_MCD_tableView - In the implementation block
@property (nonatomic,retain) UIView * placeholderView;                                        //@synthesize placeholderView=_placeholderView - In the implementation block
@property (assign,nonatomic) long long modelRevisionID;                                       //@synthesize modelRevisionID=_modelRevisionID - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                     //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) MusicStoreBrowseResponse * contentResponse;                      //@synthesize contentResponse=_contentResponse - In the implementation block
@property (assign,nonatomic) BOOL contentLoaded;                                              //@synthesize contentLoaded=_contentLoaded - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                                 //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (nonatomic,retain) MCDContentItemTableViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) NSTimer * loadingTimer;                                          //@synthesize loadingTimer=_loadingTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setViewController:(MCDContentItemTableViewController *)arg1 ;
-(MCDContentItemTableViewController *)viewController;
-(void)viewDidLoad;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
-(void)setPlaceholderView:(UIView *)arg1 ;
-(UIView *)placeholderView;
-(void)_networkTypeDidChangeNotification:(id)arg1 ;
-(void)_limitedUIDidChange;
-(void)_updateViewForNetworkType:(long long)arg1 ;
-(void)_showLoadingScreen;
-(void)_setCurrentTableView;
-(BOOL)_isNetworkTypeAllowed:(long long)arg1 ;
-(id)initWithPlayer:(id)arg1 serviceProvider:(id)arg2 ;
-(NSTimer *)loadingTimer;
-(void)setLoadingTimer:(NSTimer *)arg1 ;
-(void)timeoutViewDidPressRetryButton:(id)arg1 ;
-(UIView *)MCD_tableView;
-(void)setMCD_tableView:(UIView *)arg1 ;
-(long long)modelRevisionID;
-(void)setModelRevisionID:(long long)arg1 ;
-(void)_loadContent;
-(MusicStoreBrowseResponse *)contentResponse;
-(void)setContentResponse:(MusicStoreBrowseResponse *)arg1 ;
-(BOOL)contentLoaded;
-(void)setContentLoaded:(BOOL)arg1 ;
@end

