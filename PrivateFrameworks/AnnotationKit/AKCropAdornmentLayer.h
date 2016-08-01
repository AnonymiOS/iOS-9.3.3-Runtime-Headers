/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:04 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AKAdornmentLayer.h>

@class CAShapeLayer;

@interface AKCropAdornmentLayer : AKAdornmentLayer {

	CAShapeLayer* _guideLayer;
	CAShapeLayer* _handlesLayer;

}

@property (retain) CAShapeLayer * guideLayer;                //@synthesize guideLayer=_guideLayer - In the implementation block
@property (retain) CAShapeLayer * handlesLayer;              //@synthesize handlesLayer=_handlesLayer - In the implementation block
-(void)updateAdornmentElements;
-(void)updateSublayersWithScale:(double)arg1 ;
-(BOOL)needsUpdateWhenDraggingStartsOrEnds;
-(CAShapeLayer *)guideLayer;
-(void)_addGuides;
-(CAShapeLayer *)handlesLayer;
-(void)_addHandles;
-(void)_updateGuides;
-(void)_updateHandles;
-(void)_removeGuides;
-(BOOL)_shouldShowHandles;
-(void)_removeHandles;
-(void)setGuideLayer:(CAShapeLayer *)arg1 ;
-(void)setHandlesLayer:(CAShapeLayer *)arg1 ;
@end
