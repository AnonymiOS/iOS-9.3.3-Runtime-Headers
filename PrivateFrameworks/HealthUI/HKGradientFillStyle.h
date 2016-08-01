/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:13:05 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKFillStyle.h>

@class UIColor;

@interface HKGradientFillStyle : HKFillStyle {

	UIColor* _firstColor;
	UIColor* _secondColor;
	double _fillPercentage;
	long long _fillDirection;
	double _gradientSize;

}

@property (nonatomic,retain) UIColor * firstColor;                 //@synthesize firstColor=_firstColor - In the implementation block
@property (nonatomic,retain) UIColor * secondColor;                //@synthesize secondColor=_secondColor - In the implementation block
@property (assign,nonatomic) double fillPercentage;                //@synthesize fillPercentage=_fillPercentage - In the implementation block
@property (assign,nonatomic) long long fillDirection;              //@synthesize fillDirection=_fillDirection - In the implementation block
@property (assign,nonatomic) double gradientSize;                  //@synthesize gradientSize=_gradientSize - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_renderInContext:(CGContextRef)arg1 size:(CGSize)arg2 ;
-(UIColor *)firstColor;
-(UIColor *)secondColor;
-(void)setFillPercentage:(double)arg1 ;
-(BOOL)_useReversedFillDirection;
-(void)setFirstColor:(UIColor *)arg1 ;
-(void)setSecondColor:(UIColor *)arg1 ;
-(double)fillPercentage;
-(long long)fillDirection;
-(void)setFillDirection:(long long)arg1 ;
-(double)gradientSize;
-(void)setGradientSize:(double)arg1 ;
@end

