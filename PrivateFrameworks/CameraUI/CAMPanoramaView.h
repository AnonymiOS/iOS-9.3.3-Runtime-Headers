/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIView.h>

@protocol CAMPanoramaViewDelegate;
@class CAMPanoramaPreviewView, UIView, CAMPanoramaArrowView, CAMPanoramaLevelView, UILabel, CAMPanoramaPaintingStatus;

@interface CAMPanoramaView : UIView {

	BOOL _painting;
	BOOL __currentlyShowingMoveInstructions;
	BOOL __currentlyMovingTooFast;
	long long _direction;
	id<CAMPanoramaViewDelegate> _delegate;
	CAMPanoramaPreviewView* _previewView;
	double _currentOrientedAcceleration;
	UIView* __stripBackgroundView;
	UIView* __stripContainerView;
	UIView* __maskingView;
	CAMPanoramaArrowView* __arrowView;
	CAMPanoramaLevelView* __levelView;
	UILabel* __instructionLabel;
	CAMPanoramaPaintingStatus* __currentPaintingStatus;
	double __initialPaintingAcceleration;
	double __currentPaintingAcceleration;
	double* __previousSpeeds;
	double __currentAverageSpeed;
	unsigned long long __arrowUpdateFrame;
	CGPoint __initialArrowCenter;
	CGRect __lastLayoutBounds;

}

