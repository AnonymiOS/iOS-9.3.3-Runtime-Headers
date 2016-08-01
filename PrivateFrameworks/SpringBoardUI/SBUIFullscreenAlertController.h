/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:01 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString, NSInvocation;

@interface SBUIFullscreenAlertController : UIViewController <NSCopying> {

	BOOL _shouldAnimateIn;
	NSNumber* _animationStartTime;
	NSString* _activationContext;
	NSInvocation* _pendingDeactivationInvocation;

}

@property (assign,nonatomic) BOOL shouldAnimateIn;                       //@synthesize shouldAnimateIn=_shouldAnimateIn - In the implementation block
@property (nonatomic,retain) NSNumber * animationStartTime;              //@synthesize animationStartTime=_animationStartTime - In the implementation block
@property (nonatomic,retain) NSString * activationContext;               //@synthesize activationContext=_activationContext - In the implementation block
-(BOOL)allowSuspension;
-(id)init;
-(void)didReceiveMemoryWarning;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAnimationStartTime:(NSNumber *)arg1 ;
-(BOOL)definesPresentationContext;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(NSNumber *)animationStartTime;
-(void)setWallpaperTunnelActive:(BOOL)arg1 ;
-(void)setBackgroundStyle:(long long)arg1 withDuration:(double)arg2 ;
-(BOOL)handleVolumeUpButtonPressed;
-(BOOL)handleVolumeDownButtonPressed;
-(BOOL)handleHeadsetButtonPressed:(BOOL)arg1 ;
-(void)setActivationContext:(NSString *)arg1 ;
-(BOOL)handleMenuButtonTap;
-(BOOL)isSlidingViewController;
-(void)finishedAnimatingIn;
-(void)finishedAnimatingOut;
-(void)requestActivationAnimated:(BOOL)arg1 animateCurrentDisplayOut:(BOOL)arg2 withDelay:(BOOL)arg3 ;
-(void)requestDeactivationAnimated:(BOOL)arg1 animateOldDisplayInWithStyle:(int)arg2 ;
-(void)removeBackgroundStyleWithDuration:(double)arg1 ;
-(void)viewWillAnimateIn;
-(void)viewWillAnimateOut;
-(void)animateViewIn;
-(void)animateViewOut;
-(BOOL)viewIsReadyToBeRemoved;
-(BOOL)hasTranslucentBackground;
-(BOOL)allowStackingOfAlert:(id)arg1 ;
-(void)handleAutoLock;
-(void)didFinishLaunchingFrontmost;
-(void)setPendingDeactivationInvocation:(id)arg1 ;
-(id)pendingDeactivationInvocation;
-(BOOL)shouldAnimateIn;
-(void)setShouldAnimateIn:(BOOL)arg1 ;
-(NSString *)activationContext;
-(BOOL)handleLockButtonPressed;
@end

