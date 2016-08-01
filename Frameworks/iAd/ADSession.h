/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:34 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ADSession_RPC.h>
#import <libobjc.A.dylib/ADAdSheetProxyDelegate.h>
#import <libobjc.A.dylib/ADAdSheetConnectionDelegate.h>

@class NSMutableArray, ADAdSheetConnection, NSString;

@interface ADSession : NSObject <ADSession_RPC, ADAdSheetProxyDelegate, ADAdSheetConnectionDelegate> {

	BOOL _applicationCanReceiveBackgroundAds;
	int _classicUnavailableToken;
	NSMutableArray* _adSpaces;
	ADAdSheetConnection* _connection;

}

@property (assign,nonatomic) BOOL applicationCanReceiveBackgroundAds;              //@synthesize applicationCanReceiveBackgroundAds=_applicationCanReceiveBackgroundAds - In the implementation block
@property (nonatomic,readonly) id<ADSSession_RPC> rpcProxy; 
@property (nonatomic,retain) NSMutableArray * adSpaces;                            //@synthesize adSpaces=_adSpaces - In the implementation block
@property (assign,nonatomic) int classicUnavailableToken;                          //@synthesize classicUnavailableToken=_classicUnavailableToken - In the implementation block
@property (nonatomic,retain) ADAdSheetConnection * connection;                     //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(ADAdSheetConnection *)connection;
-(void)setConnection:(ADAdSheetConnection *)arg1 ;
-(void)_appDidBecomeActive;
-(id<ADSSession_RPC>)rpcProxy;
-(BOOL)applicationCanReceiveBackgroundAds;
-(BOOL)shouldLaunchAdSheet;
-(void)performWhenConnected:(/*^block*/id)arg1 ;
-(id)rpcProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_remote_heartbeatTokenDidChange:(id)arg1 expirationDate:(double)arg2 error:(id)arg3 ;
-(void)_remote_policyEngineDidIdleDisable;
-(void)_reportAdSpaceStatusEventWithAdOpportunityIdentifier:(id)arg1 adOriginIdentifier:(id)arg2 durationInFeed:(double)arg3 responseTime:(double)arg4 firstMessage:(BOOL)arg5 screenfuls:(long long)arg6 errorCode:(long long)arg7 ;
-(id)_linkedOnVersion;
-(NSMutableArray *)adSpaces;
-(void)addClientToSegments:(id)arg1 replaceExisting:(BOOL)arg2 privateSegment:(BOOL)arg3 ;
-(void)requestAdsForContext:(id)arg1 serverURL:(id)arg2 creativeTypes:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)additionalAdSheetLaunchOptions;
-(id)adSheetMachServiceName;
-(void)configureConnection:(id)arg1 ;
-(BOOL)shouldConnectToAdSheet;
-(void)adSheetConnectionEstablished;
-(void)adSheetConnectionLost;
-(void)registerAdSpace:(id)arg1 ;
-(void)unregisterAdSpace:(id)arg1 ;
-(void)determineAppInstallAttributionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)lookupAdConversionDetails:(/*^block*/id)arg1 ;
-(void)requestAttributionDetailsWithBlock:(/*^block*/id)arg1 ;
-(void)_reportAdSpaceStatusEventWithAdOpportunityIdentifier:(id)arg1 adOriginIdentifier:(id)arg2 durationInFeed:(double)arg3 responseTime:(double)arg4 screenfuls:(long long)arg5 errorCode:(long long)arg6 ;
-(void)addClientToSegments:(id)arg1 replaceExisting:(BOOL)arg2 ;
-(void)reportPrerollRequest;
-(void)requestAdsForContext:(id)arg1 creativeTypes:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setApplicationCanReceiveBackgroundAds:(BOOL)arg1 ;
-(void)setAdSpaces:(NSMutableArray *)arg1 ;
-(int)classicUnavailableToken;
-(void)setClassicUnavailableToken:(int)arg1 ;
@end

