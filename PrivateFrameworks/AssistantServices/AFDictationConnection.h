/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:20 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFNetworkAvailabilityObserver.h>

@protocol AFDictationDelegate;
@class NSXPCConnection, NSString, NSSet;

@interface AFDictationConnection : NSObject <AFNetworkAvailabilityObserver> {

	NSXPCConnection* _connection;
	NSString* _lastUsedLanguage;
	NSSet* _knownOfflineInstalledLanguages;
	id<AFDictationDelegate> _delegate;
	void* _levelsSharedMem;
	unsigned long long _sharedMemSize;
	BOOL _isCapturingSpeech;
	BOOL _hasActiveRequest;
	BOOL _isWaitingForAudioFile;

}

@property (assign,nonatomic,__weak) id<AFDictationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)fetchSupportedLanguageCodes:(/*^block*/id)arg1 ;
+(BOOL)dictationIsSupportedForLanguageCode:(id)arg1 error:(id*)arg2 ;
+(BOOL)dictationIsEnabled;
-(void)startDictationWithSpeechFileAtURL:(id)arg1 options:(id)arg2 forLanguage:(id)arg3 ;
-(void)startDictationWithSpeechFileAtURL:(id)arg1 isNarrowBand:(BOOL)arg2 options:(id)arg3 forLanguage:(id)arg4 ;
-(void)sendEngagementFeedback:(long long)arg1 voiceQueryIdentifier:(id)arg2 ;
-(void)setDelegate:(id<AFDictationDelegate>)arg1 ;
-(void)dealloc;
-(id<AFDictationDelegate>)delegate;
-(id)_connection;
-(BOOL)dictationIsAvailableForLanguage:(id)arg1 ;
-(void)sendSpeechCorrection:(id)arg1 forIdentifier:(id)arg2 ;
-(void)cancelAvailabilityMonitoring;
-(void)beginAvailabilityMonitoring;
-(float)averagePower;
-(void)startDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3 ;
-(void)endSession;
-(void)cancelSpeech;
-(void)stopSpeechWithOptions:(id)arg1 ;
-(void)preheat;
-(void)networkAvailability:(id)arg1 isAvailable:(BOOL)arg2 ;
-(void)_clearConnection;
-(void)_stopLevelUpdates;
-(void)_scheduleRequestTimeout;
-(void)_cancelRequestTimeout;
-(void)_tellSpeechDelegateRecordingDidFail:(id)arg1 ;
-(void)_invokeRequestTimeout;
-(void)_extendRequestTimeout;
-(void)_checkAndSetIsCapturingSpeech:(BOOL)arg1 ;
-(void)_setLevelsWithSharedMem:(id)arg1 ;
-(void)_tellSpeechDelegateRecordingWillBegin;
-(void)_tellSpeechDelegateRecordingDidEnd;
-(void)_tellSpeechDelegateRecordingDidCancel;
-(void)_tellSpeechDelegateRecognitionDidFail:(id)arg1 ;
-(float)peakPower;
-(void)_willFailDictationWithError:(id)arg1 ;
-(void)_willCompleteDictation;
-(void)_tellSpeechDelegateDidRecognizeSpeechTokens:(id)arg1 languageModel:(id)arg2 ;
-(void)_tellSpeechDelegateAudioFileFinished:(id)arg1 error:(id)arg2 ;
-(void)_connectionClearedForInterruption:(BOOL)arg1 ;
-(void)_registerInvalidationHandlerForXPCConnection:(id)arg1 ;
-(void)addRecordedSpeechSampleData:(id)arg1 ;
-(id)_dictationService;
-(id)_dictationServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_availabilityChanged;
-(void)_willStartDictationWithOptions:(id)arg1 ;
-(void)_willCancelDictation;
-(void)_tellSpeechDelegateRecordingDidBegin;
-(void)_tellSpeechDelegateDidHypothesizeSpeechPhrases:(id)arg1 languageModel:(id)arg2 ;
-(void)_tellSpeechDelegateDidRecognizeSpeechPhrases:(id)arg1 languageModel:(id)arg2 correctionIdentifier:(id)arg3 ;
-(void)_tellSpeechDelegateDidRecognizeTranscriptionObjects:(id)arg1 languageModel:(id)arg2 ;
-(void)startDictationWithLanguageCode:(id)arg1 options:(id)arg2 ;
-(void)startRecordedAudioDictationWithOptions:(id)arg1 forLanguage:(id)arg2 ;
-(void)updateSpeechOptions:(id)arg1 ;
-(void)stopSpeech;
@end

