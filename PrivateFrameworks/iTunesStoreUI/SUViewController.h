/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:12 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/SUScriptNativeObject.h>
#import <libobjc.A.dylib/ISOperationDelegate.h>

@class SUViewControllerScriptProperties, NSMutableArray, SUClientInterface, UIBarButtonItem, UIViewController, SUViewControllerContext, SURotationController, NSString, SUNavigationItem, NSArray;

@interface SUViewController : UIViewController <SUScriptNativeObject, ISOperationDelegate> {

	SUViewControllerScriptProperties* _cachedScriptProperties;
	BOOL _canBeWeakScriptReference;
	NSMutableArray* _cancelOnDeallocOperations;
	SUClientInterface* _clientInterface;
	BOOL _excludeFromNavigationHistory;
	UIBarButtonItem* _exitStoreButton;
	UIViewController* _footerViewController;
	UIViewController* _inputAccessoryViewController;
	BOOL _isEnteringForeground;
	BOOL _loading;
	SUViewControllerContext* _memoryPurgeContext;
	NSMutableArray* _operations;
	NSMutableArray* _pendingDialogs;
	SUViewControllerContext* _restoredContext;
	SURotationController* _rotationController;
	long long _rotationState;
	BOOL _shouldInvalidateForMemoryPurge;
	BOOL _showsLibraryButton;
	long long _transitionSafetyCount;
	BOOL _shouldAdjustContentOffsets;

}

