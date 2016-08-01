/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:02 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@protocol MKOverlay;
@interface MKOverlayView : UIView {

	id<MKOverlay> _overlay;
	SCD_Struct_MK10 _boundingMapRect;
	id _renderer;

}

@property (nonatomic,readonly) id<MKOverlay> overlay;              //@synthesize overlay=_overlay - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setContentScaleFactor:(double)arg1 ;
-(BOOL)_canDrawContent;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(id<MKOverlay>)overlay;
-(id)initWithOverlay:(id)arg1 ;
-(void)drawMapRect:(SCD_Struct_MK10)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(void)overlay:(id)arg1 drawKey:(const SCD_Struct_MK13*)arg2 inContext:(CGContextRef)arg3 ;
-(void)setNeedsDisplayInMapRect:(SCD_Struct_MK10)arg1 ;
-(CGPoint)pointForMapPoint:(SCD_Struct_MK7)arg1 ;
-(void)set_renderer:(id)arg1 ;
-(CGRect)rectForMapRect:(SCD_Struct_MK10)arg1 ;
-(SCD_Struct_MK7)mapPointForPoint:(CGPoint)arg1 ;
-(SCD_Struct_MK7)_originMapPoint;
-(void)setNeedsDisplayInMapRect:(SCD_Struct_MK10)arg1 zoomScale:(double)arg2 ;
-(BOOL)canDrawMapRect:(SCD_Struct_MK10)arg1 zoomScale:(double)arg2 ;
-(id)_mk_overlayLayer;
-(id)_mk_overlayView;
-(BOOL)overlay:(id)arg1 canDrawKey:(const SCD_Struct_MK13*)arg2 ;
-(SCD_Struct_MK10)mapRectForRect:(CGRect)arg1 ;
-(void)set_boundingMapRect:(SCD_Struct_MK10)arg1 ;
-(SCD_Struct_MK10)_boundingMapRect;
-(id)_renderer;
@end

