/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:01 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Speech.framework/Speech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFDictationDelegate.h>
#import <libobjc.A.dylib/SFSpeechRecognitionBufferDelegate.h>

@protocol OS_dispatch_queue;
@class AFDictationConnection, NSOperationQueue, NSString, SFSpeechRecognitionRequest, NSObject, NSError;

@interface SFSpeechRecognitionTask : NSObject <AFDictationDelegate, SFSpeechRecognitionBufferDelegate> {

	AFDictationConnection* _dictationConnection;
	NSOperationQueue* _queue;
	NSString* _languageCode;
	SFSpeechRecognitionRequest* _request;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	BOOL _completed;
	BOOL _running;
	BOOL _finishing;
	BOOL _cancelled;
	BOOL _powerAvailable;
	long long _taskHint;
	NSError* _error;
	NSString* _requestIdentifier;

}

@property (nonatomic,readonly) long long state; 
@property (getter=isFinishing,nonatomic,readonly) BOOL finishing;                        //@synthesize finishing=_finishing - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled;                        //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                                     //@synthesize error=_error - In the implementation block
@property (getter=isPowerAvailable,nonatomic,readonly) BOOL powerAvailable;              //@synthesize powerAvailable=_powerAvailable - In the implementation block
@property (nonatomic,readonly) float peakPower; 
@property (nonatomic,readonly) float averagePower; 
@property (nonatomic,copy,readonly) NSString * requestIdentifier;                        //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,readonly) long long _taskHint;                                      //@synthesize taskHint=_taskHint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transcriptionsWithTokens:(id)arg1 ;
+(id)recognizedUtteranceFromSpeechPhrases:(id)arg1 final:(BOOL)arg2 ;
-(void)cancel;
-(long long)state;
-(void)_start;
-(BOOL)isCancelled;
-(float)averagePower;
-(void)dictationConnectionSpeechRecordingDidBegin:(id)arg1 ;
-(void)dictationConnectionSpeechRecordingDidEnd:(id)arg1 ;
-(void)dictationConnectionSpeechRecordingDidCancel:(id)arg1 ;
-(void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2 ;
-(void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2 ;
-(void)finish;
-(float)peakPower;
-(void)addRecordedSpeechSampleData:(id)arg1 ;
-(NSString *)requestIdentifier;
-(NSError *)error;
-(void)stopSpeech;
-(BOOL)isFinishing;
-(id)_initWithRequest:(id)arg1 queue:(id)arg2 languageCode:(id)arg3 taskHint:(long long)arg4 ;
-(long long)_taskHint;
-(BOOL)isPowerAvailable;
@end

