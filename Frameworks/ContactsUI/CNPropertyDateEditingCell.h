/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:31 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNPropertySimpleEditingCell.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/CNPickerControllerDelegate.h>

@class UIDatePicker, UIViewController, NSString;

@interface CNPropertyDateEditingCell : CNPropertySimpleEditingCell <UITextFieldDelegate, CNPickerControllerDelegate> {

	UIDatePicker* _datePicker;
	UIViewController* _contentViewController;

}

@property (nonatomic,retain) UIDatePicker * datePicker;                             //@synthesize datePicker=_datePicker - In the implementation block
@property (nonatomic,retain) UIViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(UIViewController *)contentViewController;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(void)pickerDidCancel:(id)arg1 ;
-(void)picker:(id)arg1 didPickItem:(id)arg2 ;
-(void)labelButtonClicked:(id)arg1 ;
-(void)localeUpdated:(id)arg1 ;
-(void)dateChanged:(id)arg1 ;
-(BOOL)_shouldUseYearlessPickerForDateComponents:(id)arg1 ;
-(void)setDatePicker:(UIDatePicker *)arg1 ;
-(UIDatePicker *)datePicker;
@end

