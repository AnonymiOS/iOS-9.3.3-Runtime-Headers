/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:44 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSEditableTableCell.h>

@class UIImage, CNFRegShadowView;

@interface CNFRegEditableTableCell : PSEditableTableCell {

	SEL _emptyStateSelector;
	SEL _didBeginEditingSelector;
	SEL _didEndEditingSelector;
	id _textChangeObserver;
	BOOL _textFieldIsEmpty;
	BOOL _skipDelegateCallback;
	UIImage* _shadowImage;
	CNFRegShadowView* _shadowView;
	UIImage* _customCheckmarkImage;
	UIImage* _customCheckmarkImageSelected;

}

@property (assign,nonatomic) BOOL skipDelegateCallback;                           //@synthesize skipDelegateCallback=_skipDelegateCallback - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;                               //@synthesize shadowImage=_shadowImage - In the implementation block
@property (nonatomic,retain) UIImage * customCheckmarkImage;                      //@synthesize customCheckmarkImage=_customCheckmarkImage - In the implementation block
@property (nonatomic,retain) UIImage * customCheckmarkImageSelected;              //@synthesize customCheckmarkImageSelected=_customCheckmarkImageSelected - In the implementation block
@property (nonatomic,retain) CNFRegShadowView * shadowView;                       //@synthesize shadowView=_shadowView - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(void)setChecked:(BOOL)arg1 ;
-(void)setTitle:(id)arg1 ;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(CNFRegShadowView *)shadowView;
-(void)setShadowView:(CNFRegShadowView *)arg1 ;
-(void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3 ;
-(void)setCustomCheckmarkImage:(UIImage *)arg1 ;
-(void)setCustomCheckmarkImageSelected:(UIImage *)arg1 ;
-(void)setSkipDelegateCallback:(BOOL)arg1 ;
-(void)textFieldChangedExternally;
-(BOOL)skipDelegateCallback;
-(void)_updateTextFieldOffsetWithDict:(id)arg1 ;
-(void)_handleTextChanged;
-(BOOL)_textFieldIsCurrentlyEmpty;
-(void)notifyTextFieldEmptyStateChanged:(BOOL)arg1 ;
-(void)notifyTextFieldDidBeginEditing;
-(void)notifyTextFieldDidEndEditing;
-(UIImage *)customCheckmarkImage;
-(UIImage *)customCheckmarkImageSelected;
-(void)_startListeningForTextChanges;
-(void)_stopListeningForTextChanges;
@end

