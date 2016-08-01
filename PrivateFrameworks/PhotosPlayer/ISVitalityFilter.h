/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:57 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ISVitalitySettings;
@class NSDate;

@interface ISVitalityFilter : NSObject {

	BOOL _isVisible;
	BOOL _hasTargetVisibilityOffset;
	BOOL _isScrolling;
	BOOL _isDecelerating;
	BOOL _scrubbing;
	BOOL __isPerformingInputChanges;
	BOOL __isPerformingOutputChanges;
	BOOL __outputDidChange;
	id<ISVitalitySettings> _settings;
	double _visibilityOffset;
	double _targetVisibilityOffset;
	NSDate* _estimatedScrollEndDate;
	double _scrubOffset;
	double _playRate;
	/*^block*/id _outputChangeHandler;

}

@property (nonatomic,readonly) id<ISVitalitySettings> settings;                                                //@synthesize settings=_settings - In the implementation block
@property (assign,setter=setVisible:,nonatomic) BOOL isVisible;                                                //@synthesize isVisible=_isVisible - In the implementation block
@property (assign,nonatomic) double visibilityOffset;                                                          //@synthesize visibilityOffset=_visibilityOffset - In the implementation block
@property (assign,nonatomic) BOOL hasTargetVisibilityOffset;                                                   //@synthesize hasTargetVisibilityOffset=_hasTargetVisibilityOffset - In the implementation block
@property (assign,nonatomic) double targetVisibilityOffset;                                                    //@synthesize targetVisibilityOffset=_targetVisibilityOffset - In the implementation block
@property (nonatomic,retain) NSDate * estimatedScrollEndDate;                                                  //@synthesize estimatedScrollEndDate=_estimatedScrollEndDate - In the implementation block
@property (assign,setter=setScrolling:,nonatomic) BOOL isScrolling;                                            //@synthesize isScrolling=_isScrolling - In the implementation block
@property (assign,setter=setDecelerating:,nonatomic) BOOL isDecelerating;                                      //@synthesize isDecelerating=_isDecelerating - In the implementation block
@property (assign,getter=isScrubbing,nonatomic) BOOL scrubbing;                                                //@synthesize scrubbing=_scrubbing - In the implementation block
@property (assign,nonatomic) double scrubOffset;                                                               //@synthesize scrubOffset=_scrubOffset - In the implementation block
@property (assign,nonatomic) double playRate;                                                                  //@synthesize playRate=_playRate - In the implementation block
@property (nonatomic,copy) id outputChangeHandler;                                                             //@synthesize outputChangeHandler=_outputChangeHandler - In the implementation block
@property (assign,setter=_setPerformingInputChanges:,nonatomic) BOOL _isPerformingInputChanges;                //@synthesize _isPerformingInputChanges=__isPerformingInputChanges - In the implementation block
@property (assign,setter=_setPerformingOutputChanges:,nonatomic) BOOL _isPerformingOutputChanges;              //@synthesize _isPerformingOutputChanges=__isPerformingOutputChanges - In the implementation block
@property (assign,setter=_setOutputDidChange:,nonatomic) BOOL _outputDidChange;                                //@synthesize _outputDidChange=__outputDidChange - In the implementation block
-(void)setScrolling:(BOOL)arg1 ;
-(id)init;
-(BOOL)isDecelerating;
-(id<ISVitalitySettings>)settings;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(id)initWithSettings:(id)arg1 ;
-(BOOL)isScrolling;
-(void)setScrubbing:(BOOL)arg1 ;
-(BOOL)isScrubbing;
-(double)playRate;
-(void)setPlayRate:(double)arg1 ;
-(void)inputDidChange;
-(double)visibilityOffset;
-(void)setScrubOffset:(double)arg1 ;
-(void)performOutputChanges:(/*^block*/id)arg1 ;
-(void)setOutputChangeHandler:(id)arg1 ;
-(double)scrubOffset;
-(BOOL)_isPerformingInputChanges;
-(void)_setPerformingInputChanges:(BOOL)arg1 ;
-(void)performInputChanges:(/*^block*/id)arg1 ;
-(void)setVisibilityOffset:(double)arg1 ;
-(BOOL)_isPerformingOutputChanges;
-(void)_setPerformingOutputChanges:(BOOL)arg1 ;
-(BOOL)_outputDidChange;
-(void)_setOutputDidChange:(BOOL)arg1 ;
-(id)outputChangeHandler;
-(void)_invalidateOutput;
-(void)setHasTargetVisibilityOffset:(BOOL)arg1 ;
-(void)setTargetVisibilityOffset:(double)arg1 ;
-(void)setEstimatedScrollEndDate:(NSDate *)arg1 ;
-(void)setDecelerating:(BOOL)arg1 ;
-(BOOL)hasTargetVisibilityOffset;
-(double)targetVisibilityOffset;
-(NSDate *)estimatedScrollEndDate;
@end

