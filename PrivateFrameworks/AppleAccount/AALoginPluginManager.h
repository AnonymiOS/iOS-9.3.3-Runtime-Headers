/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:22 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AASetupAssistantDelegateService;
@class NSArray, NSObject;

@interface AALoginPluginManager : NSObject {

	NSArray* _plugins;
	BOOL _shouldStashLoginResponse;
	BOOL _hasStashedLoginResponse;
	NSObject*<OS_dispatch_queue> _pluginNotificationQueue;
	id<AASetupAssistantDelegateService> _idsPlugin;
	BOOL _shouldSkipiTunesPlugin;

}

@property (assign,nonatomic) BOOL shouldSkipiTunesPlugin;                //@synthesize shouldSkipiTunesPlugin=_shouldSkipiTunesPlugin - In the implementation block
@property (assign,nonatomic) BOOL shouldStashLoginResponse; 
+(id)sharedInstance;
-(id)init;
-(void)_loadPluginsLimitedToBundleIDs:(id)arg1 ;
-(BOOL)_notifyServicesOfLoginResponse:(id)arg1 forAppleID:(id)arg2 password:(id)arg3 ;
-(void)_stashServiceTokensFromResponse:(id)arg1 ;
-(id)initForPluginBundleIDs:(id)arg1 ;
-(id)collectParametersForLoginRequest;
-(id)collectParametersForIdentityEstablishmentRequest;
-(void)notifyServicesOfLoginResponse:(id)arg1 forAppleID:(id)arg2 password:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)shouldStashLoginResponse;
-(void)setShouldStashLoginResponse:(BOOL)arg1 ;
-(void)unstashLoginResponse;
-(BOOL)shouldSkipiTunesPlugin;
-(void)setShouldSkipiTunesPlugin:(BOOL)arg1 ;
@end

