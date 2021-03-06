/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:12 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/PLCloudCommentsChangeObserver.h>
#import <libobjc.A.dylib/PLPhotoCommentEntryViewDelegate.h>
#import <libobjc.A.dylib/PLDismissableViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol PLCommentsViewControllerDelegate;
@class UITableView, UIView, PLManagedAsset, CAGradientLayer, PLPhotoCommentEntryView, PLCloudSharedComment, NSCache, UIImageView, _UIBackdropView, UIBarButtonItem, NSString;

@interface PLCommentsViewController : UIViewController <PLCloudCommentsChangeObserver, PLPhotoCommentEntryViewDelegate, PLDismissableViewController, UITableViewDelegate, UITableViewDataSource> {

	UITableView* _tableView;
	UIView* _tableContainerView;
	PLManagedAsset* _asset;
	CAGradientLayer* _maskLayer;
	PLPhotoCommentEntryView* _entryView;
	PLCloudSharedComment* _justInsertedComment;
	BOOL _justTappedSmileButton;
	BOOL _editMode;
	BOOL _temporaryKeyboardHideReshow;
	BOOL _shouldAdjustInitialScrollPosition;
	double _keyboardOverlap;
	id<PLCommentsViewControllerDelegate> _commentsControllerDelegate;
	UIView* _containerView;
	NSCache* _commentsHeightCache;
	UIImageView* _gradientView;
	_UIBackdropView* _backdropView;
	UIBarButtonItem* _cancelButton;
	BOOL _isCompact;
	BOOL _shouldUseCompactCommentSeparators;
	CGRect _availableBounds;

}

@property (nonatomic,readonly) UITableView * commentsTableView; 
@property (nonatomic,retain) PLManagedAsset * asset;                                                       //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) BOOL isCompact;                                                               //@synthesize isCompact=_isCompact - In the implementation block
@property (assign,nonatomic) CGRect availableBounds;                                                       //@synthesize availableBounds=_availableBounds - In the implementation block
@property (assign,nonatomic) BOOL editMode;                                                                //@synthesize editMode=_editMode - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * cancelButton; 
@property (nonatomic,retain) NSString * draftComment; 
@property (assign,nonatomic) BOOL shouldUseCompactCommentSeparators;                                       //@synthesize shouldUseCompactCommentSeparators=_shouldUseCompactCommentSeparators - In the implementation block
@property (assign,nonatomic) id<PLCommentsViewControllerDelegate> commentsControllerDelegate;              //@synthesize commentsControllerDelegate=_commentsControllerDelegate - In the implementation block
@property (nonatomic,retain) PLCloudSharedComment * justInsertedComment;                                   //@synthesize justInsertedComment=_justInsertedComment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(UIBarButtonItem *)cancelButton;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(PLManagedAsset *)asset;
-(void)setAsset:(PLManagedAsset *)arg1 ;
-(void)scrollToComment:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)editMode;
-(void)cancelCurrentAction:(id)arg1 ;
-(void)setRasterization:(BOOL)arg1 ;
-(void)cancelDeleteMode:(id)arg1 ;
-(void)setIsCompact:(BOOL)arg1 ;
-(void)setAvailableBounds:(CGRect)arg1 ;
-(void)setCommentsControllerDelegate:(id<PLCommentsViewControllerDelegate>)arg1 ;
-(void)updateViewLayoutWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)draftComment;
-(void)setEditMode:(BOOL)arg1 shouldBecomeFirstResponder:(BOOL)arg2 ;
-(void)setDraftComment:(NSString *)arg1 ;
-(void)setEditMode:(BOOL)arg1 ;
-(void)updateForSizeChange;
-(void)_fontSizesDidChange:(id)arg1 ;
-(double)commentCellHeightForWidth:(double)arg1 ;
-(BOOL)showAssetOwnerSection;
-(double)_tableViewHeightForWidth:(double)arg1 interfaceOrientation:(long long)arg2 ;
-(BOOL)_adjustTextEntrySize;
-(void)_updateLayerMaskWithBoundsChange;
-(void)_adjustInitialScrollPosition:(BOOL)arg1 ;
-(CGSize)_preferredViewSizeInContainerSize:(CGSize)arg1 forInterfaceOrientation:(long long)arg2 tableViewSize:(CGSize*)arg3 ;
-(BOOL)shouldUseTextEntryCell;
-(long long)postCommentSection;
-(void)_postCommentValidated:(id)arg1 ;
-(id)currentEntryView;
-(id)_firstUnreadCloudComment;
-(BOOL)shouldShowCommentPostingUI;
-(long long)smileCommentSection;
-(long long)assetOwnerCommentSection;
-(long long)textCommentSection;
-(void)_smileButtonTapped:(id)arg1 ;
-(void)_addCommentButtonTapped:(id)arg1 ;
-(BOOL)_checkAndAlertMaxCommentsReachedWhenFinalizing:(BOOL)arg1 ;
-(BOOL)checkAndAlertMaxLikesReached;
-(UITableView *)commentsTableView;
-(id<PLCommentsViewControllerDelegate>)commentsControllerDelegate;
-(BOOL)isCompact;
-(CGRect)availableBounds;
-(BOOL)prepareForDismissingForced:(BOOL)arg1 ;
-(void)setJustInsertedComment:(PLCloudSharedComment *)arg1 ;
-(BOOL)shouldUseCompactCommentSeparators;
-(double)_heightForComment:(id)arg1 forWidth:(double)arg2 forInterfaceOrientation:(long long)arg3 ;
-(PLCloudSharedComment *)justInsertedComment;
-(void)cloudCommentsDidChange:(id)arg1 ;
-(void)photoCommentEntryViewHeightDidChange:(id)arg1 ;
-(void)photoCommentEntryViewWillBeginEditing:(id)arg1 ;
-(void)photoCommentEntryViewDidEndEditing:(id)arg1 ;
-(void)setShouldUseCompactCommentSeparators:(BOOL)arg1 ;
-(void)_startWatchingKeyboard;
-(void)_stopWatchingKeyboard;
@end

