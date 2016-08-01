/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <TelephonyUtilities/TUProxyCall.h>

@class IMAVChat, TUProxyCall;

@interface TUVideoProxyCall : TUProxyCall {

	IMAVChat* _chat;

}

@property (nonatomic,retain) IMAVChat * chat;                                   //@synthesize chat=_chat - In the implementation block
@property (nonatomic,readonly) TUProxyCall * callHistoryProxyCall; 
-(TUProxyCall *)callHistoryProxyCall;
-(void)updateWithCall:(id)arg1 ;
-(id)_callHistoryIdentifierFromChat;
-(void)_setLocalAspectRatios;
-(void)answerWithSourceIdentifier:(id)arg1 wantsHoldMusic:(BOOL)arg2 ;
-(BOOL)isSendingVideo;
-(void)setIsSendingVideo:(BOOL)arg1 ;
-(BOOL)hasReceivedFirstFrame;
-(id)remoteParticipant;
-(BOOL)isMediaStalled;
-(BOOL)isVideoDegraded;
-(BOOL)isVideoPaused;
-(void)setRemoteVideoPresentationSize:(CGSize)arg1 ;
-(void)setRemoteVideoPresentationState:(int)arg1 ;
-(CGSize)remoteAspectRatio;
-(CGSize)localAspectRatioForOrientation:(long long)arg1 ;
-(CGRect)remoteVideoContentRect;
-(long long)remoteCameraOrientation;
-(int)service;
-(void)setRemoteVideoLayer:(void*)arg1 ;
-(void)setRemoteVideoBackLayer:(void*)arg1 ;
-(void*)remoteVideoLayer;
-(void*)remoteVideoBackLayer;
-(IMAVChat *)chat;
-(id)initWithChat:(id)arg1 ;
-(void)setChat:(IMAVChat *)arg1 ;
-(long long)cameraType;
@end

