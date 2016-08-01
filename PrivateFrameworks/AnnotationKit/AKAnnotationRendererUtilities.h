/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:05 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@interface AKAnnotationRendererUtilities : NSObject
+(CGRect)outsetRectForShadow:(CGRect)arg1 onAnnotation:(id)arg2 ;
+(void)setStandardLineStateInContext:(CGContextRef)arg1 forLineWidth:(double)arg2 ;
+(void)setStandardLineDashInContext:(CGContextRef)arg1 forLineWidth:(double)arg2 ;
+(void)beginShadowInContext:(CGContextRef)arg1 forAnnotation:(id)arg2 ;
+(void)endShadowInContext:(CGContextRef)arg1 ;
+(CGPathRef)newStandardStrokedBorderPathWithPath:(CGPathRef)arg1 withStrokeWidth:(double)arg2 ;
+(CGPoint)_shadowDirectionForAnnotation:(id)arg1 ;
@end
