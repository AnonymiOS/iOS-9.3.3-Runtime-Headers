/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:27 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SKUIOverlayContainerDelegate;
@class UIControl, UITapGestureRecognizer, NSMutableArray, NSArray, UIColor, NSString;

@interface SKUIOverlayContainerViewController : UIViewController <UIGestureRecognizerDelegate> {

	UIControl* _backstopView;
	BOOL _isAdjustingViewsForDismiss;
	long long _popViewControllerCount;
	long long _selectedViewControllerIndex;
	UITapGestureRecognizer* _tapGestureRecognizer;
	NSMutableArray* _viewControllers;
	id<SKUIOverlayContainerDelegate> _delegate;

}

@property (nonatomic,readonly) UIControl * backstopControl; 
@property (nonatomic,copy,readonly) NSArray * viewControllers; 
@property (assign,nonatomic,__weak) id<SKUIOverlayContainerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIColor * dimmingViewColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<SKUIOverlayContainerDelegate>)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<SKUIOverlayContainerDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)popViewControllerAnimated:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(NSArray *)viewControllers;
-(void)_tapAction:(id)arg1 ;
-(void)showViewControllers:(id)arg1 ;
-(void)showViewController:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)dismissWithFadeTransitionCompletionBlock:(/*^block*/id)arg1 ;
-(void)dismissWithFlipTransition:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(UIControl *)backstopControl;
-(void)showViewController:(id)arg1 withFlipTransition:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_frameAction:(id)arg1 ;
-(void)_removeChildren;
-(void)popViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_positionViewControllersForSize:(CGSize)arg1 traitCollection:(id)arg2 ;
-(void)_popViewControllers;
-(void)_fadeInViewController:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_slideInViewController:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(UIColor *)dimmingViewColor;
-(void)_pushViewController:(id)arg1 ;
-(CGRect)_centeredFrameForViewController:(id)arg1 inBounds:(CGRect)arg2 ;
-(id)_selectedViewController;
-(id)_viewControllerForPoint:(CGPoint)arg1 ;
-(long long)_indexOfViewControllerForPoint:(CGPoint)arg1 ;
-(CGSize)_overlaySizeForController:(id)arg1 atBoundsSize:(CGSize)arg2 ;
-(double)_overlaySpacingForSize:(CGSize)arg1 ;
-(void)replaceViewController:(id)arg1 withViewController:(id)arg2 ;
@end

