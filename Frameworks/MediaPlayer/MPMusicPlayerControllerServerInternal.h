/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:44 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPServerObject.h>
#import <libobjc.A.dylib/MPMusicPlayerController.h>

@protocol MPMusicPlayerControllerServerDelegate;
@class MPMusicPlayerControllerServer, NSMutableArray, NSMutableDictionary, MPVideoViewController;

@interface MPMusicPlayerControllerServerInternal : MPServerObject <MPMusicPlayerController> {

	id<MPMusicPlayerControllerServerDelegate> _delegate;
	MPMusicPlayerControllerServer* _musicPlayerServer;
	int _activeClientPID;
	NSMutableArray* _clientPorts;
	NSMutableDictionary* _clientPortsForPIDs;
	NSMutableDictionary* _clientStateForPIDs;
	MPVideoViewController* _videoViewController;
	unsigned _queuePrepared : 1;

}
+(BOOL)_canSeedGeniusWithItem:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)stop;
-(id)numberOfItems;
-(void)pause;
-(void)setRepeatMode:(id)arg1 ;
-(void)prepareToPlay;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)endSeeking;
-(void)skipToNextItem;
-(void)skipToBeginning;
-(void)skipToPreviousItem;
-(id)currentPlaybackRate;
-(void)setCurrentPlaybackRate:(id)arg1 ;
-(void)_itemPlaybackDidEndNotification:(id)arg1 ;
-(void)_endPlayback;
-(void)_tvOutCapabilityDidChangeNotification:(id)arg1 ;
-(id)nowPlayingItem;
-(void)setQueueWithQuery:(id)arg1 firstItem:(id)arg2 ;
-(void)setShuffleMode:(id)arg1 ;
-(id)isGeniusAvailable;
-(id)isGeniusAvailableForSeedItems:(id)arg1 ;
-(id)setQueueWithSeedItems:(id)arg1 ;
-(id)nowPlayingItemAtIndex:(id)arg1 ;
-(void)pauseWithFadeoutDuration:(id)arg1 ;
-(id)allowsBackgroundVideo;
-(void)setAllowsBackgroundVideo:(id)arg1 ;
-(id)indexOfNowPlayingItem;
-(id)unshuffledIndexOfNowPlayingItem;
-(id)isNowPlayingItemFromGeniusMix;
-(id)currentChapterIndex;
-(void)setCurrentChapterIndex:(id)arg1 ;
-(void)setQueueWithGeniusMixPlaylist:(id)arg1 ;
-(void)setQueueWithRadioStation:(id)arg1 ;
-(id)setQueueWithStoreIDs:(id)arg1 ;
-(id)userQueueModificationsDisabled;
-(void)setUserQueueModificationsDisabled:(id)arg1 ;
-(id)skipInDirection:(id)arg1 ;
-(id)serverIsAlive;
-(void)setUseApplicationSpecificQueue:(id)arg1 ;
-(void)registerForServerDiedNotifications;
-(void)setQueueWithQuery:(id)arg1 ;
-(void)playItem:(id)arg1 ;
-(id)queueAsQuery;
-(id)queueAsRadioStation;
-(void)prepareQueueForPlayback;
-(void)skipToBeginningOrPreviousItem;
-(void)skipToNextChapter;
-(void)skipToPreviousChapter;
-(id)_avController;
-(void)_tearDownVideoView;
-(void)_prepareQueueIfNecessary;
-(void)_setQueueWithQuery:(id)arg1 ;
-(id)_clientState;
-(BOOL)useApplicationSpecificQueue;
-(void)_clientPortInvalidated:(id)arg1 ;
-(BOOL)_clientPIDHasPermissionToPlay:(int)arg1 ;
-(void)_endPlaybackForClientIfNecessary:(int)arg1 ;
-(id)_avControllerForClientPID:(int)arg1 ;
-(void)_updateVideoView;
-(void)_clientPortInvalidatedNotification:(id)arg1 ;
-(void)_applicationStateChangedNotification:(id)arg1 ;
-(id)_clientStateForPID:(int)arg1 ;
-(BOOL)_currentClientPIDHasPermissionToPlay;
-(void)_registerClientPort:(unsigned)arg1 forProcessID:(int)arg2 hasAudioBackgroundMode:(BOOL)arg3 ;
-(void)_setQueuePrepared:(BOOL)arg1 ;
-(void)setQueueWithItemCollection:(id)arg1 ;
-(void)setNowPlayingItem:(id)arg1 ;
-(unsigned long long)_numberOfItems;
-(void)play;
-(id)currentPlaybackTime;
-(void)setCurrentPlaybackTime:(id)arg1 ;
-(id)playbackState;
-(id)playbackSpeed;
-(id)shuffleMode;
-(void)setPlaybackSpeed:(id)arg1 ;
-(void)_playbackStateDidChangeNotification:(id)arg1 ;
-(id)repeatMode;
-(void)_itemDidChangeNotification:(id)arg1 ;
-(void)shuffle;
@end

