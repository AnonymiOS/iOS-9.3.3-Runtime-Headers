/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPVideoControllerProtocol;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPAVItem, NSString, MPAVController, UIImage, UIViewController, MPVideoView, MPTransitionController, UINavigationController, NSArray, MPNowPlayingObserver, UIView, NSDate, _UIHostedWindow, UIMovieView, MPMovieAccessLog, MPMovieErrorLog;

@interface UIMoviePlayerController : NSObject {

	id _delegate;
	MPAVItem* _item;
	NSString* _moviePath;
	MPAVController* _player;
	UIImage* _posterImage;
	NSString* _youTubeVideoID;
	UIViewController* _topViewController;
	id<MPVideoControllerProtocol> _activeVideoController;
	MPVideoView* _videoView;
	MPTransitionController* _transitionController;
	long long _transitionCount;
	UINavigationController* _portraitNavigationController;
	CFBagRef _ignoredChangeTypes;
	long long _pendingInterfaceOrientation;
	MPAVItem* _pendingItem;
	MPAVItem* _pendingItemWithDifferentType;
	CGRect _layoutRect;
	long long _lastSetUIInterfaceOrientation;
	long long _interfaceOrientation;
	long long _interfaceOrientationFromDevice;
	NSString* _playbackErrorDescription;
	unsigned long long _autoRotationMask;
	unsigned _displayableParts;
	unsigned _unmodifiedDisplayableParts;
	unsigned _desiredParts;
	unsigned long long _audioControlsStyle;
	unsigned long long _playableContentTypeOverride;
	double _timeWhenResignedActive;
	double _timeToSnapshot;
	NSArray* _closedCaptionData;
	SCD_Struct_UI7 _mpcBitfield;
	MPNowPlayingObserver* _nowPlayingController;

}

