/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:37 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_os_transaction, OS_dispatch_queue, OS_dispatch_source;
@class NSObject, CKContainer, NSString, CKPlaceholderOperation, NSError, CKTimeLogger, NSArray, NSDictionary, CKOperationMetrics, CKOperationInfo;

@interface CKOperation : NSOperation {

	NSObject*<OS_os_transaction> _isExecuting;
	unsigned long long _activityID;
	BOOL _allowsCellularAccess;
	BOOL _longLived;
	BOOL _isFinished;
	BOOL _isDiscretionary;
	BOOL _preferAnonymousRequests;
	BOOL _allowsBackgroundNetworking;
	BOOL _isOutstandingOperation;
	CKContainer* _container;
	NSString* _operationID;
	/*^block*/id _longLivedOperationWasPersistedBlock;
	CKPlaceholderOperation* _placeholderOperation;
	NSError* _error;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSString* _sectionID;
	NSString* _parentSectionID;
	id _context;
	CKTimeLogger* _timeLogger;
	NSArray* _requestUUIDs;
	NSDictionary* _additionalRequestHTTPHeaders;
	CKOperationMetrics* _metrics;
	NSDictionary* _w3cNavigationTimingByRequestUUID;
	NSDictionary* _responseHTTPHeadersByRequestUUID;
	NSString* _sourceApplicationBundleIdentifier;
	NSString* _sourceApplicationSecondaryIdentifier;
	NSString* _authPromptReason;
	NSString* _deviceIdentifier;
	NSObject*<OS_dispatch_source> _timeoutSource;
	long long _usesBackgroundSessionOverride;

}

