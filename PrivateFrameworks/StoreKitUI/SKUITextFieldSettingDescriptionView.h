/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:24 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIFieldSettingDescriptionView.h>
#import <UIKit/UITextFieldDelegate.h>

@class SKUIInputViewElement, UILabel, SKUIFieldSettingDescription, UITextField, NSString;

@interface SKUITextFieldSettingDescriptionView : SKUIFieldSettingDescriptionView <UITextFieldDelegate> {

	double _aggregateLabelWidth;
	SKUIInputViewElement* _inputViewElement;
	UILabel* _label;
	SKUIFieldSettingDescription* _settingDescription;
	UITextField* _textField;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3 ;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(void)_addInputWithElement:(id)arg1 ;
-(id)_currentControllerValue;
-(void)_addLabelWithElement:(id)arg1 ;
-(void)_updateTextFieldValue:(id)arg1 ;
-(void)_fillLayoutWithView:(id)arg1 labelForBaselinePosition:(id)arg2 ;
-(void)_arrangeTextField:(id)arg1 andLabel:(id)arg2 ;
-(void)_addTextInputWithElement:(id)arg1 ;
-(void)_alignView:(id)arg1 withBaselineLabel:(id)arg2 font:(id)arg3 offsetX:(double)arg4 fitWidth:(double)arg5 ;
-(void)beginEdits;
-(void)commitEdits;
@end

