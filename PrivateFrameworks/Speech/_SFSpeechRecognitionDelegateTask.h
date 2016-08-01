/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:01 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Speech.framework/Speech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Speech/SFSpeechRecognitionTask.h>

@protocol _SFSpeechRecognitionTaskDelegatePrivate;
@class SFSpeechRecognitionResult;

@interface _SFSpeechRecognitionDelegateTask : SFSpeechRecognitionTask {

	id<_SFSpeechRecognitionTaskDelegatePrivate> _delegate;
	SFSpeechRecognitionResult* _recognitionResultToReportAfterFinalSearchResults;
	BOOL _waitForVoiceSearchResult;
	BOOL _hasSentRealSearchResults;

}
-(void)dictationConnectionSpeechRecordingDidEnd:(id)arg1 ;
-(void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2 ;
-(void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2 ;
-(void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4 ;
-(void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3 ;
-(void)dictationConnection:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(BOOL)arg4 final:(BOOL)arg5 ;
-(id)_initWithRequest:(id)arg1 queue:(id)arg2 languageCode:(id)arg3 taskHint:(long long)arg4 delegate:(id)arg5 ;
@end

