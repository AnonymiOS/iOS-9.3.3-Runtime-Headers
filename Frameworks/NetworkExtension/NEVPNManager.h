/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:37 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NEPrettyDescription.h>

@class NEVPNConnection, NEConfiguration, NSArray, NSString, NEVPNProtocol;

@interface NEVPNManager : NSObject <NEPrettyDescription> {

	BOOL _hasLoaded;
	NEVPNConnection* _connection;
	NEConfiguration* _configuration;

}

@property (copy) NSArray * onDemandRules; 
@property (getter=isOnDemandEnabled) BOOL onDemandEnabled; 
@property (copy) NSString * localizedDescription; 
@property (retain) NEVPNProtocol * protocol; 
@property (retain) NEVPNProtocol * protocolConfiguration; 
@property (readonly) NEVPNConnection * connection;                      //@synthesize connection=_connection - In the implementation block
@property (getter=isEnabled) BOOL enabled; 
@property (copy) NEConfiguration * configuration;                       //@synthesize configuration=_configuration - In the implementation block
@property (assign) BOOL hasLoaded;                                      //@synthesize hasLoaded=_hasLoaded - In the implementation block
+(id)sharedManager;
+(id)loadedManagers;
+(id)mapError:(id)arg1 ;
-(id)init;
-(id)description;
-(NSString *)localizedDescription;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setConfiguration:(NEConfiguration *)arg1 ;
-(NEConfiguration *)configuration;
-(NEVPNConnection *)connection;
-(NEVPNProtocol *)protocol;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)setProtocol:(NEVPNProtocol *)arg1 ;
-(BOOL)hasLoaded;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(BOOL)isOnDemandEnabled;
-(NSArray *)onDemandRules;
-(void)setOnDemandEnabled:(BOOL)arg1 ;
-(void)setHasLoaded:(BOOL)arg1 ;
-(id)initWithGrade:(long long)arg1 connection:(id)arg2 ;
-(BOOL)isProtocolTypeValid:(long long)arg1 ;
-(void)additionalSetup;
-(void)loadFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)saveToPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(NEVPNProtocol *)protocolConfiguration;
-(void)setProtocolConfiguration:(NEVPNProtocol *)arg1 ;
-(void)setOnDemandRules:(NSArray *)arg1 ;
@end

