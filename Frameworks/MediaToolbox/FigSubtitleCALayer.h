/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigBaseCALayer.h>

@interface FigSubtitleCALayer : FigBaseCALayer {

	OpaqueFigSubtitleCALayerInternal* layerInternal;

}

@property (assign,getter=isOverscanSubtitleSupportEnabled,nonatomic) BOOL overscanSubtitleSupportEnabled; 
+(id)defaultActionForKey:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)actionForKey:(id)arg1 ;
-(void)clear;
-(id)initWithLayer:(id)arg1 ;
-(void)layoutSublayers;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)handleNeedsLayoutNotification;
-(void)_addBoundsAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)_addPositionAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)beginUpdate;
-(void)endUpdate;
-(id)subtitleLayerDisplay;
-(void)setSubtitleGravityNonObscuring:(unsigned char)arg1 ;
-(void)setViewport:(CGRect)arg1 ;
-(void)addAnimations:(id)arg1 forKey:(id)arg2 ;
-(void)removeAnimationsForKey:(id)arg1 ;
-(void)setVideosize:(CGSize)arg1 ;
-(void)updateNonForcedSubtitleDisplayEnabled:(unsigned char)arg1 ;
-(BOOL)isOverscanSubtitleSupportEnabled;
-(void)setOverscanSubtitleSupportEnabled:(BOOL)arg1 ;
-(void)setPlayer:(OpaqueFigPlayerRef)arg1 ;
-(void)finalize;
@end