@property (assign,nonatomic) unsigned long long options; 
@property (nonatomic,copy) NSString * moviePath; 
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,retain) MPAVItem * item;                                      //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long playableContentType; 
@property (nonatomic,readonly) BOOL isPreparedForPlayback; 
@property (assign,nonatomic) float playbackRate; 
@property (nonatomic,readonly) unsigned long long playbackState; 
@property (assign,nonatomic) BOOL stopAtEnd; 
@property (nonatomic,readonly) double duration; 
@property (assign,nonatomic) double currentTime; 
@property (nonatomic,readonly) BOOL muted; 
@property (nonatomic,readonly) float volume; 
@property (nonatomic,readonly) BOOL areClosedCaptionsAvailable; 
@property (nonatomic,readonly) unsigned long long bufferingState; 
@property (nonatomic,readonly) double playableDuration; 
@property (nonatomic,readonly) double playableStartTime; 
@property (nonatomic,readonly) double playableEndTime; 
@property (nonatomic,readonly) double seekableStartTime; 
@property (nonatomic,readonly) double seekableEndTime; 
@property (assign,nonatomic) BOOL limitReadAhead; 
@property (nonatomic,readonly) NSDate * currentDate; 
@property (assign,nonatomic) BOOL useApplicationAudioSession; 
@property (nonatomic,readonly) long long fileSize; 
@property (nonatomic,copy) NSString * movieTitle; 
@property (nonatomic,copy) NSString * movieSubtitle; 
@property (assign,nonatomic) BOOL useHostedWindowWhenFullscreen; 
@property (nonatomic,readonly) _UIHostedWindow * hostedWindow; 
@property (nonatomic,readonly) unsigned hostedWindowContextID; 
@property (nonatomic,readonly) BOOL videoOutActive; 
@property (nonatomic,readonly) BOOL canContinuePlayingInBackground; 
@property (nonatomic,readonly) BOOL canContinuePlayingWhenLocked; 
@property (nonatomic,copy) NSString * youTubeVideoID;                              //@synthesize youTubeVideoID=_youTubeVideoID - In the implementation block
@property (nonatomic,retain) NSString * audioSessionModeOverride; 
@property (nonatomic,readonly) UIMovieView * movieView; 
@property (assign,nonatomic) unsigned long long audioControlsStyle;                //@synthesize audioControlsStyle=_audioControlsStyle - In the implementation block
@property (nonatomic,copy) NSString * playbackErrorDescription;                    //@synthesize playbackErrorDescription=_playbackErrorDescription - In the implementation block
@property (nonatomic,readonly) CGSize naturalSize; 
@property (assign,nonatomic) BOOL disallowsVideoOut; 
@property (nonatomic,retain) UIImage * posterImage; 
@property (nonatomic,retain) UIImage * backgroundPlaceholderImage; 
@property (assign,getter=isFullscreen,nonatomic) BOOL fullscreen; 
@property (nonatomic,readonly) UIView * fullscreenView; 
@property (assign,nonatomic) BOOL closedCaptioningEnabled; 
@property (assign,nonatomic) BOOL disableAlternateTextTrackRendering; 
@property (nonatomic,readonly) UIView * alternateTextTrackView; 
@property (nonatomic,readonly) MPMovieAccessLog * accessLog; 
@property (nonatomic,readonly) MPMovieErrorLog * errorLog; 
@property (assign,nonatomic) BOOL useLegacyControls; 
@property (assign,nonatomic) BOOL alwaysAllowHidingControlsOverlay; 
+(Class)preferredWindowClass;
+(void)allInstancesResignActive;
+(void)allInstancesResignActiveForced:(BOOL)arg1 ;
+(CGSize)fillSizeForMovieBounds:(CGRect)arg1 movieNaturalSize:(CGSize)arg2 interfaceOrientation:(long long)arg3 destinationTVOut:(BOOL)arg4 ;
-(id)initWithPlayerSize:(CGSize)arg1 isFullScreen:(BOOL)arg2 ;
-(id)initWithPlayerSize:(CGSize)arg1 isFullScreen:(BOOL)arg2 options:(unsigned long long)arg3 ;
-(void)layoutUIInRect:(CGRect)arg1 fullScreen:(BOOL)arg2 ;
-(id)playerView;
-(BOOL)isFullScreen;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(UIView *)view;
-(double)duration;
-(long long)interfaceOrientation;
-(MPAVItem *)item;
-(void)stop;
-(id)backgroundView;
-(void)setItem:(MPAVItem *)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
-(void)pause;
-(CGSize)naturalSize;
-(long long)fileSize;
-(void)setFullscreen:(BOOL)arg1 ;
-(double)playableDuration;
-(void)setStopAtEnd:(BOOL)arg1 ;
-(void)_isExternalPlaybackActiveDidChangeNotification:(id)arg1 ;
-(void)_itemReadyToPlayNotification:(id)arg1 ;
-(void)_itemPlaybackDidEndNotification:(id)arg1 ;
-(void)_rateDidChangeNotification:(id)arg1 ;
-(void)_timedMetadataAvailableNotification:(id)arg1 ;
-(void)_timeDidJumpNotification:(id)arg1 ;
-(void)_moviePlayerWillBecomeActiveNotification:(id)arg1 ;
-(void)_moviePlayerDidBecomeActiveNotification:(id)arg1 ;
-(void)_movieTypeAvailableNotification:(id)arg1 ;
-(void)_videoViewPathWillChangeNotification:(id)arg1 ;
-(void)_simpleRemoteNotification:(id)arg1 ;
-(unsigned long long)bufferingState;
-(void)_ensureActive;
-(NSString *)audioSessionModeOverride;
-(NSString *)movieSubtitle;
-(NSString *)movieTitle;
-(void)setAudioSessionModeOverride:(NSString *)arg1 ;
-(BOOL)alwaysAllowHidingControlsOverlay;
-(void)setAlwaysAllowHidingControlsOverlay:(BOOL)arg1 ;
-(void)setMovieSubtitle:(NSString *)arg1 ;
-(void)setMovieTitle:(NSString *)arg1 ;
-(void)setUseHostedWindowWhenFullscreen:(BOOL)arg1 ;
-(void)setInlinePlaybackUsesTVOut:(BOOL)arg1 ;
-(_UIHostedWindow *)hostedWindow;
-(unsigned)hostedWindowContextID;
-(MPMovieErrorLog *)errorLog;
-(void)setUseApplicationAudioSession:(BOOL)arg1 ;
-(BOOL)videoControllerShouldAutohide:(id)arg1 ;
-(void)videoControllerWillEnterFullscreen:(id)arg1 ;
-(void)videoControllerDidEnterFullscreen:(id)arg1 ;
-(void)videoControllerDidExitFullscreen:(id)arg1 ;
-(void)viewControllerRequestsExit:(id)arg1 reason:(long long)arg2 ;
-(BOOL)videoController:(id)arg1 tappedButtonPart:(unsigned long long)arg2 ;
-(void)videoController:(id)arg1 willShowOverlayWithDuration:(double)arg2 ;
-(void)videoControllerDidShowOverlay:(id)arg1 ;
-(void)videoController:(id)arg1 willHideOverlayWithDuration:(double)arg2 ;
-(void)videoControllerDidHideOverlay:(id)arg1 ;
-(BOOL)useApplicationAudioSession;
-(void)delayedDebugSetup;
-(void)_willEnterForegroundNotification:(id)arg1 ;
-(void)_didEnterBackgroundNotification:(id)arg1 ;
-(void)_itemChangedNotification:(id)arg1 ;
-(void)_serverDeathNotification:(id)arg1 ;
-(void)_validityChangedNotification:(id)arg1 ;
-(void)_tickNotification:(id)arg1 ;
-(void)_alternateTextTrackWillChangeNotification:(id)arg1 ;
-(void)_alternateTextTrackDidOutputNotification:(id)arg1 ;
-(void)debugSetup;
-(id)initWithPlayerSize:(CGSize)arg1 options:(unsigned long long)arg2 ;
-(void)_unregisterForNotifications;
-(void)_endDeviceOrientationNotifications;
-(void)tearDownUI;
-(void)_updateForStreamingOptions;
-(BOOL)videoOutActive;
-(BOOL)disableAlternateTextTrackRendering;
-(void)setDisableAlternateTextTrackRendering:(BOOL)arg1 ;
-(BOOL)limitReadAhead;
-(void)setLimitReadAhead:(BOOL)arg1 ;
-(UIMovieView *)movieView;
-(id)_topViewController;
-(BOOL)disallowsVideoOut;
-(id)_activeVideoController;
-(void)setAttemptAutoPlayWhenControlsHidden:(BOOL)arg1 ;
-(void)setClosedCaptions:(id)arg1 ;
-(BOOL)closedCaptioningEnabled;
-(void)setClosedCaptioningEnabled:(BOOL)arg1 ;
-(void)_updatePlayableContentTypeOverride;
-(unsigned long long)playableContentType;
-(void)setCurrentTime:(double)arg1 timeSnapOption:(unsigned long long)arg2 ;
-(NSDate *)currentDate;
-(BOOL)seekToDate:(id)arg1 ;
-(BOOL)stopAtEnd;
-(BOOL)muted;
-(void)_prepareAndSetupUI;
-(id)_portraitNavigationController:(BOOL)arg1 ;
-(void)_finishInitializeActiveViewController:(id)arg1 forTransition:(BOOL)arg2 ;
-(void)setPosterImage:(UIImage *)arg1 ;
-(void)_initializeVideoViewController:(id)arg1 orientation:(long long)arg2 ;
-(void)setCanAnimateControlsOverlay:(BOOL)arg1 ;
-(unsigned long long)_convertedPartsMask:(unsigned)arg1 ;
-(unsigned long long)_convertedVisiblePartsMask:(unsigned)arg1 ;
-(void)_updateEnabledParts;
-(void)setPlaybackErrorDescription:(NSString *)arg1 ;
-(void)_commitFinishInitializeActiveViewController:(id)arg1 animate:(BOOL)arg2 ;
-(void)portraitDoneButtonAction:(id)arg1 ;
-(void)_reconfigurePortraitNavigationItem:(id)arg1 time:(double)arg2 animate:(BOOL)arg3 ;
-(void)portraitScaleButtonAction:(id)arg1 ;
-(BOOL)_noteStoppedIgnoringChangeType:(unsigned long long)arg1 ;
-(void)setItem:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)setOrientation:(long long)arg1 animated:(BOOL)arg2 forced:(BOOL)arg3 ;
-(void)endIgnoringChangeTypes:(unsigned long long)arg1 ;
-(void)endTransition;
-(void)beginIgnoringChangeTypes:(unsigned long long)arg1 ;
-(void)beginTransition;
-(void)_transitionFinished:(id)arg1 ;
-(id)newViewControllerForItem:(id)arg1 interfaceOrientation:(long long)arg2 reusingController:(id)arg3 ;
-(void)_setActiveViewController:(id)arg1 forTransition:(BOOL)arg2 ;
-(BOOL)_shouldIgnoreChangeType:(unsigned long long)arg1 ;
-(void)_reloadForTransitionFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 animated:(BOOL)arg3 ;
-(void)_beginDeviceOrientationNotifications;
-(void)setDisplayableMovieParts:(unsigned)arg1 animated:(BOOL)arg2 ;
-(void)_prepareAndSetupUIForClient;
-(void)setBackgroundPlaceholderImage:(UIImage *)arg1 ;
-(UIImage *)backgroundPlaceholderImage;
-(void)_autoRotateToCurrentOrientationAnimated:(BOOL)arg1 ;
-(UIView *)fullscreenView;
-(void)resignActive;
-(int)_exitReasonForMPViewControllerExitReason:(long long)arg1 ;
-(void)_exitPlayer:(int)arg1 ;
-(void)_pausePlaybackForNotification:(id)arg1 ;
-(void)_setTVOutEnabled:(BOOL)arg1 ;
-(void)_autoRotateToInterfaceOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_volumeDidChangeNotification:(id)arg1 ;
-(void)_tvOutCapabilityChanged:(id)arg1 ;
-(void)_willSuspendNotification:(id)arg1 ;
-(void)_willBeginSuspendAnimationNotification:(id)arg1 ;
-(void)_willResignNotification:(id)arg1 ;
-(void)_itemDurationAvailableNotification:(id)arg1 ;
-(void)_alternateTracksAvailableNotification:(id)arg1 ;
-(void)_deviceOrientationChanged:(id)arg1 ;
-(BOOL)_canAutoRotateToInterfaceOrientation:(long long)arg1 ;
-(id)initWithPlayerSize:(CGSize)arg1 ;
-(void)unlockMoviePlaybackResources;
-(UIView *)alternateTextTrackView;
-(BOOL)canContinuePlayingInBackground;
-(BOOL)canContinuePlayingWhenLocked;
-(NSString *)moviePath;
-(void)setMoviePath:(NSString *)arg1 ;
-(void)setDisallowsVideoOut:(BOOL)arg1 ;
-(void)setManagesStatusBar:(BOOL)arg1 ;
-(BOOL)useHostedWindowWhenFullscreen;
-(void)setPlayableContentType:(unsigned long long)arg1 ;
-(BOOL)isPreparedForPlayback;
-(void)prepareForPlayback;
-(double)playableStartTime;
-(double)playableEndTime;
-(double)seekableStartTime;
-(double)seekableEndTime;
-(BOOL)areClosedCaptionsAvailable;
-(void)viewController:(id)arg1 beginIgnoringChangeTypes:(unsigned long long)arg2 ;
-(void)viewController:(id)arg1 endIgnoringChangeType:(unsigned long long)arg2 ;
-(void)performTransition:(id)arg1 ;
-(BOOL)setInterfaceOrientation:(long long)arg1 animated:(BOOL)arg2 forced:(BOOL)arg3 ;
-(unsigned long long)autoRotationMask;
-(void)setAutoRotationMask:(unsigned long long)arg1 ;
-(void)setDesiredMovieParts:(unsigned)arg1 animated:(BOOL)arg2 ;
-(void)setDisplayable:(BOOL)arg1 movieParts:(unsigned)arg2 animated:(BOOL)arg3 ;
-(void)setControlsOverlayVisible:(BOOL)arg1 disableAutohide:(BOOL)arg2 animate:(BOOL)arg3 ;
-(void)setAudioControlsStyle:(unsigned long long)arg1 ;
-(void)layoutUIInRect:(CGRect)arg1 ;
-(CGRect)moviePlaceholderImageRectForMovieWithAspectRatio:(float)arg1 ;
-(void)prepareAndSetupUI;
-(void)beginExternalTransformation;
-(void)endExternalTransformation;
-(void)setYouTubeVideoID:(NSString *)arg1 ;
-(BOOL)useLegacyControls;
-(void)setUseLegacyControls:(BOOL)arg1 ;
-(void)resignActiveAndEndAirPlay;
-(void)viewControllerFailedToPlay:(id)arg1 withError:(id)arg2 ;
-(void)videoControllerWillExitFullscreen:(id)arg1 reason:(long long)arg2 ;
-(void)videoControllerDidCreateFullscreenView:(id)arg1 ;
-(CGRect)videoControllerFrameAfterFullscreenExit:(id)arg1 ;
-(void)videoControllerDidBeginScrubbing:(id)arg1 ;
-(void)videoControllerDidEndScrubbing:(id)arg1 ;
-(void)_mutedDidChangeNotification:(id)arg1 ;
-(id)_backgroundPlaceholderView;
-(unsigned long long)audioControlsStyle;
-(NSString *)playbackErrorDescription;
-(NSString *)youTubeVideoID;
-(void)_bufferingStateChangedNotification:(id)arg1 ;
-(void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isFullscreen;
-(void)_playbackStateChanged:(id)arg1 ;
-(MPMovieAccessLog *)accessLog;
-(void)setCurrentTime:(double)arg1 ;
-(double)currentTime;
-(UIImage *)posterImage;
-(void)play;
-(unsigned long long)playbackState;
-(void)_registerForNotifications;
-(float)playbackRate;
-(void)setPlaybackRate:(float)arg1 ;
-(void)setAutoPlayWhenLikelyToKeepUp:(BOOL)arg1 ;
-(void)setCanShowControlsOverlay:(BOOL)arg1 ;
-(void)setAllowsDetailScrubbing:(BOOL)arg1 ;
-(void)setAllowsWirelessPlayback:(BOOL)arg1 ;
-(float)volume;
@end

