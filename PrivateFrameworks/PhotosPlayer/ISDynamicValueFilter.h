/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:57 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CADisplayLink;

@interface ISDynamicValueFilter : NSObject {

	BOOL __isPerformingInputChanges;
	double _targetValue;
	double _maximumSpeed;
	double _maximumDeceleration;
	double _outputValue;
	/*^block*/id _outputValueChangeHandler;
	double __speed;
	double __time;
	CADisplayLink* __displayLink;

}

@property (assign,nonatomic) double targetValue;                                                             //@synthesize targetValue=_targetValue - In the implementation block
@property (assign,nonatomic) double maximumSpeed;                                                            //@synthesize maximumSpeed=_maximumSpeed - In the implementation block
@property (assign,nonatomic) double maximumDeceleration;                                                     //@synthesize maximumDeceleration=_maximumDeceleration - In the implementation block
@property (assign,nonatomic) double outputValue;                                                             //@synthesize outputValue=_outputValue - In the implementation block
@property (nonatomic,copy) id outputValueChangeHandler;                                                      //@synthesize outputValueChangeHandler=_outputValueChangeHandler - In the implementation block
@property (assign,setter=_setPerformingInputChanges:,nonatomic) BOOL _isPerformingInputChanges;              //@synthesize _isPerformingInputChanges=__isPerformingInputChanges - In the implementation block
@property (assign,setter=_setSpeed:,nonatomic) double _speed;                                                //@synthesize _speed=__speed - In the implementation block
@property (assign,setter=_setTime:,nonatomic) double _time;                                                  //@synthesize _time=__time - In the implementation block
@property (setter=_setDisplayLink:,nonatomic,retain) CADisplayLink * _displayLink;                           //@synthesize _displayLink=__displayLink - In the implementation block
-(double)targetValue;
-(void)setTargetValue:(double)arg1 ;
-(void)_update;
-(void)_setSpeed:(double)arg1 ;
-(double)_speed;
-(double)outputValue;
-(void)_setDisplayLink:(id)arg1 ;
-(CADisplayLink *)_displayLink;
-(void)_handleDisplayLink:(id)arg1 ;
-(double)_time;
-(double)maximumDeceleration;
-(BOOL)_isPerformingInputChanges;
-(void)_setPerformingInputChanges:(BOOL)arg1 ;
-(void)_inputDidChange;
-(id)outputValueChangeHandler;
-(double)maximumSpeed;
-(void)_setOutputValue:(double)arg1 ;
-(void)_setTime:(double)arg1 ;
-(void)performInputChanges:(/*^block*/id)arg1 ;
-(void)setVisibilityOffset:(double)arg1 ;
-(void)setMaximumSpeed:(double)arg1 ;
-(void)setMaximumDeceleration:(double)arg1 ;
-(void)setOutputValueChangeHandler:(id)arg1 ;
@end

