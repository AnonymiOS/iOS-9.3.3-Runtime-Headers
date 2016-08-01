/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:26 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIColor, UILabel;

@interface SKUIOnboardingCircleView : UIView {

	UIImageView* _backgroundImageView;
	UIEdgeInsets _edgeInsets;
	double _minimumDiameter;
	UIColor* _fillColor;
	UILabel* _titleLabel;
	long long _titlePosition;

}

@property (assign,nonatomic) UIEdgeInsets edgeInsets;              //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,copy) UIColor * fillColor;                    //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) double minimumDiameter;               //@synthesize minimumDiameter=_minimumDiameter - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel; 
@property (assign,nonatomic) long long titlePosition;              //@synthesize titlePosition=_titlePosition - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)description;
-(UIEdgeInsets)edgeInsets;
-(UILabel *)titleLabel;
-(void)setBackgroundImage:(id)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setTitlePosition:(long long)arg1 ;
-(void)setBackgroundImageAlpha:(double)arg1 ;
-(void)setMinimumDiameter:(double)arg1 ;
-(double)minimumDiameter;
-(long long)titlePosition;
@end

