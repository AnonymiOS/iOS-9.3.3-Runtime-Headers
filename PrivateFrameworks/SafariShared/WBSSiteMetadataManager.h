/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:20 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSSiteMetadataProviderDelegate.h>

@class WKProcessPool, NSMutableArray, NSOperationQueue, NSMutableDictionary, NSMutableSet, NSURL, NSString;

@interface WBSSiteMetadataManager : NSObject <WBSSiteMetadataProviderDelegate> {

	WKProcessPool* _processPool;
	NSMutableArray* _siteMetadataProviders;
	NSOperationQueue* _operationQueue;
	NSMutableDictionary* _tokensToSubrequestProviders;
	NSMutableSet* _tokens;
	NSMutableDictionary* _requestsToRequestInfos;
	NSURL* _injectedBundleURL;

}

@property (nonatomic,copy,readonly) NSURL * injectedBundleURL;              //@synthesize injectedBundleURL=_injectedBundleURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)_providerForRequest:(id)arg1 ;
-(void)_registerToken:(id)arg1 withProvider:(id)arg2 ;
-(void)_scheduleDelayedResponse:(id)arg1 forRequestToken:(id)arg2 ;
-(void)_setUpOperationForRequest:(id)arg1 withSiteMetadataProvider:(id)arg2 ;
-(void)_sendResponse:(id)arg1 toResponseHandlersForRequest:(id)arg2 didReceiveNewData:(BOOL)arg3 ;
-(void)cancelRequestWithToken:(id)arg1 ;
-(void)_reprioritizeOperationForRequest:(id)arg1 ;
-(void)setPriority:(long long)arg1 ofRequestWithToken:(id)arg2 ;
-(long long)_highestRequestPriorityForRequest:(id)arg1 ;
-(id)_processPool;
-(void)_reregisterRequest:(id)arg1 priority:(long long)arg2 withProvider:(id)arg3 didReceiveNewData:(BOOL)arg4 ;
-(id)registerRequest:(id)arg1 priority:(long long)arg2 responseHandler:(/*^block*/id)arg3 ;
-(id)registerOneTimeRequest:(id)arg1 priority:(long long)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)cancelRequestsWithTokens:(id)arg1 ;
-(void)siteMetadataProvider:(id)arg1 didReceiveUpdateForRequest:(id)arg2 ;
-(void)siteMetadataProvider:(id)arg1 didFinishRequestWithoutReceivingNewData:(id)arg2 ;
-(void)siteMetadataProvider:(id)arg1 didReceiveResponse:(id)arg2 forRequest:(id)arg3 ;
-(id)siteMetadataProvider:(id)arg1 registerRequest:(id)arg2 priority:(long long)arg3 responseHandler:(/*^block*/id)arg4 ;
-(id)siteMetadataProvider:(id)arg1 registerOneTimeRequest:(id)arg2 priority:(long long)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)siteMetadataProvider:(id)arg1 cancelRequestsWithTokens:(id)arg2 ;
-(id)initWithInjectedBundleURL:(id)arg1 ;
-(void)registerSiteMetadataProvider:(id)arg1 ;
-(void)setPriority:(long long)arg1 ofRequestsWithTokens:(id)arg2 ;
-(NSURL *)injectedBundleURL;
@end

