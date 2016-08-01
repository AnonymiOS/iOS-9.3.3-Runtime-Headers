/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyCommandDiscoverabilityHUDVisualStyle.h>

@class UIColor;

@interface UIKeyCommandDiscoverabilityHUDVisualStyleRegular : UIKeyCommandDiscoverabilityHUDVisualStyle {

	UIColor* _titleColor;
	UIColor* _inputColor;
	UIColor* _dividerColor;

}

@property (nonatomic,retain) UIColor * titleColor;                //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,retain) UIColor * inputColor;                //@synthesize inputColor=_inputColor - In the implementation block
@property (nonatomic,retain) UIColor * dividerColor;              //@synthesize dividerColor=_dividerColor - In the implementation block
-(id)init;
-(double)minimumFontScaleBeforeTruncation;
-(double)maxHUDWidthForWidth:(double)arg1 ;
-(double)maxHUDHeightForHeight:(double)arg1 ;
-(UIEdgeInsets)HUDViewInsets;
-(double)summaryLineSpacing;
-(double)summaryLineHeight;
-(double)columnDividerWidth;
-(double)HUDPageControlBottomMargin;
-(UIColor *)dividerColor;
-(double)columnDividerHeightForHUDHeight:(double)arg1 ;
-(void)setTitleColor:(UIColor *)arg1 ;
-(void)setInputColor:(UIColor *)arg1 ;
-(UIColor *)inputColor;
-(void)setDividerColor:(UIColor *)arg1 ;
-(double)summaryXPadding;
-(double)summaryYPadding;
-(double)summaryDescriptionToModifiersSpacing;
-(double)summaryModifiersSpacing;
-(id)summaryFont;
-(UIColor *)titleColor;
@end

