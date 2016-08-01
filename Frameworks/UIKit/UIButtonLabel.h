/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UILabel.h>

@class UIButton;

@interface UIButtonLabel : UILabel {

	BOOL _reverseShadow;
	UIButton* _button;

}
+(id)_defaultAttributes;
-(void)invalidateIntrinsicContentSize;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)_setWantsAutolayout;
-(CGSize)shadowOffset;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(void)_setMinimumFontSize:(double)arg1 ;
-(id)_defaultAttributes;
-(id)_initWithFrame:(CGRect)arg1 button:(id)arg2 ;
-(void)setReverseShadow:(BOOL)arg1 ;
@end

