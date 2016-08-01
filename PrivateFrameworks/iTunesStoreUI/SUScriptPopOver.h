/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:13 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class UIViewController, UIPopoverController, SUScriptViewController;

@interface SUScriptPopOver : SUScriptObject {

	UIViewController* _contentViewController;
	BOOL _ignoreDismiss;

}

@property (readonly) UIViewController * activeViewController; 
@property (nonatomic,retain) UIPopoverController * nativePopoverController; 
@property (nonatomic,readonly) UIPopoverController * presentablePopoverController; 
@property (assign) long long backgroundStyle; 
@property (assign) double contentHeight; 
@property (assign) double contentWidth; 
@property (readonly) SUScriptViewController * presentingViewController; 
@property (retain) SUScriptViewController * viewController; 
@property (readonly) long long backgroundStyleBlack; 
@property (readonly) long long backgroundStyleClear; 
@property (readonly) long long backgroundStyleCream; 
@property (readonly) long long backgroundStyleDefault; 
@property (readonly) long long backgroundStyleShare; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(void)dealloc;
-(id)init;
-(long long)backgroundStyle;
-(void)setBackgroundStyle:(long long)arg1 ;
-(SUScriptViewController *)presentingViewController;
-(void)setViewController:(SUScriptViewController *)arg1 ;
-(SUScriptViewController *)viewController;
-(BOOL)isVisible;
-(void)dismissAnimated:(id)arg1 ;
-(double)contentWidth;
-(id)attributeKeys;
-(void)setContentHeight:(double)arg1 ;
-(double)contentHeight;
-(void)tearDownUserInterface;
-(void)_overlayWillShowNotification:(id)arg1 ;
-(void)_viewControllerDidDismiss:(id)arg1 ;
-(id)_presentablePopoverController;
-(void)_dismissAnimated:(BOOL)arg1 ;
-(BOOL)_shouldDisplayAsPopover;
-(id)_popOverController;
-(BOOL)_isViewControllerVisible;
-(void)_showAsModalViewController;
-(id)_nativeViewController;
-(void)_setNativeViewController:(id)arg1 ;
-(UIPopoverController *)nativePopoverController;
-(void)setNativePopoverController:(UIPopoverController *)arg1 ;
-(void)setContentWidth:(double)arg1 height:(double)arg2 animated:(BOOL)arg3 ;
-(BOOL)showFromElement:(id)arg1 ;
-(BOOL)showFromNavigationItem:(id)arg1 ;
-(UIPopoverController *)presentablePopoverController;
-(void)setContentWidth:(double)arg1 ;
-(long long)backgroundStyleBlack;
-(long long)backgroundStyleClear;
-(long long)backgroundStyleCream;
-(long long)backgroundStyleDefault;
-(long long)backgroundStyleShare;
-(void)_setIgnoresDismiss:(BOOL)arg1 ;
-(id)scriptAttributeKeys;
-(id)_className;
-(UIViewController *)activeViewController;
@end

