/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:23 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUStorePageViewController.h>

@class SUBarButtonItem, NSString, SKProductPageViewController;

@interface SKUIITunesStoreUIPageViewController : SUStorePageViewController {

	SUBarButtonItem* _cancelButtonItem;
	NSString* _cancelButtonTitle;
	SKProductPageViewController* _productPageViewController;
	BOOL _showsCancelButton;

}

@property (assign,nonatomic,__weak) SKProductPageViewController * productPageViewController;              //@synthesize productPageViewController=_productPageViewController - In the implementation block
@property (assign,nonatomic) BOOL showsCancelButton;                                                      //@synthesize showsCancelButton=_showsCancelButton - In the implementation block
@property (nonatomic,copy) NSString * cancelButtonTitle;                                                  //@synthesize cancelButtonTitle=_cancelButtonTitle - In the implementation block
-(void)dealloc;
-(void)viewWillLayoutSubviews;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(BOOL)showsCancelButton;
-(void)setProductPageViewController:(SKProductPageViewController *)arg1 ;
-(void)setCancelButtonTitle:(NSString *)arg1 ;
-(NSString *)cancelButtonTitle;
-(void)resetNavigationItem:(id)arg1 ;
-(void)handleFailureWithError:(id)arg1 ;
-(SKProductPageViewController *)productPageViewController;
-(BOOL)presentDialogForError:(id)arg1 pendUntilVisible:(BOOL)arg2 ;
-(void)_addCancelButtonToNavigationItem:(id)arg1 ;
-(void)_storeSheetCancelButtonAction:(id)arg1 ;
-(id)_cancelButtonItem;
@end

