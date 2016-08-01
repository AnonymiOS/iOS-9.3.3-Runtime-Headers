/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:13 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SURotationController.h>

@class SURotationController, UIViewController;

@interface SUSplitViewRotationController : SURotationController {

	SURotationController* _firstRotationController;
	UIViewController* _firstViewController;
	SURotationController* _secondRotationController;
	UIViewController* _secondViewController;

}
-(void)dealloc;
-(void)finishRotationFromInterfaceOrientation:(long long)arg1 ;
-(void)animateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)prepareToRotateToInterfaceOrientation:(long long)arg1 ;
-(id)_firstRotationController;
-(id)_secondRotationController;
@end

