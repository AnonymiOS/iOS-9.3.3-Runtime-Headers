/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:26 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKit/UIView.h>

@class PSSpecifier, UIViewController;

@interface PSEditingPane : UIView {

	PSSpecifier* _specifier;
	id _delegate;
	unsigned _requiresKeyboard : 1;
	UIViewController* _viewController;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
+(float)preferredHeight;
+(id)defaultBackgroundColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(CGRect)contentRect;
-(id)childViewControllerForHostingViewController;
-(BOOL)shouldInsetContent;
-(void)insetContent;
-(BOOL)requiresKeyboard;
-(void)layoutInsetContent:(CGRect)arg1 ;
-(void)setPreferenceSpecifier:(id)arg1 ;
-(void)setPreferenceValue:(id)arg1 ;
-(void)viewDidBecomeVisible;
-(id)preferenceSpecifier;
-(id)preferenceValue;
-(BOOL)handlesDoneButton;
-(id)scrollViewToBeInsetted;
-(id)specifierLabel;
-(BOOL)wantsNewButton;
-(void)addNewValue;
-(void)doneEditing;
-(void)editMode;
-(BOOL)changed;
@end

