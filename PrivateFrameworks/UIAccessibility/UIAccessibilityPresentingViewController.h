/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:06 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIWindow;

@interface UIAccessibilityPresentingViewController : UIViewController {

	UIWindow* _presentationWindow;

}
-(void)dealloc;
-(id)init;
-(void)loadView;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissViewControllerWithTransition:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)_voiceOverStatusChanged;
-(void)_cleanUpPresentationWindow;
@end

