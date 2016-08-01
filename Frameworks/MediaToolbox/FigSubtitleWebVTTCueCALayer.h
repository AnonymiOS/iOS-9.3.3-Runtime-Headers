/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigBaseCALayer.h>

@interface FigSubtitleWebVTTCueCALayer : FigBaseCALayer {

	OpaqueFigSubtitleWebVTTCueCALayerInternal* layerInternal;

}
-(void)dealloc;
-(id)init;
-(void)layoutSublayers;
-(void)drawInContext:(CGContextRef)arg1 ;
-(CGRect)getSuggestedBounds:(unsigned char)arg1 ;
-(void)setCuePosition:(CGPoint)arg1 ;
-(CFStringRef)getContentID;
-(void)setRenderer:(OpaqueFigSubtitleRendererRef)arg1 ;
-(void)setViewport:(CGRect)arg1 ;
-(void)setContent:(CFAttributedStringRef)arg1 ;
-(unsigned char)isDirty;
-(void)setDefaultFontSize:(double)arg1 ;
-(void)finalize;
@end