@property (nonatomic,retain) CKContainer * container;                                      //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) BOOL usesBackgroundSession; 
@property (assign,nonatomic) BOOL allowsCellularAccess;                                    //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (nonatomic,copy) NSString * operationID;                                         //@synthesize operationID=_operationID - In the implementation block
@property (assign,getter=isLongLived,nonatomic) BOOL longLived;                            //@synthesize longLived=_longLived - In the implementation block
@property (nonatomic,copy) id longLivedOperationWasPersistedBlock;                         //@synthesize longLivedOperationWasPersistedBlock=_longLivedOperationWasPersistedBlock - In the implementation block
@property (nonatomic,retain) CKPlaceholderOperation * placeholderOperation;                //@synthesize placeholderOperation=_placeholderOperation - In the implementation block
@property (assign,nonatomic) BOOL isExecuting; 
@property (assign,nonatomic) BOOL isFinished;                                              //@synthesize isFinished=_isFinished - In the implementation block
@property (nonatomic,retain) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                   //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSString * sectionID;                                         //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,readonly) NSString * parentSectionID;                                 //@synthesize parentSectionID=_parentSectionID - In the implementation block
@property (nonatomic,readonly) id context;                                                 //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) CKTimeLogger * timeLogger;                                    //@synthesize timeLogger=_timeLogger - In the implementation block
@property (assign,nonatomic) BOOL isDiscretionary;                                         //@synthesize isDiscretionary=_isDiscretionary - In the implementation block
@property (nonatomic,retain) NSArray * requestUUIDs;                                       //@synthesize requestUUIDs=_requestUUIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalRequestHTTPHeaders;                  //@synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders - In the implementation block
@property (nonatomic,readonly) CKOperationInfo * operationInfo; 
@property (nonatomic,retain) CKOperationMetrics * metrics;                                 //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) NSDictionary * w3cNavigationTimingByRequestUUID;              //@synthesize w3cNavigationTimingByRequestUUID=_w3cNavigationTimingByRequestUUID - In the implementation block
@property (nonatomic,retain) NSDictionary * responseHTTPHeadersByRequestUUID;              //@synthesize responseHTTPHeadersByRequestUUID=_responseHTTPHeadersByRequestUUID - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationBundleIdentifier;                 //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationSecondaryIdentifier;              //@synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier - In the implementation block
@property (nonatomic,retain) NSString * authPromptReason;                                  //@synthesize authPromptReason=_authPromptReason - In the implementation block
@property (assign,nonatomic) BOOL preferAnonymousRequests;                                 //@synthesize preferAnonymousRequests=_preferAnonymousRequests - In the implementation block
@property (assign,nonatomic) BOOL allowsBackgroundNetworking;                              //@synthesize allowsBackgroundNetworking=_allowsBackgroundNetworking - In the implementation block
@property (nonatomic,retain) NSString * deviceIdentifier;                                  //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timeoutSource;                  //@synthesize timeoutSource=_timeoutSource - In the implementation block
@property (assign,nonatomic) long long usesBackgroundSessionOverride;                      //@synthesize usesBackgroundSessionOverride=_usesBackgroundSessionOverride - In the implementation block
@property (assign,nonatomic) BOOL isOutstandingOperation;                                  //@synthesize isOutstandingOperation=_isOutstandingOperation - In the implementation block
-(BOOL)isDiscretionary;
-(BOOL)isConcurrent;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)context;
-(void)_start;
-(CKContainer *)container;
-(void)setContainer:(CKContainer *)arg1 ;
-(void)start;
-(CKOperationMetrics *)metrics;
-(void)main;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(void)_handleCompletionCallback:(id)arg1 ;
-(void)_handleCheckpointCallback:(id)arg1 ;
-(void)setPlaceholderOperation:(CKPlaceholderOperation *)arg1 ;
-(CKPlaceholderOperation *)placeholderOperation;
-(void)setIsOutstandingOperation:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_source>)timeoutSource;
-(void)setTimeoutSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_uninstallTimeoutSource;
-(void)_installTimeoutSource;
-(long long)usesBackgroundSessionOverride;
-(void)setUsesBackgroundSessionOverride:(long long)arg1 ;
-(id)longLivedOperationWasPersistedBlock;
-(void)processOperationResult:(id)arg1 ;
-(void)setIsDiscretionary:(BOOL)arg1 ;
-(void)setMetrics:(CKOperationMetrics *)arg1 ;
-(void)setLongLived:(BOOL)arg1 ;
-(void)setLongLivedOperationWasPersistedBlock:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSString *)sectionID;
-(void)setIsFinished:(BOOL)arg1 ;
-(void)setAdditionalRequestHTTPHeaders:(NSDictionary *)arg1 ;
-(CKOperationInfo *)operationInfo;
-(NSString *)operationID;
-(Class)operationClass;
-(NSString *)sourceApplicationBundleIdentifier;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(BOOL)isLongLived;
-(BOOL)isOutstandingOperation;
-(BOOL)usesBackgroundSession;
-(void)setOperationID:(NSString *)arg1 ;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(CKTimeLogger *)timeLogger;
-(id)CKPropertiesDescription;
-(BOOL)allowsCellularAccess;
-(void)setTimeLogger:(CKTimeLogger *)arg1 ;
-(NSString *)parentSectionID;
-(NSString *)authPromptReason;
-(BOOL)preferAnonymousRequests;
-(BOOL)allowsBackgroundNetworking;
-(NSDictionary *)additionalRequestHTTPHeaders;
-(void)setW3cNavigationTimingByRequestUUID:(NSDictionary *)arg1 ;
-(void)setResponseHTTPHeadersByRequestUUID:(NSDictionary *)arg1 ;
-(NSArray *)requestUUIDs;
-(void)setSourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(void)setAuthPromptReason:(NSString *)arg1 ;
-(void)setPreferAnonymousRequests:(BOOL)arg1 ;
-(void)setAllowsBackgroundNetworking:(BOOL)arg1 ;
-(NSDictionary *)w3cNavigationTimingByRequestUUID;
-(NSDictionary *)responseHTTPHeadersByRequestUUID;
-(unsigned long long)activityStart;
-(void)setIsExecuting:(BOOL)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)_finishInternalOnCallbackQueueWithError:(id)arg1 ;
-(void)setRequestUUIDs:(NSArray *)arg1 ;
-(Class)operationInfoClass;
-(void)setUsesBackgroundSession:(BOOL)arg1 ;
-(id)daemon;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)deviceIdentifier;
-(void)finishWithError:(id)arg1 ;
-(void)setSectionID:(NSString *)arg1 ;
@end

