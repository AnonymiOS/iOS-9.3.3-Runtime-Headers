/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:34 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIPageViewControllerDataSource.h>
#import <UIKit/UIPageViewControllerDelegate.h>
#import <libobjc.A.dylib/MPUExtrasZoomingImageInteractiveTransitionSource.h>
#import <libobjc.A.dylib/MPUExtrasZoomingImageTransitionParticipant.h>

@protocol MPUExtrasImageBrowserViewControllerDataSource, MPUExtrasImageBrowserViewControllerDelegate, MPUExtrasZoomingImageInteractiveTransitionSource;
@class UIPageViewController, NSString;

@interface MPUExtrasImageBrowserViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, MPUExtrasZoomingImageInteractiveTransitionSource, MPUExtrasZoomingImageTransitionParticipant> {

	BOOL _allowsPinchingImageForInteractiveZoomingImageTransition;
	id<MPUExtrasImageBrowserViewControllerDataSource> _dataSource;
	id<MPUExtrasImageBrowserViewControllerDelegate> _delegate;
	id<MPUExtrasZoomingImageInteractiveTransitionSource> _zoomingImageInteractiveTransitionSource;
	unsigned long long _visibleImageIndex;
	UIPageViewController* _pageViewController;

}

@property (assign,nonatomic,__weak) id<MPUExtrasImageBrowserViewControllerDataSource> dataSource;                                              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<MPUExtrasImageBrowserViewControllerDelegate> delegate;                                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MPUExtrasZoomingImageInteractiveTransitionSource> zoomingImageInteractiveTransitionSource;              //@synthesize zoomingImageInteractiveTransitionSource=_zoomingImageInteractiveTransitionSource - In the implementation block
@property (assign,nonatomic) BOOL allowsPinchingImageForInteractiveZoomingImageTransition;                                                     //@synthesize allowsPinchingImageForInteractiveZoomingImageTransition=_allowsPinchingImageForInteractiveZoomingImageTransition - In the implementation block
@property (assign,nonatomic) unsigned long long visibleImageIndex;                                                                             //@synthesize visibleImageIndex=_visibleImageIndex - In the implementation block
@property (nonatomic,retain) UIPageViewController * pageViewController;                                                                        //@synthesize pageViewController=_pageViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDataSource:(id<MPUExtrasImageBrowserViewControllerDataSource>)arg1 ;
-(void)setDelegate:(id<MPUExtrasImageBrowserViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MPUExtrasImageBrowserViewControllerDataSource>)dataSource;
-(id<MPUExtrasImageBrowserViewControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2 ;
-(void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(void)prepareZoomingImageTransitionWithContext:(id)arg1 ;
-(void)performZoomingImageTransitionWithContext:(id)arg1 ;
-(void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(BOOL)arg2 ;
-(void)handlePinchGestureForZoomingImageInteractiveTransitionWithContext:(id)arg1 ;
-(void)setVisibleImageIndex:(unsigned long long)arg1 ;
-(void)setZoomingImageInteractiveTransitionSource:(id<MPUExtrasZoomingImageInteractiveTransitionSource>)arg1 ;
-(unsigned long long)visibleImageIndex;
-(void)setAllowsPinchingImageForInteractiveZoomingImageTransition:(BOOL)arg1 ;
-(BOOL)allowsPinchingImageForInteractiveZoomingImageTransition;
-(unsigned long long)_numberOfImages;
-(void)_removePageViewController;
-(void)_addPageViewForController:(id)arg1 toView:(id)arg2 ;
-(id)_imageViewControllerAtIndex:(unsigned long long)arg1 ;
-(id)_visibleImageViewController;
-(id<MPUExtrasZoomingImageInteractiveTransitionSource>)zoomingImageInteractiveTransitionSource;
-(void)_updatePageViewController;
-(void)_updateTitle;
-(void)setPageViewController:(UIPageViewController *)arg1 ;
-(UIPageViewController *)pageViewController;
@end

