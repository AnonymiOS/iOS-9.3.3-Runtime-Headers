/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:58 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RMSDAAPNowPlayingManagerDelegate.h>
#import <libobjc.A.dylib/RMSDAAPRequestManagerDelegate.h>
#import <libobjc.A.dylib/RMSDAAPTouchRemoteManagerDelegate.h>
#import <libobjc.A.dylib/RMSDAAPControlSession.h>
@class RMSService;


@protocol RMSDAAPControlSession <NSObject>
@property (assign,nonatomic,__weak) id<RMSDAAPControlSessionDelegate> delegate; 
@property (nonatomic,readonly) RMSService * service; 
@required
-(void)setDelegate:(id)arg1;
-(id<RMSDAAPControlSessionDelegate>)delegate;
-(RMSService *)service;
-(void)logout;
-(void)connectToService:(id)arg1 pairingGUID:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)endObservingNowPlaying;
-(void)beginObservingNowPlaying;
-(void)sendTouchMoveWithDirection:(long long)arg1 repeatCount:(unsigned)arg2;
-(void)sendTouchEndWithDirection:(long long)arg1 repeatCount:(unsigned)arg2;
-(void)sendPlaybackCommand:(long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)sendNavigationCommand:(long long)arg1;
-(void)setVolume:(float)arg1 completionHandler:(/*^block*/id)arg2;
-(void)pickAudioRoute:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)seekToPlaybackTime:(int)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setLikedState:(long long)arg1 itemID:(unsigned long long)arg2 databaseID:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4;
-(void)addToWishlist:(unsigned long long)arg1 databaseID:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3;

@end


@protocol RMSDAAPControlSessionDelegate;
@class RMSService, RMSDAAPRequestManager, RMSDAAPLoginManager, RMSDAAPNowPlayingManager, RMSDAAPTouchRemoteManager, RMSNowPlayingInfo, NSString;

@interface RMSDAAPControlSession : NSObject <RMSDAAPNowPlayingManagerDelegate, RMSDAAPRequestManagerDelegate, RMSDAAPTouchRemoteManagerDelegate, RMSDAAPControlSession> {

	RMSDAAPRequestManager* _requestManager;
	RMSDAAPLoginManager* _loginManager;
	RMSDAAPNowPlayingManager* _nowPlayingManager;
	RMSDAAPTouchRemoteManager* _touchRemoteManager;
	RMSNowPlayingInfo* _nowPlayingInfo;
	id<RMSDAAPControlSessionDelegate> _delegate;
	RMSService* _service;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<RMSDAAPControlSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) RMSService * service;                                         //@synthesize service=_service - In the implementation block
+(id)localControlSession;
+(id)proxyControlSession;
-(void)setDelegate:(id<RMSDAAPControlSessionDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<RMSDAAPControlSessionDelegate>)delegate;
-(RMSService *)service;
-(void)logout;
-(void)connectToService:(id)arg1 pairingGUID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)endObservingNowPlaying;
-(void)_initializeManagersWithControlInterface:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_stringFromRMSPlaybackCommand:(long long)arg1 ;
-(void)beginObservingNowPlaying;
-(void)sendTouchMoveWithDirection:(long long)arg1 repeatCount:(unsigned)arg2 ;
-(void)sendTouchEndWithDirection:(long long)arg1 repeatCount:(unsigned)arg2 ;
-(void)sendPlaybackCommand:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendNavigationCommand:(long long)arg1 ;
-(void)nowPlayingManager:(id)arg1 didUpdateNowPlayingInfo:(id)arg2 ;
-(void)nowPlayingManager:(id)arg1 artworkDataDidBecomeAvailable:(id)arg2 identifier:(id)arg3 ;
-(void)nowPlayingManager:(id)arg1 didUpdateAudioRoutes:(id)arg2 ;
-(void)nowPlayingManager:(id)arg1 didUpdateVolume:(float)arg2 ;
-(void)requestManagerFailedWithUnauthorizedError:(id)arg1 ;
-(void)requestManagerFailedWithUnknownError:(id)arg1 ;
-(void)touchRemoteManagerDidDisconnect:(id)arg1 ;
-(void)setVolume:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)pickAudioRoute:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)seekToPlaybackTime:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setLikedState:(long long)arg1 itemID:(unsigned long long)arg2 databaseID:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)addToWishlist:(unsigned long long)arg1 databaseID:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

