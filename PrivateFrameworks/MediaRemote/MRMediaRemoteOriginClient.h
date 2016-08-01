/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:11 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaRemote/MediaRemote-Structs.h>
@class NSMutableDictionary, NSArray, NSDictionary, MRNowPlayingArtwork;

@interface MRMediaRemoteOriginClient : NSObject {

	BOOL _canBeNowPlayingApp;
	BOOL _isOverrideApp;
	int _notifyRestoreClientStateForLaunch;
	int _notifyDidLaunchToken;
	/*^block*/id _commandHandlerBlock;
	NSMutableDictionary* _commandHandlerBlocks;
	NSArray* _supportedCommands;
	NSDictionary* _nowPlayingInfo;
	MRNowPlayingArtwork* _nowPlayingArtwork;
	MROriginRef _origin;
	NSMutableDictionary* _transactionCallbacks;
	unsigned _routeDiscoveryMode;
	/*^block*/id _playbackQueueCallback;

}

@property (nonatomic,readonly) MROriginRef origin;                                 //@synthesize origin=_origin - In the implementation block
@property (assign,nonatomic) BOOL canBeNowPlayingApp;                              //@synthesize canBeNowPlayingApp=_canBeNowPlayingApp - In the implementation block
@property (assign,nonatomic) BOOL isOverrideApp;                                   //@synthesize isOverrideApp=_isOverrideApp - In the implementation block
@property (nonatomic,copy) NSDictionary * nowPlayingInfo;                          //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
@property (nonatomic,retain) MRNowPlayingArtwork * nowPlayingArtwork;              //@synthesize nowPlayingArtwork=_nowPlayingArtwork - In the implementation block
@property (assign,nonatomic) unsigned routeDiscoveryMode;                          //@synthesize routeDiscoveryMode=_routeDiscoveryMode - In the implementation block
@property (nonatomic,copy) NSArray * supportedCommands;                            //@synthesize supportedCommands=_supportedCommands - In the implementation block
@property (nonatomic,copy,readonly) NSArray * commandHandlerBlocks; 
@property (nonatomic,copy) id playbackQueueCallback;                               //@synthesize playbackQueueCallback=_playbackQueueCallback - In the implementation block
-(id)initWithOrigin:(MROriginRef)arg1 ;
-(void)dealloc;
-(MROriginRef)origin;
-(void)setCanBeNowPlayingApp:(BOOL)arg1 ;
-(BOOL)isOverrideApp;
-(void)setIsOverrideApp:(BOOL)arg1 ;
-(void)setPlaybackQueueCallback:(id)arg1 ;
-(MRNowPlayingArtwork *)nowPlayingArtwork;
-(void)setNowPlayingArtwork:(MRNowPlayingArtwork *)arg1 ;
-(void)removeCommandHandlerBlockForKey:(id)arg1 ;
-(void)addCommandHandlerBlock:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(NSArray *)commandHandlerBlocks;
-(id)playbackQueueCallback;
-(/*^block*/id)transactionCallbackForName:(unsigned long long)arg1 ;
-(void)_registerDefaultCallbacks;
-(void)_avSystemControllerServerConnectionDiedNotification:(id)arg1 ;
-(BOOL)canBeNowPlayingApp;
-(void)setTransactionCallback:(/*^block*/id)arg1 forName:(unsigned long long)arg2 ;
-(NSArray *)supportedCommands;
-(unsigned)routeDiscoveryMode;
-(void)setRouteDiscoveryMode:(unsigned)arg1 ;
-(NSDictionary *)nowPlayingInfo;
-(void)setNowPlayingInfo:(NSDictionary *)arg1 ;
-(void)setSupportedCommands:(NSArray *)arg1 ;
@end

