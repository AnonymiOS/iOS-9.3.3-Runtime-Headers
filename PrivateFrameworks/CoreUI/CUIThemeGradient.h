/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:36 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/CUIThemeGradientDrawing.h>

@interface CUIThemeGradient : NSObject <CUIThemeGradientDrawing> {

	id gradientEvaluator;
	CGFunctionRef colorShader;
	CGColorSpaceRef colorSpace;
	CGImageRef _gradientImage;

}
-(id)colorStops;
-(id)opacityStops;
-(double)smoothingCoefficient;
-(BOOL)isDithered;
-(void)drawInRect:(CGRect)arg1 angle:(double)arg2 withContext:(CGContextRef)arg3 ;
-(void)drawRadialGradientInRect:(CGRect)arg1 relativeCenterPosition:(CGPoint)arg2 withContext:(CGContextRef)arg3 ;
-(void)drawAngleGradientInRect:(CGRect)arg1 relativeCenterPosition:(CGPoint)arg2 withContext:(CGContextRef)arg3 ;
-(psdGradientColor)_psdGradientColorWithColor:(id)arg1 colorSpace:(CGColorSpaceRef)arg2 ;
-(id)initWithColors:(id)arg1 colorlocations:(id)arg2 colorMidpoints:(id)arg3 opacities:(id)arg4 opacityLocations:(id)arg5 opacityMidpoints:(id)arg6 smoothingCoefficient:(double)arg7 fillColor:(id)arg8 colorSpace:(CGColorSpaceRef)arg9 dither:(BOOL)arg10 ;
-(id)_psdGradientColorStopsWithColors:(id)arg1 locations:(id)arg2 colorSpace:(CGColorSpaceRef)arg3 ;
-(id)_psdGradientOpacityStopsWithOpacities:(id)arg1 locations:(id)arg2 ;
-(id)_initWithGradientEvaluator:(id)arg1 colorSpace:(CGColorSpaceRef)arg2 ;
-(id)_colorFromPSDGradientColor:(psdGradientColor)arg1 ;
-(void)drawFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 options:(unsigned long long)arg3 withContext:(CGContextRef)arg4 ;
-(CGImageRef)_createRadialGradientImageWithWidth:(double)arg1 height:(double)arg2 ;
-(CGFunctionRef)_newColorShaderForDistance:(double)arg1 ;
-(CGFunctionRef)colorShader;
-(id)interpolatedColorAtLocation:(double)arg1 ;
-(void)drawInRect:(CGRect)arg1 angle:(double)arg2 ;
-(id)initWithColors:(id)arg1 colorlocations:(id)arg2 colorMidpoints:(id)arg3 opacities:(id)arg4 opacityLocations:(id)arg5 opacityMidpoints:(id)arg6 smoothingCoefficient:(double)arg7 fillColor:(id)arg8 colorSpace:(CGColorSpaceRef)arg9 ;
-(id)colorLocations;
-(id)opacityLocations;
-(void)drawFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 options:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)fillColor;
-(int)blendMode;
@end

