/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:47 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, _UIFloatingContentView;

@interface UIRecentInputTableCell : UITableViewCell {

	UILabel* _floatingLabel;
	long long _blurEffectStyle;

}

@property (nonatomic,retain) UILabel * floatingLabel;                                //@synthesize floatingLabel=_floatingLabel - In the implementation block
@property (assign,nonatomic) long long blurEffectStyle;                              //@synthesize blurEffectStyle=_blurEffectStyle - In the implementation block
@property (nonatomic,readonly) _UIFloatingContentView * tvFloatingView; 
+(id)backgroundColorForBlurEffectStyle:(long long)arg1 ;
+(id)unfocusedTextColorForBlurEffectStyle:(long long)arg1 ;
+(id)focusedTextColorForBlurEffectStyle:(long long)arg1 ;
-(void)layoutSubviews;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setupSelectedBackgroundView;
-(void)setBlurEffectStyle:(long long)arg1 ;
-(long long)blurEffectStyle;
-(UILabel *)floatingLabel;
-(_UIFloatingContentView *)tvFloatingView;
-(void)setFloatingLabel:(UILabel *)arg1 ;
-(void)setInputText:(id)arg1 withBlurStyle:(long long)arg2 ;
@end

