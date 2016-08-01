/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:30 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class CALayer;

@interface CALayerPortal : CALayer {

	CALayer* _sourceLayer;

}

@property (retain) CALayer * sourceLayer; 
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)dealloc;
-(void)setSourceLayer:(CALayer *)arg1 ;
@end

