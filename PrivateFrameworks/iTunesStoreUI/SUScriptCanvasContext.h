/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:13 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptColor, NSString;

@interface SUScriptCanvasContext : SUScriptObject {

	CGContextRef _context;
	CGPathRef _contextPath;
	id _fillStyle;
	long long _fillStyleType;
	double _height;
	double _scale;
	double _shadowBlur;
	SUScriptColor* _shadowColor;
	double _shadowOffsetX;
	double _shadowOffsetY;
	id _strokeStyle;
	long long _strokeStyleType;
	double _width;

}

@property (readonly) double height; 
@property (readonly) double width; 
@property (retain) id fillStyle; 
@property (retain) id strokeStyle; 
@property (assign) double globalAlpha; 
@property (retain) NSString * globalCompositeOperation; 
@property (retain) id lineCap; 
@property (retain) id lineJoin; 
@property (assign) double lineWidth; 
@property (assign) double miterLimit; 
@property (assign) double shadowBlur; 
@property (retain) id shadowColor; 
@property (assign) double shadowOffsetX; 
@property (assign) double shadowOffsetY; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(void)dealloc;
-(void)closePath;
-(void)fill;
-(void)stroke;
-(void)clip;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(double)miterLimit;
-(void)setMiterLimit:(double)arg1 ;
-(void)setShadowColor:(id)arg1 ;
-(id)shadowColor;
-(double)width;
-(double)height;
-(void)setShadowBlur:(double)arg1 ;
-(double)shadowBlur;
-(void)setLineCap:(id)arg1 ;
-(void)setLineJoin:(id)arg1 ;
-(id)attributeKeys;
-(id)lineCap;
-(id)makeLinearGradientWithX0:(double)arg1 y0:(double)arg2 x1:(double)arg3 y1:(double)arg4 ;
-(id)makeRadialGradientWithX0:(double)arg1 y0:(double)arg2 r0:(double)arg3 x1:(double)arg4 y1:(double)arg5 r1:(double)arg6 ;
-(id)copyCanvasImage;
-(void)_ntsApplyShadow;
-(void)arcToX1:(double)arg1 y1:(double)arg2 x2:(double)arg3 y2:(double)arg4 radius:(double)arg5 ;
-(void)arcWithX:(double)arg1 y:(double)arg2 radius:(double)arg3 startAngle:(double)arg4 endAngle:(double)arg5 antiClockwise:(BOOL)arg6 ;
-(void)bezierCurveToCP1X:(double)arg1 cp1y:(double)arg2 cp2x:(double)arg3 cp2y:(double)arg4 x:(double)arg5 y:(double)arg6 ;
-(void)clearRectWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4 ;
-(void)fillRectWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4 ;
-(BOOL)isPointInPathWithX:(double)arg1 y:(double)arg2 ;
-(void)lineToX:(double)arg1 y:(double)arg2 ;
-(void)moveToX:(double)arg1 y:(double)arg2 ;
-(void)quadraticCurveToCPX:(double)arg1 cpy:(double)arg2 x:(double)arg3 y:(double)arg4 ;
-(void)rotateWithAngle:(double)arg1 ;
-(void)scaleWithX:(double)arg1 y:(double)arg2 ;
-(void)setTransformWithM11:(double)arg1 m12:(double)arg2 m21:(double)arg3 m22:(double)arg4 dx:(double)arg5 dy:(double)arg6 ;
-(void)strokeRectWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4 ;
-(void)transformWithM11:(double)arg1 m12:(double)arg2 m21:(double)arg3 m22:(double)arg4 dx:(double)arg5 dy:(double)arg6 ;
-(void)translateWithX:(double)arg1 y:(double)arg2 ;
-(CGPathRef)copyCanvasPath;
-(double)globalAlpha;
-(NSString *)globalCompositeOperation;
-(void)setGlobalAlpha:(double)arg1 ;
-(void)setGlobalCompositeOperation:(NSString *)arg1 ;
-(void)setShadowOffsetX:(double)arg1 ;
-(void)setShadowOffsetY:(double)arg1 ;
-(void)setStrokeStyle:(id)arg1 ;
-(id)strokeStyle;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)setFillStyle:(id)arg1 ;
-(id)fillStyle;
-(id)initWithWidth:(double)arg1 height:(double)arg2 ;
-(void)saveState;
-(void)restoreState;
-(double)shadowOffsetX;
-(double)shadowOffsetY;
-(void)beginPath;
-(id)lineJoin;
@end

