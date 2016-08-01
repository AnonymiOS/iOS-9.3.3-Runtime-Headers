/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:44 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, MPAVRoutingController, AVPlayerItem, MPAVRoute, AVQueuePlayer, NSMutableArray, NSError, NSArray, AVPlayer, NSString;

@interface MPQueuePlayer : NSObject <MPAVRoutingControllerDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	unsigned long long _allowsExternalPlaybackRevisionID;
	MPAVRoutingController* _routingController;
	AVPlayerItem* _currentItem;
	SCD_Struct_MP9 _currentTime;
	BOOL _isExternalPlaybackActive;
	BOOL _pausedForPlaybackQueueTransaction;
	MPAVRoute* _lastPickedRoute;
	/*^block*/id _playbackQueueCommitHandler;
	long long _playbackQueueTransactionCount;
	AVQueuePlayer* _player;
	NSMutableArray* _queuedOperations;
	float _rate;
	float _rateBeforePlaybackQueueTransaction;
	BOOL _routeDidChangeDuringPlaybackQueueTransaction;
	long long _status;
	long long _defaultItemEQPresetType;
	BOOL _outputObscuredDueToInsufficientExternalProtection;
	unsigned long long _usesAudioOnlyModeForExternalPlaybackRevisionID;
	unsigned long long _usesExternalPlaybackWhileExternalScreenIsActiveRevisionID;

}

@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) float playerRate; 
@property (assign,nonatomic) float rate; 
@property (assign,nonatomic) long long actionAtItemEnd; 
@property (assign,getter=isClosedCaptionDisplayEnabled,nonatomic) BOOL closedCaptionDisplayEnabled; 
@property (nonatomic,readonly) BOOL allowsExternalPlayback; 
@property (getter=isExternalPlaybackActive,nonatomic,readonly) BOOL externalPlaybackActive; 
@property (nonatomic,readonly) BOOL usesExternalPlaybackWhileExternalScreenIsActive; 
@property (nonatomic,readonly) BOOL usesAudioOnlyModeForExternalPlayback; 
@property (nonatomic,readonly) long long externalPlaybackType; 
@property (assign,nonatomic) long long defaultItemEQPresetType;                                                  //@synthesize defaultItemEQPresetType=_defaultItemEQPresetType - In the implementation block
@property (nonatomic,readonly) BOOL outputObscuredDueToInsufficientExternalProtection; 
@property (nonatomic,readonly) AVPlayerItem * currentItem; 
@property (nonatomic,copy) id playbackQueueCommitHandler;                                                        //@synthesize playbackQueueCommitHandler=_playbackQueueCommitHandler - In the implementation block
@property (nonatomic,readonly) BOOL isPlaybackQueueTransactionActive; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) AVPlayer * _player; 
@property (nonatomic,readonly) long long _externalProtectionStatus; 
@property (nonatomic,copy) NSString * externalPlaybackVideoGravity; 
@property (nonatomic,readonly) id playerAVAudioSession; 
@property (assign,nonatomic) BOOL disallowsAMRAudio; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)removeItem:(id)arg1 ;
-(NSArray *)items;
-(AVPlayerItem *)currentItem;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)pause;
-(long long)status;
-(BOOL)disallowsAMRAudio;
-(void)setDisallowsAMRAudio:(BOOL)arg1 ;
-(void)seekToTime:(SCD_Struct_MP9)arg1 ;
-(BOOL)allowsExternalPlayback;
-(void)_setStoppingFadeOutDuration:(float)arg1 ;
-(id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setAllowsExternalPlayback:(BOOL)arg1 shouldIgnorePlaybackQueueTransactions:(BOOL)arg2 ;
-(BOOL)isClosedCaptionDisplayEnabled;
-(float)playerRate;
-(BOOL)usesExternalPlaybackWhileExternalScreenIsActive;
-(void)setUsesExternalPlaybackWhileExternalScreenIsActive:(BOOL)arg1 shouldIgnorePlaybackQueueTransactions:(BOOL)arg2 ;
-(void)setClosedCaptionDisplayEnabled:(BOOL)arg1 ;
-(float)_userVolume;
-(void)_setUserVolume:(float)arg1 ;
-(long long)externalPlaybackType;
-(NSString *)externalPlaybackVideoGravity;
-(id)playerAVAudioSession;
-(void)setExternalPlaybackVideoGravity:(NSString *)arg1 ;
-(void)setUsesAudioOnlyModeForExternalPlayback:(BOOL)arg1 shouldIgnorePlaybackQueueTransactions:(BOOL)arg2 ;
-(BOOL)usesAudioOnlyModeForExternalPlayback;
-(BOOL)_CALayerDestinationIsTVOut;
-(void)_setCALayerDestinationIsTVOut:(BOOL)arg1 ;
-(void)_setPreferredLanguageList:(id)arg1 ;
-(void)_setPreparesItemsForPlaybackAsynchronously:(BOOL)arg1 ;
-(long long)actionAtItemEnd;
-(BOOL)_resumePlayback:(double)arg1 error:(id*)arg2 ;
-(void)_setExpectedAssetTypes:(id)arg1 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(BOOL)outputObscuredDueToInsufficientExternalProtection;
-(void)beginPlaybackQueueTransactionAndPause:(BOOL)arg1 ;
-(void)setCurrentPlaybackQueueTransactionDisplayTime:(SCD_Struct_MP9)arg1 ;
-(void)commitPlaybackQueueTransaction;
-(void)insertItem:(id)arg1 afterItem:(id)arg2 ;
-(void)removeAllItems;
-(void)_setWantsVolumeChangesWhenPausedOrInactive:(BOOL)arg1 ;
-(void)_currentItemDidChangeNotification:(id)arg1 ;
-(void)advanceToNextItem;
-(long long)_externalProtectionStatus;
-(void)prepareItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setMediaSelectionCriteria:(id)arg1 forMediaCharacteristic:(id)arg2 ;
-(void)setDefaultItemEQPresetType:(long long)arg1 ;
-(BOOL)isPlaybackQueueTransactionActive;
-(id)playbackQueueCommitHandler;
-(void)setPlaybackQueueCommitHandler:(id)arg1 ;
-(void)_setClientName:(id)arg1 ;
-(void)setRate:(float)arg1 ;
-(SCD_Struct_MP9)currentTime;
-(NSError *)error;
-(void)removeTimeObserver:(id)arg1 ;
-(id)addPeriodicTimeObserverForInterval:(SCD_Struct_MP9)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(float)rate;
-(void)play;
-(void)seekToTime:(SCD_Struct_MP9)arg1 toleranceBefore:(SCD_Struct_MP9)arg2 toleranceAfter:(SCD_Struct_MP9)arg3 ;
-(AVPlayer *)_player;
-(void)setActionAtItemEnd:(long long)arg1 ;
-(void)_setEQPreset:(int)arg1 ;
-(long long)defaultItemEQPresetType;
-(BOOL)isExternalPlaybackActive;
@end

