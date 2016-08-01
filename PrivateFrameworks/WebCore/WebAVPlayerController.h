/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:36 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/AVPlayerViewControllerDelegate.h>

@class WebAVMediaSelectionOption, AVPlayerController, NSArray, AVValueTiming, NSString;

@interface WebAVPlayerController : NSObject <AVPlayerViewControllerDelegate> {

	WebAVMediaSelectionOption* _currentAudioMediaSelectionOption;
	WebAVMediaSelectionOption* _currentLegibleMediaSelectionOption;
	BOOL _pictureInPictureInterrupted;
	BOOL _canScanBackward;
	BOOL _canPlay;
	BOOL _canPause;
	BOOL _canTogglePlayback;
	BOOL _canSeek;
	BOOL _hasEnabledAudio;
	BOOL _hasEnabledVideo;
	BOOL _externalPlaybackActive;
	BOOL _allowsExternalPlayback;
	AVPlayerController* _playerControllerProxy;
	WebVideoFullscreenModel* _delegate;
	WebVideoFullscreenInterfaceAVKit* _fullscreenInterface;
	double _rate;
	double _contentDuration;
	double _minTime;
	double _maxTime;
	double _contentDurationWithinEndTimes;
	NSArray* _loadedTimeRanges;
	long long _status;
	AVValueTiming* _timing;
	NSArray* _seekableTimeRanges;
	NSArray* _audioMediaSelectionOptions;
	NSArray* _legibleMediaSelectionOptions;
	long long _externalPlaybackType;
	NSString* _externalPlaybackAirPlayDeviceLocalizedName;
	CGSize _contentDimensions;

}

