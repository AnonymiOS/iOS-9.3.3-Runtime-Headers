/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:44 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIActionSheet.h>
#import <UIKit/UIActionSheetDelegate.h>

@class MPAVRoutingController, UIViewController, UIWindow, NSArray, NSString;

@interface MPAudioVideoRoutingActionSheet : UIActionSheet <UIActionSheetDelegate> {

	int _airPlayPasswordAlertDidAppearToken;
	BOOL _airPlayPasswordAlertDidAppearTokenIsValid;
	MPAVRoutingController* _routingController;
	unsigned long long _avItemType;
	/*^block*/id _completionHandler;
	UIViewController* _viewControllerForActionSheet;
	UIWindow* _windowForActionSheet;
	BOOL _shouldPauseAfterDismissing;
	NSArray* _displayedRoutes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithType:(unsigned long long)arg1 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)showWithValidInterfaceOrientationMaskBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_availableRoutes;
-(BOOL)_isDeviceVideoRoute:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 routingController:(id)arg2 ;
-(void)_debugButtonAction:(id)arg1 ;
-(void)showWithValidInterfaceOrientationMaskBlock:(/*^block*/id)arg1 windowLevel:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)showFromRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)showWithValidInterfaceOrientationsBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)showInPopoverFromRect:(CGRect)arg1 inView:(id)arg2 backgroundStyle:(long long)arg3 animated:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
@end

