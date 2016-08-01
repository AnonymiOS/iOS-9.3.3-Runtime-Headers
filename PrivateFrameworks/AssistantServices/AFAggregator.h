/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:21 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AFAggregator : NSObject {

	unsigned long long _type;
	double _startTime;
	BOOL _hasActiveRequest;
	BOOL _sessionIsRetrying;
	BOOL _retryPrefersWWAN;

}

@property (assign,nonatomic) unsigned long long connectionType;              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasActiveRequest;                          //@synthesize hasActiveRequest=_hasActiveRequest - In the implementation block
+(id)_stringForGatekeeperType:(unsigned long long)arg1 ;
+(void)logTimeToBeepWithDuration:(double)arg1 ;
+(void)logHomeButtonPressToActivationDuration:(double)arg1 ;
+(void)logStarkGatekeeperDismissedManuallyForType:(unsigned long long)arg1 ;
+(void)logStarkGatekeeperAppearedForType:(unsigned long long)arg1 ;
+(void)logSiriSpeechRequestStarted;
+(void)logSiriOtherRequestStarted;
+(void)logSiriRequestCancelled;
+(void)logSiriRequestFailedWithError:(id)arg1 ;
+(void)logSiriRequestSucceeded;
+(void)logDictationStarted;
+(void)logDictationCancelled;
+(void)logDictationFailedWithError:(id)arg1 ;
+(void)logDictationSucceeded;
+(id)_fullAggDKeyWithPrefix:(id)arg1 error:(id)arg2 ;
+(void)logRequestCompletedWithDuration:(double)arg1 ;
+(void)missedAppContextForRequest;
+(void)missedAlertContextForRequest;
+(void)logRequestCancelAfterSeconds:(double)arg1 ;
+(void)logRequestLaunchedApp;
+(void)logKeyboardSessionOccurred;
+(void)logDictationSessionOccurred;
+(void)logKeyboardDeleteKeyPress;
+(void)logDictationDeleteCommand;
+(void)logDictationKeyboardRevisited;
+(void)logUILockCanceledVTActivation;
+(void)logCreateAssistant;
+(void)logLoadAssistant;
+(void)logPingTimeout;
+(void)logLocalRecognitionAssetEvictedForLanguage:(id)arg1 ;
+(void)logLocalSpeechStartedWithDuration:(double)arg1 ;
+(void)logLocalFinalSpeechRecognitionWithDuration:(double)arg1 ;
+(void)logLocalRecognitionLoadedForLanguage:(id)arg1 duration:(double)arg2 ;
+(void)logLocalRecognitionWonForLanguage:(id)arg1 ;
+(void)logLocalRecognitionLostForLanguage:(id)arg1 ;
-(void)setConnectionType:(unsigned long long)arg1 ;
-(unsigned long long)connectionType;
-(BOOL)hasActiveRequest;
-(void)recordFailure:(int)arg1 forConnectionType:(unsigned long long)arg2 ;
-(void)recordSuccessForConnectionType:(unsigned long long)arg1 isWarm:(BOOL)arg2 forTimeInterval:(double)arg3 ;
-(void)recordSessionRetrySuccess;
-(void)connectionDidFail;
-(void)connectionDidDrop;
-(void)beginSessionRetryPreferringWWAN:(BOOL)arg1 ;
-(void)startWaitingForSpeechResponse;
-(void)speechResponseReceived;
-(void)speechResponseFailure;
-(void)setHasActiveRequest:(BOOL)arg1 ;
@end

