/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:23 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <PhotoEditSupport/BLRetouchEffectLayer.h>

@interface BLRetouchBlurLayer : BLRetouchEffectLayer {

	BOOL _sharpen;
	int _radius;
	double _radiusScale;

}

@property (assign,nonatomic) int radius;                      //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) double radiusScale;              //@synthesize radiusScale=_radiusScale - In the implementation block
@property (assign,nonatomic) BOOL sharpen;                    //@synthesize sharpen=_sharpen - In the implementation block
+(id)layerWithBlur:(int)arg1 ;
+(id)layerWithSharpen:(int)arg1 ;
-(BOOL)hasAmount;
-(int)radius;
-(void)setRadius:(int)arg1 ;
-(CGContextRef)newContextForRect:(CGRect)arg1 inDestRect:(CGRect)arg2 andScale:(double)arg3 ;
-(CGContextRef)newContextWithEffect:(CGContextRef)arg1 ;
-(double)radiusScale;
-(BOOL)sharpen;
-(void)setRadiusScale:(double)arg1 ;
-(void)setSharpen:(BOOL)arg1 ;
-(int)radiusToApply;
@end

