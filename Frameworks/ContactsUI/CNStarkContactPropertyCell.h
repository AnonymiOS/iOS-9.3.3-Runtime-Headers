/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:31 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNPropertyPhoneNumberCell.h>

@interface CNStarkContactPropertyCell : CNPropertyPhoneNumberCell {

	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
+(BOOL)wantsHorizontalLayout;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIEdgeInsets)contentInsets;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)variableConstraints;
-(id)constantConstraints;
-(void)_cnui_applyContactStyle;
-(void)transportButtonClicked:(id)arg1 ;
-(double)bottomBaselineConstant;
-(id)standardTransportIcon;
-(id)standardStarView;
-(void)performDefaultAction;
@end

