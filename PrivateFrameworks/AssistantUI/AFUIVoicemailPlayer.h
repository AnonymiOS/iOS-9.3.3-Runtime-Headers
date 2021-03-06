/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:56 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantUI/AFUIAudioPlayer.h>

@class VMVoicemail;

@interface AFUIVoicemailPlayer : AFUIAudioPlayer {

	VMVoicemail* _voicemailObject;

}

@property (setter=_setVoicemailObject:,getter=_voicemailObject,nonatomic,retain) VMVoicemail * voicemailObject;              //@synthesize voicemailObject=_voicemailObject - In the implementation block
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(id)_audioURL;
-(id)_audioCategory;
-(unsigned long long)_audioOptions;
-(void)setPlaybackCommand:(id)arg1 ;
-(void)_setVoicemailObject:(id)arg1 ;
-(long long)_voicemailID;
-(id)_voicemailObject;
-(void)_updateVoicemailPlayedState:(id)arg1 finished:(BOOL)arg2 ;
@end

