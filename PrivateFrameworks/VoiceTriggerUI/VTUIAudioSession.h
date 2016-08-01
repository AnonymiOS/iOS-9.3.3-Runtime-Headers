/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:13:01 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VTUIAudioSession
@required
-(void)setDelegate:(id)arg1;
-(void)stopRecording;
-(float)averagePower;
-(BOOL)isRecording;
-(void)setEndpointerDelegate:(id)arg1;
-(BOOL)startRecording;
-(void)updateMeters;
-(void)releaseAudioSession;
-(BOOL)prepareRecord;
-(void)resetEndPointer;

@end