@property (nonatomic,retain) SUClientInterface * clientInterface;                                                                      //@synthesize clientInterface=_clientInterface - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;                                                                            //@synthesize loading=_loading - In the implementation block
@property (nonatomic,readonly) UIViewController * footerViewController;                                                                //@synthesize footerViewController=_footerViewController - In the implementation block
@property (nonatomic,retain) UIViewController * inputAccessoryViewController;                                                          //@synthesize inputAccessoryViewController=_inputAccessoryViewController - In the implementation block
@property (assign,nonatomic) BOOL shouldExcludeFromNavigationHistory;                                                                  //@synthesize excludeFromNavigationHistory=_excludeFromNavigationHistory - In the implementation block
@property (assign,nonatomic) BOOL shouldAdjustContentOffsets;                                                                          //@synthesize shouldAdjustContentOffsets=_shouldAdjustContentOffsets - In the implementation block
@property (assign,nonatomic) BOOL showsLibraryButton;                                                                                  //@synthesize showsLibraryButton=_showsLibraryButton - In the implementation block
@property (assign,nonatomic) BOOL shouldInvalidateForMemoryPurge;                                                                      //@synthesize shouldInvalidateForMemoryPurge=_shouldInvalidateForMemoryPurge - In the implementation block
@property (getter=isVisible,nonatomic,readonly) BOOL visible; 
@property (getter=isVisibleAndFrontmost,nonatomic,readonly) BOOL visibleAndFrontmost; 
@property (nonatomic,readonly) double defaultPNGExpirationTime; 
@property (nonatomic,readonly) NSString * defaultPNGName; 
@property (nonatomic,retain,readonly) SUNavigationItem * navigationItem; 
@property (getter=_cachedScriptProperties,nonatomic,readonly) SUViewControllerScriptProperties * _cachedScriptProperties;              //@synthesize cachedScriptProperties=_cachedScriptProperties - In the implementation block
@property (getter=_isEnteringForeground,nonatomic,readonly) BOOL _enteringForeground;                                                  //@synthesize isEnteringForeground=_isEnteringForeground - In the implementation block
@property (getter=_pendingDialogs,nonatomic,readonly) NSArray * _pendingDialogs;                                                       //@synthesize pendingDialogs=_pendingDialogs - In the implementation block
@property (getter=_restoredContext,nonatomic,readonly) SUViewControllerContext * _restoredContext;                                     //@synthesize restoredContext=_restoredContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(void)reload;
-(SUNavigationItem *)navigationItem;
-(long long)interfaceOrientation;
-(void)invalidate;
-(void)applicationWillSuspend;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)didReceiveMemoryWarning;
-(void)applicationDidResume;
-(BOOL)becomeFirstResponder;
-(void)loadView;
-(BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)_canReloadView;
-(id)_existingNavigationItem;
-(void)setParentViewController:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)_setExistingNavigationItem:(id)arg1 ;
-(NSString *)defaultPNGName;
-(id)tabBarItem;
-(id)moreListImage;
-(id)moreListSelectedImage;
-(id)inputAccessoryView;
-(UIViewController *)inputAccessoryViewController;
-(void)remoteControlReceivedWithEvent:(id)arg1 ;
-(BOOL)isVisible;
-(BOOL)isLoading;
-(void)setSection:(id)arg1 ;
-(double)defaultPNGExpirationTime;
-(long long)ITunesStoreUIBarStyle;
-(id)copyArchivableContext;
-(void)restoreArchivableContext:(id)arg1 ;
-(void)reloadContentSizeForViewInPopover;
-(void)_keyboardDidHideNotification:(id)arg1 ;
-(void)_keyboardDidShowNotification:(id)arg1 ;
-(void)_exitStoreButtonDidChangeNotification:(id)arg1 ;
-(id)copyDefaultScriptProperties;
-(void)_dialogFinishedNotification:(id)arg1 ;
-(void)_dismissFooterAnimationDidStop:(id)arg1 ;
-(void)trackOperation:(id)arg1 cancelOnDealloc:(BOOL)arg2 ;
-(void)handleApplicationURL:(id)arg1 withSourceApplication:(id)arg2 sourceURL:(id)arg3 ;
-(id)copyChildViewControllersForReason:(long long)arg1 ;
-(void)resetRestoredContext;
-(BOOL)presentDialog:(id)arg1 pendUntilVisible:(BOOL)arg2 ;
-(void)_presentFooterAnimationDidStop;
-(void)_reloadExitStoreButtonWithParentViewController:(id)arg1 ;
-(BOOL)shouldInvalidateForMemoryPurge;
-(BOOL)shouldExcludeFromNavigationHistory;
-(void)_invalidateForMemoryPurge;
-(void)setShouldExcludeFromNavigationHistory:(BOOL)arg1 ;
-(void)storePageProtocolDidChange;
-(id)_rotationController;
-(id)newRotationController;
-(BOOL)isVisibleAndFrontmost;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForeground;
-(void)invalidateForMemoryPurge;
-(void)_exitStoreButtonAction:(id)arg1 ;
-(BOOL)clearsWeakScriptReferences;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)operationFinished:(id)arg1 ;
-(void)cancelOperations;
-(void)dismissAfterDialogs;
-(void)dismissFooterViewControllerAnimated:(BOOL)arg1 ;
-(void)enqueueOperation:(id)arg1 cancelOnDealloc:(BOOL)arg2 ;
-(void)handleApplicationURL:(id)arg1 ;
-(void)presentFooterViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setInputAccessoryViewController:(UIViewController *)arg1 ;
-(void)setShowsLibraryButton:(BOOL)arg1 ;
-(void)setTitle:(id)arg1 changeTabBarItem:(BOOL)arg2 ;
-(void)_reloadLibraryButton;
-(SUViewControllerScriptProperties *)_cachedScriptProperties;
-(BOOL)_isEnteringForeground;
-(UIViewController *)footerViewController;
-(NSArray *)_pendingDialogs;
-(SUViewControllerContext *)_restoredContext;
-(void)setShouldInvalidateForMemoryPurge:(BOOL)arg1 ;
-(BOOL)showsLibraryButton;
-(BOOL)shouldAdjustContentOffsets;
-(id)initWithSection:(id)arg1 ;
-(id)copyScriptProperties;
-(void)setScriptProperties:(id)arg1 ;
-(void)setClientInterface:(SUClientInterface *)arg1 ;
-(SUClientInterface *)clientInterface;
-(void)setLoading:(BOOL)arg1 ;
-(BOOL)presentDialogForError:(id)arg1 pendUntilVisible:(BOOL)arg2 ;
-(id)viewControllerFactory;
-(void)setShouldAdjustContentOffsets:(BOOL)arg1 ;
-(void)_keyboardWillHideNotification:(id)arg1 ;
-(void)_keyboardWillShowNotification:(id)arg1 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
@end

