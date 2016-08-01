/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:25 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PKPassFaceDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PKPasscodeLockManagerObserver.h>

@protocol WLCardViewDelegate;
@class PKPassFrontFaceView, PKPassBackFaceView, PKPassFaceView, PKPassColorProfile, UITapGestureRecognizer, PKPasscodeLockManager, PKPass, NSString;

@interface PKPassView : UIView <PKPassFaceDelegate, UIGestureRecognizerDelegate, PKPasscodeLockManagerObserver> {

	PKPassFrontFaceView* _frontFace;
	PKPassBackFaceView* _backFace;
	PKPassFaceView* _visibleFace;
	PKPassFaceView* _otherFace;
	PKPassColorProfile* _colorProfile;
	UITapGestureRecognizer* _tapRecognizer;
	long long _priorContentMode;
	BOOL _flipping;
	CGRect _delayedFlipFrame;
	double _flipOvershoot;
	double _flipLayoutOvershoot;
	id<WLCardViewDelegate> _delegate;
	PKPasscodeLockManager* _passcodeLockManager;
	/*^block*/id _delayedContentModeCanceller;
	BOOL _backFaceIsTall;
	BOOL _isFrontmostPassView;
	PKPass* _pass;
	long long _contentMode;
	unsigned long long _suppressedContent;

}

@property (nonatomic,retain,readonly) PKPass * pass;                            //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) NSString * uniqueID; 
@property (assign,nonatomic) id<WLCardViewDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long contentMode;                             //@synthesize contentMode=_contentMode - In the implementation block
@property (nonatomic,readonly) BOOL showingFront; 
@property (nonatomic,readonly) BOOL isFrontFaceResized; 
@property (nonatomic,readonly) BOOL isForcedFrontFaceResized; 
@property (assign,nonatomic) unsigned long long suppressedContent;              //@synthesize suppressedContent=_suppressedContent - In the implementation block
@property (assign,nonatomic) BOOL backFaceIsTall;                               //@synthesize backFaceIsTall=_backFaceIsTall - In the implementation block
@property (assign,nonatomic) BOOL isFrontmostPassView;                          //@synthesize isFrontmostPassView=_isFrontmostPassView - In the implementation block
@property (nonatomic,readonly) BOOL frontFaceBodyContentCreated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<WLCardViewDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGRect)frame;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<WLCardViewDelegate>)delegate;
-(void)setContentMode:(long long)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)item;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(long long)contentMode;
-(BOOL)canFlip;
-(id)initWithPass:(id)arg1 ;
-(PKPass *)pass;
-(id)snapshotOfFrontFace;
-(id)initWithPass:(id)arg1 content:(long long)arg2 ;
-(void)setSuppressedContent:(unsigned long long)arg1 ;
-(void)setDimmer:(double)arg1 animated:(BOOL)arg2 ;
-(void)presentDiff:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareForFlip;
-(BOOL)passFaceBarcodeButtonEnabled;
-(void)passFaceFlipButtonPressed:(id)arg1 ;
-(void)passFaceBarcodeButtonPressed:(id)arg1 ;
-(void)passBackFaceShareButtonPressed:(id)arg1 ;
-(void)passFaceDeleteButtonPressed:(id)arg1 ;
-(void)tapRecognized:(id)arg1 ;
-(void)_applyContentMode:(BOOL)arg1 ;
-(void)_updateFrontFaceSuppressedContent;
-(void)_updateResizeIfNecessary;
-(void)unregisterForEnterBackgroundNotification;
-(BOOL)showingFront;
-(CGSize)sizeOfFront;
-(CGSize)sizeOfBackFace;
-(BOOL)isFrontFaceResized;
-(BOOL)backFaceIsTall;
-(void)_updateBackFaceSuppressedContent;
-(void)setContentMode:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setContentMode:(long long)arg1 animated:(BOOL)arg2 withDelay:(double)arg3 ;
-(void)_flipPass:(BOOL)arg1 fromLeft:(BOOL)arg2 notify:(BOOL)arg3 ;
-(BOOL)canResize;
-(void)_resizePassAnimated:(BOOL)arg1 notify:(BOOL)arg2 ;
-(BOOL)isForcedFrontFaceResized;
-(long long)_frontFaceBackgroundModeForContentMode;
-(unsigned long long)_regionsForCurrentModes;
-(BOOL)_visibleFaceShouldClipForCurrentViewMode:(double*)arg1 ;
-(void)createBackFaceIfNecessary;
-(void)registerForEnterBackgroundNotification;
-(BOOL)passFaceDeleteButtonEnabled;
-(void)passcodeLockManager:(id)arg1 didReceivePasscodeSet:(BOOL)arg2 ;
-(CGSize)sizeOfFrontFace;
-(CGRect)frameOfVisibleFace;
-(id)snapshotViewOfVisibleFaceAfterScreenUpdates:(BOOL)arg1 ;
-(void)setBackFaceIsTall:(BOOL)arg1 ;
-(BOOL)frontFaceBodyContentCreated;
-(void)setIsFrontmostPassView:(BOOL)arg1 ;
-(void)updateValidityDisplay;
-(void)flipPass:(BOOL)arg1 fromLeft:(BOOL)arg2 notify:(BOOL)arg3 ;
-(void)resizePassAnimated:(BOOL)arg1 notify:(BOOL)arg2 ;
-(void)aidUpdated:(id)arg1 ;
-(unsigned long long)suppressedContent;
-(BOOL)isFrontmostPassView;
-(NSString *)uniqueID;
@end

