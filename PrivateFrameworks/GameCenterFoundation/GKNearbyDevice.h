/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:40 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, GKDiscovery, GKPlayer;

@interface GKNearbyDevice : NSObject {

	NSString* _deviceID;
	GKDiscovery* _discovery;
	GKPlayer* _player;
	long long _state;

}

@property (nonatomic,retain) NSString * deviceID;                  //@synthesize deviceID=_deviceID - In the implementation block
@property (assign,nonatomic) long long state;                      //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) GKDiscovery * discovery;              //@synthesize discovery=_discovery - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                    //@synthesize player=_player - In the implementation block
+(id)nearbyDeviceWithID:(id)arg1 discovery:(id)arg2 ;
-(void)dealloc;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(GKPlayer *)player;
-(void)setDiscovery:(GKDiscovery *)arg1 ;
-(void)sendDictionary:(id)arg1 ;
-(GKDiscovery *)discovery;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSString *)deviceID;
@end

