/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:49 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CMShapeRenderer : NSObject
+(void)renderCanonicalShape:(int)arg1 fill:(id)arg2 stroke:(id)arg3 adjustValues:(id)arg4 orientedBounds:(id)arg5 state:(id)arg6 drawingContext:(id)arg7 ;
+(void)renderDiagramPath:(id)arg1 fill:(id)arg2 stroke:(id)arg3 state:(id)arg4 drawingContext:(id)arg5 ;
+(void)renderLine:(int)arg1 stroke:(id)arg2 adjustValues:(id)arg3 orientedBounds:(id)arg4 state:(id)arg5 drawingContext:(id)arg6 ;
+(void)renderFreeForm:(id)arg1 fill:(id)arg2 stroke:(id)arg3 orientedBounds:(id)arg4 state:(id)arg5 drawingContext:(id)arg6 ;
+(void)_renderCGPath:(CGPathRef)arg1 stroke:(id)arg2 fill:(id)arg3 orientedBounds:(id)arg4 state:(id)arg5 drawingContext:(id)arg6 ;
+(CGImageRef)copyImageFromOADImageFill:(id)arg1 withContext:(id)arg2 ;
+(void)_setupDrawingStyleInDrawingContext:(id)arg1 fill:(id)arg2 stroke:(id)arg3 state:(id)arg4 ;
+(CGImageRef)copyImageFromOADImageFill:(id)arg1 withMapper:(id)arg2 ;
+(void)_setupDrawingStyleInDrawingContext:(id)arg1 stroke:(id)arg2 state:(id)arg3 ;
+(CGColorRef)_copyCGColorFromOADFill:(id)arg1 andState:(id)arg2 ;
+(CGColorRef)_copyCGColorFromOADColor:(id)arg1 andState:(id)arg2 ;
+(void)_setupDrawingStyleInDrawingContext:(id)arg1 dash:(id)arg2 state:(id)arg3 ;
@end

