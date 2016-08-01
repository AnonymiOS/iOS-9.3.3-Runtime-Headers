/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:30 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface MCAPNConfiguration : NSObject {

	NSString* _name;
	NSString* _username;
	NSString* _password;
	NSString* _proxyServer;
	NSNumber* _proxyPort;
	NSString* _authenticationType;

}

@property (nonatomic,retain) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * username;                        //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * password;                        //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSString * proxyServer;                     //@synthesize proxyServer=_proxyServer - In the implementation block
@property (nonatomic,retain) NSNumber * proxyPort;                       //@synthesize proxyPort=_proxyPort - In the implementation block
@property (nonatomic,retain) NSString * authenticationType;              //@synthesize authenticationType=_authenticationType - In the implementation block
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(id)stubDictionary;
-(id)initWithDictionary:(id)arg1 outError:(id*)arg2 ;
-(NSString *)authenticationType;
-(id)localizedAuthenticationType;
-(NSString *)proxyServer;
-(NSNumber *)proxyPort;
-(void)setProxyServer:(NSString *)arg1 ;
-(void)setProxyPort:(NSNumber *)arg1 ;
-(void)setAuthenticationType:(NSString *)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
@end

