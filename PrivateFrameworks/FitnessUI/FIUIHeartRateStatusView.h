/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:40 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKit/UIView.h>

@protocol OS_dispatch_queue;
@class NSString, NSBundle, NSObject, NSCache, UIImageView;

@interface FIUIHeartRateStatusView : UIView {

	NSString* _heartImageNameFormat;
	int _frameRateDivider;
	NSBundle* _resourceBundle;
	unsigned long long _state;
	double _heartRate;
	BOOL _delayedStartMeasuringAnimation;
	NSObject*<OS_dispatch_queue> _assetLoadingQueue;
	NSCache* _assetCache;
	BOOL _isBeatingHeart;
	UIImageView* _fullHeartImageView;
	UIImageView* _animatingImageView;
	UIImageView* _reloadOutlineView;
	UIImageView* _reloadArrowView;

}

@property (nonatomic,retain) UIImageView * fullHeartImageView;              //@synthesize fullHeartImageView=_fullHeartImageView - In the implementation block
@property (nonatomic,retain) UIImageView * animatingImageView;              //@synthesize animatingImageView=_animatingImageView - In the implementation block
@property (nonatomic,retain) UIImageView * reloadOutlineView;               //@synthesize reloadOutlineView=_reloadOutlineView - In the implementation block
@property (nonatomic,retain) UIImageView * reloadArrowView;                 //@synthesize reloadArrowView=_reloadArrowView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(void)setHeartRate:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 heartImageNameFormat:(id)arg2 frameRateDivider:(int)arg3 resourceBundle:(id)arg4 ;
-(void)setFullHeartImageView:(UIImageView *)arg1 ;
-(UIImageView *)fullHeartImageView;
-(void)setAnimatingImageView:(UIImageView *)arg1 ;
-(UIImageView *)animatingImageView;
-(void)_loadHeartMeasuringImagesWithCompletion:(/*^block*/id)arg1 ;
-(void)_resumeAnimations;
-(void)_suspendAnimations;
-(void)_startMeasuringAnimationAnimated:(BOOL)arg1 ;
-(void)_startBeatingHeart;
-(UIImageView *)reloadOutlineView;
-(UIImageView *)reloadArrowView;
-(void)setReloadOutlineView:(UIImageView *)arg1 ;
-(void)setReloadArrowView:(UIImageView *)arg1 ;
-(void)_beatFullHeartOnce;
-(void)_finishedHeartBeat;
-(id)_queue_heartMeasuringImages;
-(void)setReloadHeartOutlineImage:(id)arg1 ;
-(void)setReloadArrowImage:(id)arg1 ;
-(void)unloadAnimationAssets;
@end

