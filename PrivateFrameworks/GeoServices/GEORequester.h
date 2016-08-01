/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:02 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequester.h>

@class NSThread, NSString;

@interface GEORequester : PBRequester {

	BOOL _disableReplay;
	NSThread* _thread;
	BOOL _usePersistentConnection;
	BOOL _useBackgroundConnection;
	NSString* _debugRequestName;
	NSString* _throttleKey;
	BOOL _canceled;
	int _symptomsAlternateAdviceToken;
	BOOL _finished;

}

@property (assign) BOOL disableReplay;                                 //@synthesize disableReplay=_disableReplay - In the implementation block
@property (nonatomic,retain) NSString * debugRequestName;              //@synthesize debugRequestName=_debugRequestName - In the implementation block
@property (nonatomic,copy) NSString * throttleKey;                     //@synthesize throttleKey=_throttleKey - In the implementation block
+(void)setOSVersion:(id)arg1 ;
+(void)setAppID:(id)arg1 ;
+(void)enablePersistentConnection;
+(id)_logRequestResponseDirectory;
+(void)replayRequests;
+(void)stopAllRequests;
+(void)setLogRequestResponseDirectory:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)start;
-(void)_cleanup;
-(id)initWithURL:(id)arg1 andDelegate:(id)arg2 useBackgroundConnection:(BOOL)arg3 ;
-(BOOL)disableReplay;
-(void)_applicationDidStopAllRequests:(id)arg1 ;
-(void)startWithConnectionProperties:(id)arg1 ;
-(void)setDebugRequestName:(NSString *)arg1 ;
-(NSString *)debugRequestName;
-(void)setDisableReplay:(BOOL)arg1 ;
-(void)_logResponsesIfNecessary:(id)arg1 ;
-(void)_logRequestsIfNecessary:(id)arg1 ;
-(void)_tryRerequest;
-(void)_logErrorIfNecessary:(id)arg1 ;
-(id)newConnectionWithCFURLRequest:(CFURLRequestRef)arg1 delegate:(id)arg2 ;
-(void)_handleSuspendOnThread;
-(id)persistentConnectionSession;
-(void)_applicationWantsToReplayRequests:(id)arg1 ;
-(id)initWithURL:(id)arg1 andDelegate:(id)arg2 ;
-(void)_considerRetryingDueToAlternateAdvice;
-(id)logResponseToFile;
-(id)requestPreamble;
-(id)logRequestToFile;
-(NSString *)throttleKey;
-(void)setNeedsCancel;
-(void)setThrottleKey:(NSString *)arg1 ;
-(CFURLRequestRef)newCFMutableURLRequestWithURL:(id)arg1 ;
-(void)_handleResumeOnThread;
@end
