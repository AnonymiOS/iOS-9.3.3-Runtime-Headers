/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:40 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <FitnessUI/FIUIPropertyAnimation.h>

@interface FIUICGPointPropertyAnimation : FIUIPropertyAnimation {

	CGPoint _startValue;
	CGPoint _endValue;
	CGPoint _currentValue;

}

@property (nonatomic,readonly) CGPoint startValue;                //@synthesize startValue=_startValue - In the implementation block
@property (nonatomic,readonly) CGPoint endValue;                  //@synthesize endValue=_endValue - In the implementation block
@property (nonatomic,readonly) CGPoint currentValue;              //@synthesize currentValue=_currentValue - In the implementation block
+(id)animationWithEndingCGPointValue:(CGPoint)arg1 duration:(double)arg2 timingFunction:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_currentValue;
-(CGPoint)currentValue;
-(CGPoint)endValue;
-(CGPoint)startValue;
-(void)_setStartValue:(id)arg1 ;
-(void)_setCurrentValue:(id)arg1 ;
-(void)_updateWithProgress:(float)arg1 ;
-(id)_endValue;
-(id)_startValue;
-(void)_setEndValue:(id)arg1 ;
-(id)valueByAddingCurrentValueToValue:(id)arg1 ;
@end

