/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:28 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/SKUICategoryArtworkLoaderObserver.h>
#import <libobjc.A.dylib/SKUICategoryTableViewControllerDelegate.h>

@protocol SKUICategoryTableViewControllerDelegate;
@class SKUICategoryArtworkLoader, SKUICategory, SKUIClientContext, NSArray, NSURL, NSString;

@interface SKUICategoryTableViewController : UITableViewController <SKUICategoryArtworkLoaderObserver, SKUICategoryTableViewControllerDelegate> {

	SKUICategoryArtworkLoader* _artworkLoader;
	SKUICategory* _category;
	SKUIClientContext* _clientContext;
	id<SKUICategoryTableViewControllerDelegate> _delegate;
	NSArray* _metricsLocations;
	long long _numberOfHiddenRows;
	NSURL* _selectedURL;
	NSURL* _defaultURL;
	BOOL _isRoot;
	BOOL _childrenHaveArtwork;

}

@property (nonatomic,retain) SKUICategoryArtworkLoader * artworkLoader;                                //@synthesize artworkLoader=_artworkLoader - In the implementation block
@property (nonatomic,retain) SKUICategory * category;                                                  //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                        //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUICategoryTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * metricsLocations;                                                 //@synthesize metricsLocations=_metricsLocations - In the implementation block
@property (assign,nonatomic) long long numberOfHiddenRows;                                             //@synthesize numberOfHiddenRows=_numberOfHiddenRows - In the implementation block
@property (nonatomic,retain) NSURL * selectedURL;                                                      //@synthesize selectedURL=_selectedURL - In the implementation block
@property (nonatomic,retain) NSURL * defaultURL;                                                       //@synthesize defaultURL=_defaultURL - In the implementation block
@property (assign,getter=isRoot,nonatomic) BOOL root;                                                  //@synthesize isRoot=_isRoot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<SKUICategoryTableViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<SKUICategoryTableViewControllerDelegate>)delegate;
-(void)setCategory:(SKUICategory *)arg1 ;
-(SKUICategory *)category;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)_doneButtonAction:(id)arg1 ;
-(SKUICategoryArtworkLoader *)artworkLoader;
-(void)setArtworkLoader:(SKUICategoryArtworkLoader *)arg1 ;
-(void)setSelectedURL:(NSURL *)arg1 ;
-(void)setDefaultURL:(NSURL *)arg1 ;
-(id)_categoryAtIndexPath:(id)arg1 ;
-(void)categoryTableView:(id)arg1 didSelectCategory:(id)arg2 ;
-(id)metricsPageContextForCategoryTableView:(id)arg1 ;
-(void)_recordClickEventForIndexPath:(id)arg1 category:(id)arg2 actionType:(id)arg3 ;
-(id)_metricsLocationsToPushIndexPath:(id)arg1 ;
-(void)setMetricsLocations:(NSArray *)arg1 ;
-(long long)_metricsLocationPostionForIndexPath:(id)arg1 ;
-(void)categoryArtworkLoader:(id)arg1 didLoadImage:(id)arg2 forCategory:(id)arg3 ;
-(void)setNumberOfHiddenRows:(long long)arg1 ;
-(NSURL *)defaultURL;
-(NSArray *)metricsLocations;
-(long long)numberOfHiddenRows;
-(BOOL)isRoot;
-(void)setRoot:(BOOL)arg1 ;
-(NSURL *)selectedURL;
@end

