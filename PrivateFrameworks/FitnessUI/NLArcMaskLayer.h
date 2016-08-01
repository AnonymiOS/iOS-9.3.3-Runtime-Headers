/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:40 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <QuartzCore/CAShapeLayer.h>

@interface NLArcMaskLayer : CAShapeLayer {

	double _arcStart;
	double _radius;
	CGPoint _center;

}

@property (assign,nonatomic) double arcStart;              //@synthesize arcStart=_arcStart - In the implementation block
@property (assign,nonatomic) double radius;                //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) CGPoint center;               //@synthesize center=_center - In the implementation block
+(BOOL)needsDisplayForKey:(id)arg1 ;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(CGPoint)center;
-(id)actionForKey:(id)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(void)_regeneratePath;
-(void)animatePathCenter:(CGPoint)arg1 radius:(double)arg2 lineWidth:(double)arg3 duration:(double)arg4 ;
-(double)arcStart;
-(void)setArcStart:(double)arg1 ;
@end

