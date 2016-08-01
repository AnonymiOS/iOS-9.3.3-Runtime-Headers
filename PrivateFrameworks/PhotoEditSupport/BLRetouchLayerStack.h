/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:23 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <PhotoEditSupport/BLBaseLayerStack.h>

@interface BLRetouchLayerStack : BLBaseLayerStack {

	CGContextRef _labContextRef;
	SCD_Struct_BL9 _edgeAwareColor;

}
+(id)layerStack;
-(void)dealloc;
-(id)init;
-(double)timestamp;
-(void)addLayer:(id)arg1 ;
-(void)buildEdgeDetectFromImage:(id)arg1 ;
-(void)setStrokesDataDictionary:(id)arg1 ;
-(id)strokesDataDictionary;
-(BOOL)haveLayerMask;
-(BOOL)readyToDraw;
-(void)updateLabColorsInRect:(CGRect)arg1 ;
-(void)sampleEdgeDetectColorFromRect:(CGRect)arg1 ;
-(void)findEdgesInRect:(CGRect)arg1 result:(CGContextRef)arg2 ;
-(int)maxEdgeSize;
-(int)disabledBrushTypes;
@end

