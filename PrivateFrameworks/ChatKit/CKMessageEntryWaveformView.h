/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:50 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, UIImageView, UIVisualEffectView, UILabel;

@interface CKMessageEntryWaveformView : UIView {

	double _duration;
	NSMutableArray* _powerLevels;
	UIImageView* _waveformImageView;
	unsigned long long _maxPowerLevelsCount;
	UIVisualEffectView* _blurView;
	UIImageView* _maskView;
	UIImageView* _balloonImageView;
	UILabel* _timeLabel;
	double _minTimeLabelWidth;

}

@property (assign,nonatomic) double duration;                                     //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSMutableArray * powerLevels;                        //@synthesize powerLevels=_powerLevels - In the implementation block
@property (nonatomic,retain) UIImageView * waveformImageView;                     //@synthesize waveformImageView=_waveformImageView - In the implementation block
@property (assign,nonatomic) unsigned long long maxPowerLevelsCount;              //@synthesize maxPowerLevelsCount=_maxPowerLevelsCount - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * blurView;                       //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,retain) UIImageView * maskView;                              //@synthesize maskView=_maskView - In the implementation block
@property (nonatomic,retain) UIImageView * balloonImageView;                      //@synthesize balloonImageView=_balloonImageView - In the implementation block
@property (nonatomic,retain) UILabel * timeLabel;                                 //@synthesize timeLabel=_timeLabel - In the implementation block
@property (assign,nonatomic) double minTimeLabelWidth;                            //@synthesize minTimeLabelWidth=_minTimeLabelWidth - In the implementation block
+(id)waveformCurveTransform;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setMaskView:(UIImageView *)arg1 ;
-(UIImageView *)maskView;
-(UIVisualEffectView *)blurView;
-(void)setBlurView:(UIVisualEffectView *)arg1 ;
-(void)setMinTimeLabelWidth:(double)arg1 ;
-(double)minTimeLabelWidth;
-(void)clearPowerLevels;
-(void)appendPowerLevel:(double)arg1 ;
-(NSMutableArray *)powerLevels;
-(void)setPowerLevels:(NSMutableArray *)arg1 ;
-(UIImageView *)waveformImageView;
-(void)setBalloonImageView:(UIImageView *)arg1 ;
-(void)setWaveformImageView:(UIImageView *)arg1 ;
-(void)setTimeLabel:(UILabel *)arg1 ;
-(void)setMaxPowerLevelsCount:(unsigned long long)arg1 ;
-(UIImageView *)balloonImageView;
-(UILabel *)timeLabel;
-(void)updateWaveform;
-(unsigned long long)maxPowerLevelsCount;
@end

