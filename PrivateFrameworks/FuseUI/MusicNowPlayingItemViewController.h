/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MusicNowPlayingVideoViewControllerDelegate.h>

@protocol MusicNowPlayingItemViewControllerDelegate;
@class ADBannerView, MPArtworkCatalog, UIImage, MusicArtworkView, MusicNowPlayingVideoViewController, MPAVItem, NSString;

@interface MusicNowPlayingItemViewController : UIViewController <MusicNowPlayingVideoViewControllerDelegate> {

	ADBannerView* _adBannerView;
	MPArtworkCatalog* _artworkCatalog;
	CGSize _artworkFittingSize;
	UIImage* _artworkImage;
	MusicArtworkView* _imageView;
	unsigned long long _itemType;
	MusicNowPlayingVideoViewController* _videoViewController;
	BOOL _hasProperApplicationStateForWantingVideoLayer;
	BOOL _hasVisibilityForWantingVideoLayer;
	BOOL _isConnectedToTVOutScreen;
	BOOL _wantsVideoLayer;
	/*^block*/id _deferTransitionBlock;
	MPAVItem* _item;
	id<MusicNowPlayingItemViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) MPAVItem * item;                                                          //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<MusicNowPlayingItemViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL canShowOverlayControls; 
@property (assign,nonatomic) BOOL overlayVideoControlsHidden; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<MusicNowPlayingItemViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<MusicNowPlayingItemViewControllerDelegate>)delegate;
-(MPAVItem *)item;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)_updatePreferredContentSize;
-(id)initWithItem:(id)arg1 ;
-(id)artworkImage;
-(void)_itemArtworkDidChangeNotification:(id)arg1 ;
-(void)_itemTypeAvailableNotification:(id)arg1 ;
-(void)_playerFirstVideoFrameDidDisplayNotification:(id)arg1 ;
-(void)_updateArtworkCatalogWithReload:(BOOL)arg1 ;
-(void)_unregisterForVideoViewControllerNotifications:(id)arg1 ;
-(void)_updateWantsVideoLayer;
-(void)_updateContentViewWithReload:(BOOL)arg1 ;
-(void)_tvOutCapabiltiesDidChangeNotification:(id)arg1 ;
-(id)_placeholderArtwork;
-(void)_setArtworkImage:(id)arg1 ;
-(void)_registerForVideoViewControllerNotifications:(id)arg1 ;
-(void)_removeAdBannerView;
-(void)_removeArtworkImageView;
-(void)_removeVideoViewController;
-(void)_setWantsVideoLayer:(BOOL)arg1 ;
-(void)overlayBackButtonTapped:(id)arg1 ;
-(BOOL)videoController:(id)arg1 shouldDisplayAlertForError:(id)arg2 ;
-(id)viewControllerForStoryboardPresentationFromBannerView:(id)arg1 ;
-(void)deferItemTransitionIfNeeded:(/*^block*/id)arg1 ;
-(long long)transitionFromItemViewController:(id)arg1 ;
-(void)updateArtworkImageForSize:(CGSize)arg1 ;
-(BOOL)canShowOverlayControls;
-(BOOL)overlayVideoControlsHidden;
-(void)setOverlayVideoControlsHidden:(BOOL)arg1 ;
-(void)setCanShowOverlayControls:(BOOL)arg1 ;
@end

