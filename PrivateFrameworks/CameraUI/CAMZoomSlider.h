/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:31 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UISlider.h>

@protocol CAMZoomSliderDelegate;
@class NSTimer, UIImageView, UIView;

@interface CAMZoomSlider : UISlider {

	BOOL _minimumAutozooming;
	BOOL _maximumAutozooming;
	BOOL __autozooming;
	BOOL _rightToLeft;
	id<CAMZoomSliderDelegate> _delegate;
	NSTimer* __visibilityTimer;
	UIImageView* __thumbImageView;
	UIView* __minTrackMaskView;
	UIView* __maxTrackMaskView;
	UIEdgeInsets _alignmentRectInsets;

}

@property (assign,nonatomic,__weak) id<CAMZoomSliderDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets alignmentRectInsets;                                             //@synthesize alignmentRectInsets=_alignmentRectInsets - In the implementation block
@property (assign,getter=isMinimumAutozooming,nonatomic) BOOL minimumAutozooming;                          //@synthesize minimumAutozooming=_minimumAutozooming - In the implementation block
@property (assign,getter=isMaximumAutozooming,nonatomic) BOOL maximumAutozooming;                          //@synthesize maximumAutozooming=_maximumAutozooming - In the implementation block
@property (nonatomic,readonly) NSTimer * _visibilityTimer;                                                 //@synthesize _visibilityTimer=__visibilityTimer - In the implementation block
@property (assign,setter=_setAutozooming:,getter=_isAutozooming,nonatomic) BOOL _autozooming;              //@synthesize _autozooming=__autozooming - In the implementation block
@property (nonatomic,readonly) UIImageView * _thumbImageView;                                              //@synthesize _thumbImageView=__thumbImageView - In the implementation block
@property (nonatomic,readonly) UIView * _minTrackMaskView;                                                 //@synthesize _minTrackMaskView=__minTrackMaskView - In the implementation block
@property (nonatomic,readonly) UIView * _maxTrackMaskView;                                                 //@synthesize _maxTrackMaskView=__maxTrackMaskView - In the implementation block
@property (assign,getter=isRightToLeft,nonatomic) BOOL rightToLeft;                                        //@synthesize rightToLeft=_rightToLeft - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<CAMZoomSliderDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<CAMZoomSliderDelegate>)delegate;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)intrinsicContentSize;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(id)createThumbView;
-(CGRect)minimumValueImageRectForBounds:(CGRect)arg1 ;
-(CGRect)maximumValueImageRectForBounds:(CGRect)arg1 ;
-(void)setAlignmentRectInsets:(UIEdgeInsets)arg1 ;
-(UIView *)_minTrackMaskView;
-(UIView *)_maxTrackMaskView;
-(void)_commonCAMZoomSliderInitialization;
-(long long)locationOfTouch:(id)arg1 ;
-(void)_setMinimumAutozooming:(BOOL)arg1 ;
-(void)_setMaximumAutozooming:(BOOL)arg1 ;
-(BOOL)_isMinimumOrMaximumAutozooming;
-(BOOL)isMinimumAutozooming;
-(BOOL)isMaximumAutozooming;
-(void)_updateAutozooming;
-(void)_stopVisibilityTimer;
-(void)_beginAutozooming;
-(void)_endAutozooming;
-(void)_startVisibilityTimer;
-(void)_hideZoomSlider:(id)arg1 ;
-(void)_postHideZoomSliderAnimation;
-(BOOL)visibilityTimerIsValid;
-(void)makeVisible;
-(void)makeInvisible;
-(NSTimer *)_visibilityTimer;
-(BOOL)_isAutozooming;
-(void)_setAutozooming:(BOOL)arg1 ;
-(UIImageView *)_thumbImageView;
-(void)setRightToLeft:(BOOL)arg1 ;
-(BOOL)isRightToLeft;
@end

