/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:23 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAV-Structs.h>
#import <CoreDAV/CoreDAVSubmittable.h>

@protocol CoreDAVTaskManager, CoreDAVAccountInfoProvider, CoreDAVResponseBodyParser, CoreDAVTaskDelegate;
@class NSError, NSHTTPURLResponse, NSURLConnection, NSURLRequest, NSDate, CoreDAVRequestLogger, NSURL, NSMutableDictionary, NSMutableArray, NSDictionary, NSData, CoreDAVErrorItem, NSString;

@interface CoreDAVTask : NSObject <CoreDAVSubmittable> {

	id<CoreDAVTaskManager> _taskManager;
	id<CoreDAVAccountInfoProvider> _accountInfoProvider;
	long long _numDownloadedElements;
	int _depth;
	NSHTTPURLResponse* _response;
	NSURLConnection* _connection;
	NSURLRequest* _request;
	double _timeoutInterval;
	long long _responseStatusCode;
	NSDate* _dateConnectionWentOut;
	BOOL _didSendRequest;
	BOOL _didFailWithError;
	BOOL _didCancel;
	BOOL _didReceiveResponse;
	BOOL _didReceiveData;
	BOOL _didFinishLoading;
	BOOL _finished;
	id _context;
	BOOL _receivedBadPasswordResponse;
	BOOL _triedRenewingCredential;
	BOOL _justTriedTokenAuth;
	BOOL _everTriedTokenAuth;
	BOOL _shouldRetryWithClientToken;
	BOOL _didRetryWithClientToken;
	BOOL _requestIsCompressed;
	BOOL _compressedRequestFailed;
	NSError* _passwordNotificationError;
	id<CoreDAVResponseBodyParser> _responseBodyParser;
	CoreDAVRequestLogger* _logger;
	NSURL* _url;
	BOOL _allowAutomaticRedirects;
	id<CoreDAVTaskDelegate> _delegate;
	/*^block*/id _requestProgressBlock;
	/*^block*/id _responseProgressBlock;
	/*^block*/id _completionBlock;
	NSError* _error;
	unsigned long long _totalBytesReceived;
	NSMutableDictionary* _overriddenHeaders;
	NSMutableArray* _redirectHistory;
	NSDictionary* _requestProperties;
	NSData* _fakeResponseData;
	BOOL _haveParsedFakeResponseData;
	CoreDAVErrorItem* _forbiddenErrorItem;
	NSString* _uniqueID;

}

@property (nonatomic,copy) id requestProgressBlock;                                           //@synthesize requestProgressBlock=_requestProgressBlock - In the implementation block
@property (nonatomic,copy) id responseProgressBlock;                                          //@synthesize responseProgressBlock=_responseProgressBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) NSError * error;                                                 //@synthesize error=_error - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@property (assign,nonatomic) id<CoreDAVTaskManager> taskManager;                              //@synthesize taskManager=_taskManager - In the implementation block
@property (assign,nonatomic) id<CoreDAVAccountInfoProvider> accountInfoProvider;              //@synthesize accountInfoProvider=_accountInfoProvider - In the implementation block
@property (assign,nonatomic) id<CoreDAVTaskDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id context;                                                      //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) int depth;                                                       //@synthesize depth=_depth - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                                          //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (assign,nonatomic) BOOL allowAutomaticRedirects;                                    //@synthesize allowAutomaticRedirects=_allowAutomaticRedirects - In the implementation block
@property (nonatomic,retain) id<CoreDAVResponseBodyParser> responseBodyParser;                //@synthesize responseBodyParser=_responseBodyParser - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseHeaders; 
@property (assign,nonatomic) long long responseStatusCode;                                    //@synthesize responseStatusCode=_responseStatusCode - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                                   //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSDictionary * requestProperties;                                //@synthesize requestProperties=_requestProperties - In the implementation block
@property (assign,nonatomic) unsigned long long totalBytesReceived;                           //@synthesize totalBytesReceived=_totalBytesReceived - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned)uniqueQueryID;
+(id)stringFromDepth:(int)arg1 ;
-(void)setDelegate:(id<CoreDAVTaskDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<CoreDAVTaskDelegate>)delegate;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSURL *)url;
-(void)reset;
-(id)context;
-(id)initWithURL:(id)arg1 ;
-(void)loadRequest:(id)arg1 ;
-(void)setContext:(id)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(BOOL)isFinished;
-(BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 ;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
-(BOOL)connectionShouldUseCredentialStorage:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(id)connection:(id)arg1 needNewBodyStream:(id)arg2 ;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(void)submitWithTaskManager:(id)arg1 ;
-(void)finishEarlyWithError:(id)arg1 ;
-(void)performCoreDAVTask;
-(id)_compressBodyData:(id)arg1 ;
-(id)_createBodyData;
-(BOOL)_includeGeneralHeaders;
-(id)_applyStorageSession:(CFURLStorageSessionRef)arg1 toRequest:(id)arg2 ;
-(void)_sendTimeSpentInNetworkingToProvider;
-(void)handleWebLoginRequestWithCompletionBlock:(/*^block*/id)arg1 ;
-(unsigned long long)totalBytesReceived;
-(void)setTotalBytesReceived:(unsigned long long)arg1 ;
-(BOOL)_shouldHandleStatusCode:(long long)arg1 ;
-(id)credentialForOAuthChallenge:(id)arg1 ;
-(id)credentialForClientCertificateChallenge:(id)arg1 ;
-(void)setResponseStatusCode:(long long)arg1 ;
-(BOOL)_handleUnauthorizedAccessError:(id)arg1 ;
-(NSDictionary *)requestProperties;
-(id<CoreDAVTaskManager>)taskManager;
-(id)requestBody;
-(void)startModal;
-(void)setTaskManager:(id<CoreDAVTaskManager>)arg1 ;
-(id)_connectionForLogging;
-(id)_requestForLogging;
-(void)_failImmediately;
-(id)_applyAuthenticationChain:(CFArrayRef)arg1 toRequest:(id)arg2 ;
-(void)setRequestProperties:(NSDictionary *)arg1 ;
-(void)setTimeoutInterval:(double)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(double)timeoutInterval;
-(BOOL)markAsFinished;
-(void)setAccountInfoProvider:(id<CoreDAVAccountInfoProvider>)arg1 ;
-(NSDictionary *)responseHeaders;
-(id)httpMethod;
-(id<CoreDAVAccountInfoProvider>)accountInfoProvider;
-(BOOL)validate:(id*)arg1 ;
-(unsigned long long)cachePolicy;
-(id)additionalHeaderValues;
-(void)tearDownResources;
-(void)setResponseBodyParser:(id<CoreDAVResponseBodyParser>)arg1 ;
-(void)reportStatusWithError:(id)arg1 ;
-(void)setRequestProgressBlock:(id)arg1 ;
-(void)setResponseProgressBlock:(id)arg1 ;
-(BOOL)allowAutomaticRedirects;
-(id)requestBodyStream;
-(id)responseProgressBlock;
-(id<CoreDAVResponseBodyParser>)responseBodyParser;
-(id)requestProgressBlock;
-(long long)responseStatusCode;
-(long long)numDownloadedElements;
-(BOOL)shouldLogResponseBody;
-(void)overrideRequestHeader:(id)arg1 withValue:(id)arg2 ;
-(void)_handleBadPasswordResponse;
-(id)lastRedirectURL;
-(void)setAllowAutomaticRedirects:(BOOL)arg1 ;
-(int)depth;
-(void)setDepth:(int)arg1 ;
@end

