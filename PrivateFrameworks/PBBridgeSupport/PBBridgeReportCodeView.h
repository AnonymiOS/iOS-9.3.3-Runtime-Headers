/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, NSTimer;

@interface PBBridgeReportCodeView : UIView {

	NSMutableArray* _frames;
	NSTimer* _animationTimer;
	long long _frameIndex;

}

@property (nonatomic,retain) NSMutableArray * frames;               //@synthesize frames=_frames - In the implementation block
@property (nonatomic,retain) NSTimer * animationTimer;              //@synthesize animationTimer=_animationTimer - In the implementation block
@property (assign,nonatomic) long long frameIndex;                  //@synthesize frameIndex=_frameIndex - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)stopAnimation;
-(void)_tick:(id)arg1 ;
-(void)addFrame:(id)arg1 ;
-(NSTimer *)animationTimer;
-(void)setAnimationTimer:(NSTimer *)arg1 ;
-(long long)frameIndex;
-(void)setFrameIndex:(long long)arg1 ;
-(void)setFrames:(NSMutableArray *)arg1 ;
-(NSMutableArray *)frames;
-(void)playAnimation;
@end
