/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:36 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DECNowPlayingFeedbackProviderProtocol, OS_dispatch_queue, OS_dispatch_source;
@class NSString, NSObject, NSDate;

@interface _DECNowPlayingFeedbackProvider : NSObject {

	BOOL _engagementTimerTimedOut;
	BOOL _userEngaged;
	NSString* _bundleId;
	double _engagementTimeout;
	double _minimumPlayDuration;
	id<_DECNowPlayingFeedbackProviderProtocol> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _predictionEngagementTimer;
	NSObject*<OS_dispatch_source> _minimumPlayDurationTimer;
	NSDate* _mostRecentPredictionPlaybackTime;

}

@property (nonatomic,retain) NSString * bundleId;                                                     //@synthesize bundleId=_bundleId - In the implementation block
@property (assign,nonatomic) double engagementTimeout;                                                //@synthesize engagementTimeout=_engagementTimeout - In the implementation block
@property (assign,nonatomic) double minimumPlayDuration;                                              //@synthesize minimumPlayDuration=_minimumPlayDuration - In the implementation block
@property (assign,nonatomic,__weak) id<_DECNowPlayingFeedbackProviderProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL engagementTimerTimedOut;                                            //@synthesize engagementTimerTimedOut=_engagementTimerTimedOut - In the implementation block
@property (assign,nonatomic) BOOL userEngaged;                                                        //@synthesize userEngaged=_userEngaged - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> predictionEngagementTimer;                 //@synthesize predictionEngagementTimer=_predictionEngagementTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> minimumPlayDurationTimer;                  //@synthesize minimumPlayDurationTimer=_minimumPlayDurationTimer - In the implementation block
@property (nonatomic,retain) NSDate * mostRecentPredictionPlaybackTime;                               //@synthesize mostRecentPredictionPlaybackTime=_mostRecentPredictionPlaybackTime - In the implementation block
-(void)setDelegate:(id<_DECNowPlayingFeedbackProviderProtocol>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<_DECNowPlayingFeedbackProviderProtocol>)delegate;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithBundleId:(id)arg1 engagementTimeout:(double)arg2 minimumPlayDuration:(double)arg3 ;
-(double)engagementTimeout;
-(void)_setupPredictionEngagementTimer:(double)arg1 ;
-(void)_cancelPredictionEngagementTimer;
-(void)_cancelMinimumPlayDurationTimerFire;
-(NSObject*<OS_dispatch_source>)predictionEngagementTimer;
-(void)setPredictionEngagementTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_onPredictionEngagementTimerFire;
-(void)_updateUserEngagement:(BOOL)arg1 ;
-(void)setEngagementTimerTimedOut:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_source>)minimumPlayDurationTimer;
-(void)setMinimumPlayDurationTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_onMinimumPlayDurationTimerFire;
-(void)setUserEngaged:(BOOL)arg1 ;
-(BOOL)userEngaged;
-(BOOL)engagementTimerTimedOut;
-(NSDate *)mostRecentPredictionPlaybackTime;
-(void)setMostRecentPredictionPlaybackTime:(NSDate *)arg1 ;
-(double)minimumPlayDuration;
-(void)_setupMinimumPlayDurationTimer:(double)arg1 ;
-(void)handleLockStateDidChange;
-(void)_handleLockStateDidChange;
-(BOOL)userDidEngage;
-(void)setEngagementTimeout:(double)arg1 ;
-(void)setMinimumPlayDuration:(double)arg1 ;
-(void)setPlaybackState:(unsigned)arg1 ;
@end