@property (assign,nonatomic) long long direction;                                                                                                                         //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic,__weak) id<CAMPanoramaViewDelegate> delegate;                                                                                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CAMPanoramaPreviewView * previewView;                                                                                                      //@synthesize previewView=_previewView - In the implementation block
@property (assign,getter=isPainting,nonatomic) BOOL painting;                                                                                                             //@synthesize painting=_painting - In the implementation block
@property (assign,nonatomic) double currentOrientedAcceleration;                                                                                                          //@synthesize currentOrientedAcceleration=_currentOrientedAcceleration - In the implementation block
@property (nonatomic,readonly) UIView * _stripBackgroundView;                                                                                                             //@synthesize _stripBackgroundView=__stripBackgroundView - In the implementation block
@property (nonatomic,readonly) UIView * _stripContainerView;                                                                                                              //@synthesize _stripContainerView=__stripContainerView - In the implementation block
@property (nonatomic,readonly) UIView * _maskingView;                                                                                                                     //@synthesize _maskingView=__maskingView - In the implementation block
@property (nonatomic,readonly) CAMPanoramaArrowView * _arrowView;                                                                                                         //@synthesize _arrowView=__arrowView - In the implementation block
@property (nonatomic,readonly) CAMPanoramaLevelView * _levelView;                                                                                                         //@synthesize _levelView=__levelView - In the implementation block
@property (nonatomic,readonly) UILabel * _instructionLabel;                                                                                                               //@synthesize _instructionLabel=__instructionLabel - In the implementation block
@property (assign,setter=_setInitialArrowCenter:,nonatomic) CGPoint _initialArrowCenter;                                                                                  //@synthesize _initialArrowCenter=__initialArrowCenter - In the implementation block
@property (assign,setter=_setLastLayoutBounds:,nonatomic) CGRect _lastLayoutBounds;                                                                                       //@synthesize _lastLayoutBounds=__lastLayoutBounds - In the implementation block
@property (setter=_setCurrentPaintingStatus:,nonatomic,retain) CAMPanoramaPaintingStatus * _currentPaintingStatus;                                                        //@synthesize _currentPaintingStatus=__currentPaintingStatus - In the implementation block
@property (assign,setter=_setInitialPaintingAcceleration:,nonatomic) double _initialPaintingAcceleration;                                                                 //@synthesize _initialPaintingAcceleration=__initialPaintingAcceleration - In the implementation block
@property (assign,setter=_setCurrentPaintingAcceleration:,nonatomic) double _currentPaintingAcceleration;                                                                 //@synthesize _currentPaintingAcceleration=__currentPaintingAcceleration - In the implementation block
@property (assign,setter=_setCurrentlyShowingMoveInstructions:,getter=_isCurrentlyShowingMoveInstructions,nonatomic) BOOL _currentlyShowingMoveInstructions;              //@synthesize _currentlyShowingMoveInstructions=__currentlyShowingMoveInstructions - In the implementation block
@property (nonatomic,readonly) double* _previousSpeeds;                                                                                                                   //@synthesize _previousSpeeds=__previousSpeeds - In the implementation block
@property (assign,setter=_setCurrentlyMovingTooFast:,getter=_isCurrentlyMovingTooFast,nonatomic) BOOL _currentlyMovingTooFast;                                            //@synthesize _currentlyMovingTooFast=__currentlyMovingTooFast - In the implementation block
@property (assign,setter=_setCurrentAverageSpeed:,nonatomic) double _currentAverageSpeed;                                                                                 //@synthesize _currentAverageSpeed=__currentAverageSpeed - In the implementation block
@property (assign,setter=_setArrowUpdateFrame:,nonatomic) unsigned long long _arrowUpdateFrame;                                                                           //@synthesize _arrowUpdateFrame=__arrowUpdateFrame - In the implementation block
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<CAMPanoramaViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<CAMPanoramaViewDelegate>)delegate;
-(CGSize)intrinsicContentSize;
-(void)setDirection:(long long)arg1 ;
-(long long)direction;
-(CAMPanoramaPreviewView *)previewView;
-(void)startProcessingPanorama;
-(void)finishedProcessingPanorama;
-(void)updateToContentSize:(id)arg1 ;
-(void)startPainting;
-(void)stopPainting;
-(id)initWithPanoramaPreviewView:(id)arg1 ;
-(void)_setPainting:(BOOL)arg1 ;
-(void)setDirection:(long long)arg1 animated:(BOOL)arg2 ;
-(void)updatePaintingWithStatus:(id)arg1 ;
-(double)currentOrientedAcceleration;
-(void)updateOrientedAcceleration:(double)arg1 ;
-(BOOL)isPainting;
-(CGRect)_lastLayoutBounds;
-(UIView *)_stripBackgroundView;
-(UIView *)_stripContainerView;
-(CAMPanoramaLevelView *)_levelView;
-(CAMPanoramaPaintingStatus *)_currentPaintingStatus;
-(UIView *)_maskingView;
-(CAMPanoramaArrowView *)_arrowView;
-(double)_initialPaintingAcceleration;
-(double)_currentPaintingAcceleration;
-(double)_currentAverageSpeed;
-(CGPoint)_initialArrowCenter;
-(BOOL)_isCurrentlyShowingMoveInstructions;
-(void)_showMoveUpInstructions;
-(void)_showMoveDownInstructions;
-(void)_showMoveUpInstructionsAfterDelay;
-(void)_showMoveDownInstructionsAfterDelay;
-(void)_cancelDelayedMoveInstructions;
-(void)_hideInstructionLabel;
-(UILabel *)_instructionLabel;
-(void)_setLastLayoutBounds:(CGRect)arg1 ;
-(void)_resetPaintingUIAnimated:(BOOL)arg1 ;
-(void)_setArrowUpdateFrame:(unsigned long long)arg1 ;
-(void)_setInitialPaintingAcceleration:(double)arg1 ;
-(void)_setCurrentPaintingAcceleration:(double)arg1 ;
-(void)_setInitialArrowCenter:(CGPoint)arg1 ;
-(void)_showArrowInstructions;
-(void)_hideArrowInstructionsAfterDelay;
-(void)_setCurrentlyShowingMoveInstructions:(BOOL)arg1 ;
-(void)_setCurrentlyMovingTooFast:(BOOL)arg1 ;
-(void)_showSpeedInstructions;
-(void)_hideSpeedInstructionsAfterDelay;
-(unsigned long long)_arrowUpdateFrame;
-(void)_setCurrentAverageSpeed:(double)arg1 ;
-(void)_setCurrentPaintingStatus:(id)arg1 ;
-(void)_setCurrentOrientedAcceleration:(double)arg1 ;
-(void)_updateInstructionLabelText:(id)arg1 ;
-(BOOL)_isCurrentlyMovingTooFast;
-(double*)_previousSpeeds;
@end

