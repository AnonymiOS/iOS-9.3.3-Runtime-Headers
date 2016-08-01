/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:51 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer, _UIKeyCommandDiscoverabilityHUDWindow;

@interface UIKeyCommandDiscoverabilityHUD : NSObject {

	NSTimer* _HUDPopTimer;
	_UIKeyCommandDiscoverabilityHUDWindow* _window;
	BOOL _commandKeyIsDown;

}
+(id)sharedKeyCommandDiscoverabilityHUD;
-(void)dealloc;
-(void)handlePhysicalKeyboardEvent:(id)arg1 ;
-(void)_dismissHUD;
-(void)_scheduleHUDPresentation;
-(void)_applicationWillResignActive;
-(void)_HUDPopTimerFired:(id)arg1 ;
-(id)_performableKeyCommandsWithResponder:(id)arg1 ;
-(void)_presentHUDWithKeyCommands:(id)arg1 ;
@end

