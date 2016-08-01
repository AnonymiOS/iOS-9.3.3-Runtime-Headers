/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:17 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVPlayerController, NSUUID;

@interface AVNowPlayingInfoController : NSObject {

	AVPlayerController* _playerController;
	id _playerControllerCurrentTimeJumpedObserver;
	unsigned _nowPlayingInfoNeedsUpdate : 1;
	unsigned _enabled : 1;
	NSUUID* _identifier;
	unsigned _shouldOwnNowPlayingInfo : 1;

}

@property (nonatomic,retain) AVPlayerController * playerController; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_updateNowPlayingInfoIfNeeded;
-(long long)_handleRemoteCommandEvent:(id)arg1 ;
-(BOOL)_ownsNowPlayingInfo;
-(void)_updateRegisteredRemoteCommandEnabledStatesWithPlayerController:(id)arg1 ;
-(void)_setNowPlayingInfoNeedsUpdate;
-(void)_updateNowPlayingInfo;
@end

