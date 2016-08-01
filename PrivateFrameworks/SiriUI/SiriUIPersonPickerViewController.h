/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUIObjectPickerViewController.h>
#import <libobjc.A.dylib/ABPeoplePickerNavigationControllerDelegate.h>

@class UIViewController, NSString;

@interface SiriUIPersonPickerViewController : SiriUIObjectPickerViewController <ABPeoplePickerNavigationControllerDelegate> {

	UIViewController* _presentingViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)showPicker:(id)arg1 ;
-(id)_abAssistantManager;
-(id)_pickerResponseForPerson:(void*)arg1 ;
-(void)_dismissPicker;
@end

