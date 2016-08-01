/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:53 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <UIKit/UITableViewCell.h>

@protocol UITextFieldDelegate;
@class UITextField;

@interface MSCLSettingsTextFieldTableViewCell : UITableViewCell {

	BOOL _enabled;
	long long _layoutStyle;
	UITextField* _textField;
	id<UITextFieldDelegate> _delegate;
	double _labelWidth;

}

@property (assign,nonatomic,__weak) id<UITextFieldDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                        //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) double labelWidth;                                    //@synthesize labelWidth=_labelWidth - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                                //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (nonatomic,readonly) UITextField * textField;                            //@synthesize textField=_textField - In the implementation block
-(void)setDelegate:(id<UITextFieldDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<UITextFieldDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(UITextField *)textField;
-(void)setLabelWidth:(double)arg1 ;
-(double)labelWidth;
-(long long)layoutStyle;
-(void)setLayoutStyle:(long long)arg1 ;
@end

