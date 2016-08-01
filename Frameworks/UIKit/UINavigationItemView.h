/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:39 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UINavigationItem, UIView, UILabel;

@interface UINavigationItemView : UIView {

	UINavigationItem* _item;
	CGSize _titleSize;
	UIView* _topCrossView;
	UIView* _bottomCrossView;
	BOOL _isCrossFading;
	BOOL _customFontSet;
	UILabel* _label;
	BOOL _isFadingInFromCustomAlpha;

}

@property (assign,setter=_setFadingInFromCustomAlpha:,nonatomic) BOOL _isFadingInFromCustomAlpha;              //@synthesize isFadingInFromCustomAlpha=_isFadingInFromCustomAlpha - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)navigationItem;
-(id)title;
-(void)setFont:(id)arg1 ;
-(id)_scriptingInfo;
-(void)_resetTitleSize;
-(void)_setLineBreakMode:(long long)arg1 ;
-(id)initWithNavigationItem:(id)arg1 ;
-(BOOL)titleAutoresizesToFit;
-(void)setTitleAutoresizesToFit:(BOOL)arg1 ;
-(void)_updateLabelColor;
-(void)_prepareCrossViewsForNewSize:(CGSize)arg1 ;
-(void)_crossFadeHiddingButton:(BOOL)arg1 ;
-(void)_cleanUpCrossView;
-(CGSize)_titleSize;
-(BOOL)_isFadingInFromCustomAlpha;
-(void)_setFadingInFromCustomAlpha:(BOOL)arg1 ;
-(id)_defaultFont;
-(void)_setFont:(id)arg1 ;
-(CGRect)_labelFrame;
-(BOOL)_useSilverLookForBarStyle:(long long)arg1 ;
-(id)_currentTextColorForBarStyle:(long long)arg1 ;
-(CGSize)_currentTextShadowOffsetForBarStyle:(long long)arg1 ;
-(id)_currentTextShadowColorForBarStyle:(long long)arg1 ;
-(double)_titleYAdjustmentCustomization;
-(void)_updateLabel;
-(void)_updateLabelContents;
-(id)font;
-(void)_adjustLabelTrackingIfNecessary;
@end