@property (retain) AVPlayerController * playerControllerProxy;                                   //@synthesize playerControllerProxy=_playerControllerProxy - In the implementation block
@property (assign) WebVideoFullscreenModel* delegate;                                            //@synthesize delegate=_delegate - In the implementation block
@property (assign) WebVideoFullscreenInterfaceAVKit* fullscreenInterface;                        //@synthesize fullscreenInterface=_fullscreenInterface - In the implementation block
@property (readonly) BOOL canScanForward; 
@property (assign) BOOL canScanBackward;                                                         //@synthesize canScanBackward=_canScanBackward - In the implementation block
@property (readonly) BOOL canSeekToBeginning; 
@property (readonly) BOOL canSeekToEnd; 
@property (assign) BOOL canPlay;                                                                 //@synthesize canPlay=_canPlay - In the implementation block
@property (getter=isPlaying) BOOL playing; 
@property (assign) BOOL canPause;                                                                //@synthesize canPause=_canPause - In the implementation block
@property (assign) BOOL canTogglePlayback;                                                       //@synthesize canTogglePlayback=_canTogglePlayback - In the implementation block
@property (assign) double rate;                                                                  //@synthesize rate=_rate - In the implementation block
@property (assign) BOOL canSeek;                                                                 //@synthesize canSeek=_canSeek - In the implementation block
@property (assign) double contentDuration;                                                       //@synthesize contentDuration=_contentDuration - In the implementation block
@property (assign) CGSize contentDimensions;                                                     //@synthesize contentDimensions=_contentDimensions - In the implementation block
@property (assign) BOOL hasEnabledAudio;                                                         //@synthesize hasEnabledAudio=_hasEnabledAudio - In the implementation block
@property (assign) BOOL hasEnabledVideo;                                                         //@synthesize hasEnabledVideo=_hasEnabledVideo - In the implementation block
@property (assign) double minTime;                                                               //@synthesize minTime=_minTime - In the implementation block
@property (assign) double maxTime;                                                               //@synthesize maxTime=_maxTime - In the implementation block
@property (assign) double contentDurationWithinEndTimes;                                         //@synthesize contentDurationWithinEndTimes=_contentDurationWithinEndTimes - In the implementation block
@property (retain) NSArray * loadedTimeRanges;                                                   //@synthesize loadedTimeRanges=_loadedTimeRanges - In the implementation block
@property (assign) long long status;                                                             //@synthesize status=_status - In the implementation block
@property (retain) AVValueTiming * timing;                                                       //@synthesize timing=_timing - In the implementation block
@property (retain) NSArray * seekableTimeRanges;                                                 //@synthesize seekableTimeRanges=_seekableTimeRanges - In the implementation block
@property (readonly) BOOL hasMediaSelectionOptions; 
@property (readonly) BOOL hasAudioMediaSelectionOptions; 
@property (retain) NSArray * audioMediaSelectionOptions;                                         //@synthesize audioMediaSelectionOptions=_audioMediaSelectionOptions - In the implementation block
@property (retain) WebAVMediaSelectionOption * currentAudioMediaSelectionOption; 
@property (readonly) BOOL hasLegibleMediaSelectionOptions; 
@property (retain) NSArray * legibleMediaSelectionOptions;                                       //@synthesize legibleMediaSelectionOptions=_legibleMediaSelectionOptions - In the implementation block
@property (retain) WebAVMediaSelectionOption * currentLegibleMediaSelectionOption; 
@property (getter=isPlayingOnExternalScreen,readonly) BOOL playingOnExternalScreen; 
@property (getter=isExternalPlaybackActive) BOOL externalPlaybackActive;                         //@synthesize externalPlaybackActive=_externalPlaybackActive - In the implementation block
@property (assign) long long externalPlaybackType;                                               //@synthesize externalPlaybackType=_externalPlaybackType - In the implementation block
@property (retain) NSString * externalPlaybackAirPlayDeviceLocalizedName;                        //@synthesize externalPlaybackAirPlayDeviceLocalizedName=_externalPlaybackAirPlayDeviceLocalizedName - In the implementation block
@property (assign) BOOL allowsExternalPlayback;                                                  //@synthesize allowsExternalPlayback=_allowsExternalPlayback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingPlaying;
+(id)keyPathsForValuesAffectingHasLiveStreamingContent;
+(id)keyPathsForValuesAffectingCanScanForward;
+(id)keyPathsForValuesAffectingCanSeekToBeginning;
+(id)keyPathsForValuesAffectingCanSeekToEnd;
+(id)keyPathsForValuesAffectingHasMediaSelectionOptions;
+(id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+(id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;
+(id)keyPathsForValuesAffectingPlayingOnExternalScreen;
-(void)setLoadedTimeRanges:(NSArray *)arg1 ;
-(void)setCanPause:(BOOL)arg1 ;
-(BOOL)canPause;
-(void)setPlayerControllerProxy:(AVPlayerController *)arg1 ;
-(void)setMaxTime:(double)arg1 ;
-(void)setContentDurationWithinEndTimes:(double)arg1 ;
-(void)setCanPlay:(BOOL)arg1 ;
-(void)setCanTogglePlayback:(BOOL)arg1 ;
-(void)setHasEnabledAudio:(BOOL)arg1 ;
-(void)setCanSeek:(BOOL)arg1 ;
-(void)setMinTime:(double)arg1 ;
-(void)setHasEnabledVideo:(BOOL)arg1 ;
-(void)setContentDimensions:(CGSize)arg1 ;
-(void)setSeekableTimeRanges:(NSArray *)arg1 ;
-(void)setCanScanBackward:(BOOL)arg1 ;
-(void)setAudioMediaSelectionOptions:(NSArray *)arg1 ;
-(void)setCurrentAudioMediaSelectionOption:(WebAVMediaSelectionOption *)arg1 ;
-(void)setLegibleMediaSelectionOptions:(NSArray *)arg1 ;
-(void)setCurrentLegibleMediaSelectionOption:(WebAVMediaSelectionOption *)arg1 ;
-(AVPlayerController *)playerControllerProxy;
-(WebVideoFullscreenInterfaceAVKit*)fullscreenInterface;
-(void)togglePlayback:(id)arg1 ;
-(BOOL)canPlay;
-(void)seekToBeginning:(id)arg1 ;
-(void)seekToEnd:(id)arg1 ;
-(BOOL)hasAudioMediaSelectionOptions;
-(BOOL)hasLegibleMediaSelectionOptions;
-(NSArray *)audioMediaSelectionOptions;
-(NSArray *)legibleMediaSelectionOptions;
-(void)playerViewControllerWillStartPictureInPicture:(id)arg1 ;
-(void)playerViewControllerDidStartPictureInPicture:(id)arg1 ;
-(void)playerViewControllerWillStopPictureInPicture:(id)arg1 ;
-(void)playerViewControllerDidStopPictureInPicture:(id)arg1 ;
-(void)playerViewController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)playerViewControllerFailedToStartPictureInPicture:(id)arg1 withError:(id)arg2 ;
-(BOOL)playerViewController:(id)arg1 shouldExitFullScreenWithReason:(long long)arg2 ;
-(void)togglePlaybackEvenWhenInBackground:(id)arg1 ;
-(void)beginScrubbing:(id)arg1 ;
-(void)endScrubbing:(id)arg1 ;
-(BOOL)hasLiveStreamingContent;
-(void)skipBackwardThirtySeconds:(id)arg1 ;
-(void)gotoEndOfSeekableRanges:(id)arg1 ;
-(BOOL)canScanForward;
-(void)beginScanningForward:(id)arg1 ;
-(void)endScanningForward:(id)arg1 ;
-(void)beginScanningBackward:(id)arg1 ;
-(void)endScanningBackward:(id)arg1 ;
-(BOOL)canSeekToBeginning;
-(void)seekChapterBackward:(id)arg1 ;
-(BOOL)canSeekToEnd;
-(void)seekChapterForward:(id)arg1 ;
-(BOOL)hasMediaSelectionOptions;
-(WebAVMediaSelectionOption *)currentAudioMediaSelectionOption;
-(WebAVMediaSelectionOption *)currentLegibleMediaSelectionOption;
-(BOOL)isPlayingOnExternalScreen;
-(BOOL)isPictureInPictureInterrupted;
-(void)setPictureInPictureInterrupted:(BOOL)arg1 ;
-(void)setFullscreenInterface:(WebVideoFullscreenInterfaceAVKit*)arg1 ;
-(BOOL)canScanBackward;
-(BOOL)canTogglePlayback;
-(CGSize)contentDimensions;
-(double)minTime;
-(double)contentDurationWithinEndTimes;
-(void)setExternalPlaybackActive:(BOOL)arg1 ;
-(void)setExternalPlaybackType:(long long)arg1 ;
-(NSString *)externalPlaybackAirPlayDeviceLocalizedName;
-(void)setExternalPlaybackAirPlayDeviceLocalizedName:(NSString *)arg1 ;
-(void)setDelegate:(WebVideoFullscreenModel*)arg1 ;
-(void)dealloc;
-(id)init;
-(WebVideoFullscreenModel*)delegate;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(BOOL)hasEnabledVideo;
-(BOOL)hasEnabledAudio;
-(NSArray *)loadedTimeRanges;
-(NSArray *)seekableTimeRanges;
-(void)seekToTime:(double)arg1 ;
-(BOOL)allowsExternalPlayback;
-(double)maxTime;
-(long long)externalPlaybackType;
-(BOOL)isPictureInPicturePossible;
-(void)setRate:(double)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
-(double)rate;
-(id)player;
-(void)setAllowsExternalPlayback:(BOOL)arg1 ;
-(BOOL)isPlaying;
-(void)resetState;
-(BOOL)isExternalPlaybackActive;
-(void)pause:(id)arg1 ;
-(double)contentDuration;
-(void)setContentDuration:(double)arg1 ;
-(AVValueTiming *)timing;
-(void)setTiming:(AVValueTiming *)arg1 ;
-(BOOL)canSeek;
-(void)play:(id)arg1 ;
@end

