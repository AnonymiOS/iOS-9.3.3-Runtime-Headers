/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:58 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MusicRemoteControllerDelegate;
#import <FuseUI/FuseUI-Structs.h>
@class NSString, MusicAVPlayer;

@interface MusicRemoteController : NSObject {

	BOOL _hasPlayCatalogContentCapability;
	BOOL _isObservingAddToLibraryCommand;
	BOOL _isObservingLikeCommand;
	BOOL _isObservingDislikeCommand;
	BOOL _isObservingBookmarkCommand;
	BOOL _isObservingShuffleRepeatCommands;
	NSString* _lastReloadPlaybackContextID;
	id<MusicRemoteControllerDelegate> _delegate;
	MusicAVPlayer* _player;

}

@property (assign,nonatomic,__weak) id<MusicRemoteControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MusicAVPlayer * player;                                       //@synthesize player=_player - In the implementation block
-(void)setDelegate:(id<MusicRemoteControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<MusicRemoteControllerDelegate>)delegate;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
-(MusicAVPlayer *)player;
-(id)initWithPlayer:(id)arg1 ;
-(void)_prominentRadioStationDidChangeNotification:(id)arg1 ;
-(void)_musicDefaultsDidChangeNotification:(id)arg1 ;
-(void)_subscriptionStatusDidChangeNotification:(id)arg1 ;
-(void)_registerPlayerNotifications;
-(void)_unregisterPlayerNotifications;
-(void)stopRespondingToRemoteControlEvents;
-(void)_registerPublicCommands;
-(void)_registerPrivateCommands;
-(void)_cloudLibraryEnabledDidChangeNotification:(id)arg1 ;
-(void)_updateRepeatShuffleCommands;
-(void)_updateUserCapabilities;
-(void)_updateProminentRadioStationAvailability;
-(void)_updateSupportedCommandsForItem:(id)arg1 ;
-(void)_unregisterAllCommands;
-(id)_currentFeederContextID;
-(void)_getLibraryAddAction:(id*)arg1 removeAction:(id*)arg2 forItem:(id)arg3 ;
-(void)_reloadPlayerWithPlaybackContext:(id)arg1 fromCommandEvent:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(long long)_handlePauseCommand:(id)arg1 ;
-(long long)_handlePlayCommand:(id)arg1 ;
-(long long)_handleStopCommand:(id)arg1 ;
-(long long)_handleTogglePlayPauseCommand:(id)arg1 ;
-(long long)_handleNextTrackCommand:(id)arg1 ;
-(long long)_handlePreviousTrackCommand:(id)arg1 ;
-(long long)_handleSeekForwardCommand:(id)arg1 ;
-(long long)_handleSeekBackwardCommand:(id)arg1 ;
-(long long)_handleSkipForwardCommand:(id)arg1 ;
-(long long)_handleSkipBackwardCommand:(id)arg1 ;
-(long long)_handleRatingCommand:(id)arg1 ;
-(long long)_handleChangePlaybackRateCommand:(id)arg1 ;
-(long long)_handleChangePlaybackPositionCommand:(id)arg1 ;
-(long long)_handleSpecialSeekForwardCommand:(id)arg1 ;
-(long long)_handleSpecialSeekBackwardCommand:(id)arg1 ;
-(long long)_handleAdvanceShuffleModeCommand:(id)arg1 ;
-(long long)_handleAdvanceRepeatModeCommand:(id)arg1 ;
-(long long)_handleBuyTrackCommand:(id)arg1 ;
-(long long)_handleCancelDownloadCommand:(id)arg1 ;
-(long long)_handleCreateRadioStationCommand:(id)arg1 ;
-(void)_handleSetPlaybackQueueCommand:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleAddItemToLibrary:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleInsertIntoPlaybackQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_nowPlayingItemDidChangeNotification:(id)arg1 ;
-(void)_playbackStateDidChangeNotification:(id)arg1 ;
-(void)_playerRepeatTypeDidChangeNotification:(id)arg1 ;
-(void)_playerShuffleTypeDidChangeNotification:(id)arg1 ;
-(void)_playerContentsDidChangeNotification:(id)arg1 ;
-(void)_avItemStoreIDDidChangeNotification:(id)arg1 ;
-(void)_buyOffersDidChangeNotification:(id)arg1 ;
-(void)_isInWishListDidChangeNotification:(id)arg1 ;
-(void)_likedStateDidChangeNotification:(id)arg1 ;
-(void)_numberOfRadioStationSkipsAvailableDidChangeNotification:(id)arg1 ;
-(long long)_handleChangeRepeatModeCommand:(id)arg1 ;
-(long long)_handleChangeShuffleModeCommand:(id)arg1 ;
-(long long)_handleLikeCommand:(id)arg1 ;
-(long long)_handleDislikeCommand:(id)arg1 ;
-(long long)_handleBookmarkCommand:(id)arg1 ;
-(long long)_handleAddNowPlayingItemToLibraryCommand:(id)arg1 ;
-(void)beginRespondingToRemoteControlEvents;
-(CFArrayRef)copySupportedCommands;
-(void)_isBannedDidChangeNotification:(id)arg1 ;
@end

