/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:13:01 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <UIKit/UIView.h>

@class CADisplayLink, NSTimer, NSLock;

@interface VTUITickMarkView : UIView {

	CADisplayLink* _displayLink;
	BOOL _shown;
	long long _currentFrameInterval60thPerSec;
	long long _currentFrame;
	int _animState;
	NSTimer* _safetyTimer;
	BOOL _completionCalled;
	/*^block*/id _completionBlock;
	NSLock* _completionLock;
	long long _fadeInFrames;
	long long _pauseFrames;
	long long _fadeOutFrames;

}
+(void)initialize;
-(void)drawRect:(CGRect)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)didMoveToSuperview;
-(void)startAnimationsForTickMark:(BOOL)arg1 fadeInFrames:(long long)arg2 pauseFrames:(long long)arg3 fadeOutFrames:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)setUpDisplayLink;
-(CGImageRef)imageMask:(BOOL)arg1 ;
-(void)handleSafetyTimer:(id)arg1 ;
-(void)tearDownDisplayLink;
@end

