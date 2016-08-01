/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:52 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <UIKit/UIControl.h>

@class UIImageView, UIView, UILabel, NSString;

@interface MSCLComposeLabelValueButton : UIControl {

	BOOL _didHighlightForInitialTouch;
	UIImageView* _disclosureImageView;
	UIView* _highlightView;
	UILabel* _label;
	UIView* _topSeparatorView;
	UILabel* _valueLabel;

}

@property (nonatomic,copy) NSString * labelText; 
@property (nonatomic,copy) NSString * valueText; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(NSString *)labelText;
-(void)setLabelText:(NSString *)arg1 ;
-(void)deselectAnimated:(BOOL)arg1 ;
-(NSString *)valueText;
-(void)setValueText:(NSString *)arg1 ;
-(void)_reloadHighlightViewAnimated:(BOOL)arg1 ;
@end

