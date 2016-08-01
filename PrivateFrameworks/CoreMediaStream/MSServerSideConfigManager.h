/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSServerSideConfigProtocolDelegate.h>

@class NSString, NSDictionary, MSMediaStreamDaemon, MSServerSideConfigProtocol;

@interface MSServerSideConfigManager : NSObject <MSServerSideConfigProtocolDelegate> {

	NSString* _personID;
	NSDictionary* _config;
	MSMediaStreamDaemon* _daemon;
	NSString* _configPath;
	MSServerSideConfigProtocol* _protocol;
	int _state;

}

@property (nonatomic,readonly) NSString * personID;                     //@synthesize personID=_personID - In the implementation block
@property (nonatomic,retain) NSDictionary * config; 
@property (assign,nonatomic) MSMediaStreamDaemon * daemon;              //@synthesize daemon=_daemon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)configManagerForPersonID:(id)arg1 ;
+(id)existingConfigManagerForPersonID:(id)arg1 ;
+(void)abortAllActivities;
+(long long)longLongValueForParameter:(id)arg1 forPersonID:(id)arg2 defaultValue:(long long)arg3 ;
+(int)intValueForParameter:(id)arg1 forPersonID:(id)arg2 defaultValue:(int)arg3 ;
+(id)objectForKey:(id)arg1 forPersonID:(id)arg2 defaultValue:(id)arg3 ;
+(double)doubleValueForParameter:(id)arg1 forPersonID:(id)arg2 defaultValue:(double)arg3 ;
+(long long)longValueForParameter:(id)arg1 forPersonID:(id)arg2 defaultValue:(long long)arg3 ;
+(void)forgetPersonID:(id)arg1 ;
-(void)dealloc;
-(NSDictionary *)config;
-(void)setConfig:(NSDictionary *)arg1 ;
-(NSString *)personID;
-(void)refreshConfiguration;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(void)serverSideConfigProtocol:(id)arg1 didFinishWithConfiguration:(id)arg2 error:(id)arg3 ;
-(void)serverSideConfigProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2 ;
-(MSMediaStreamDaemon *)daemon;
-(void)setDaemon:(MSMediaStreamDaemon *)arg1 ;
-(void)abort;
@end

