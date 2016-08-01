/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:24 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface SKUISeparatorView : UIView {

	UIColor* _color1;
	UIColor* _color2;
	long long _separatorStyle;

}

@property (nonatomic,copy) UIColor * color1;                        //@synthesize color1=_color1 - In the implementation block
@property (nonatomic,copy) UIColor * color2;                        //@synthesize color2=_color2 - In the implementation block
@property (assign,nonatomic) long long separatorStyle;              //@synthesize separatorStyle=_separatorStyle - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)setSeparatorStyle:(long long)arg1 ;
-(long long)separatorStyle;
-(void)setColor1:(UIColor *)arg1 ;
-(void)setColor2:(UIColor *)arg1 ;
-(UIColor *)color1;
-(UIColor *)color2;
@end

