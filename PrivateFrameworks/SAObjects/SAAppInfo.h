/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:18 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSDictionary, SAGlance, NSNumber, SASiriSupport, SAStarkSupport, NSArray;

@interface SAAppInfo : SADomainObject

@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSString * appName; 
@property (nonatomic,copy) NSDictionary * appNameMap; 
@property (nonatomic,copy) NSString * appVersion; 
@property (nonatomic,copy) NSString * carPlayAlternativeDisplayName; 
@property (nonatomic,copy) NSDictionary * carPlayAlternativeDisplayNameMap; 
@property (nonatomic,copy) NSString * displayAppName; 
@property (nonatomic,copy) NSDictionary * displayAppNameMap; 
@property (nonatomic,retain) SAGlance * glance; 
@property (assign,nonatomic) BOOL hidden; 
@property (assign,nonatomic) BOOL isNanoApp; 
@property (nonatomic,copy) NSNumber * nowPlayingAppWithBrowsableContent; 
@property (nonatomic,copy) NSString * providerName; 
@property (nonatomic,retain) SASiriSupport * siriSupport; 
@property (nonatomic,copy) NSString * spotlightName; 
@property (nonatomic,copy) NSDictionary * spotlightNameMap; 
@property (nonatomic,retain) SAStarkSupport * starkSupport; 
@property (nonatomic,copy) NSArray * supportedCommands; 
@property (nonatomic,copy) NSArray * supportedSchemes; 
+(id)appInfoWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)appInfo;
-(void)setHidden:(BOOL)arg1 ;
-(NSString *)providerName;
-(BOOL)hidden;
-(id)groupIdentifier;
-(NSString *)appId;
-(void)setAppId:(NSString *)arg1 ;
-(SAGlance *)glance;
-(SAStarkSupport *)starkSupport;
-(void)setAppName:(NSString *)arg1 ;
-(NSDictionary *)appNameMap;
-(void)setAppNameMap:(NSDictionary *)arg1 ;
-(NSString *)appVersion;
-(void)setAppVersion:(NSString *)arg1 ;
-(NSString *)carPlayAlternativeDisplayName;
-(void)setCarPlayAlternativeDisplayName:(NSString *)arg1 ;
-(NSDictionary *)carPlayAlternativeDisplayNameMap;
-(void)setCarPlayAlternativeDisplayNameMap:(NSDictionary *)arg1 ;
-(NSString *)displayAppName;
-(void)setDisplayAppName:(NSString *)arg1 ;
-(NSDictionary *)displayAppNameMap;
-(void)setDisplayAppNameMap:(NSDictionary *)arg1 ;
-(void)setGlance:(SAGlance *)arg1 ;
-(BOOL)isNanoApp;
-(void)setIsNanoApp:(BOOL)arg1 ;
-(NSNumber *)nowPlayingAppWithBrowsableContent;
-(void)setNowPlayingAppWithBrowsableContent:(NSNumber *)arg1 ;
-(SASiriSupport *)siriSupport;
-(void)setSiriSupport:(SASiriSupport *)arg1 ;
-(NSString *)spotlightName;
-(void)setSpotlightName:(NSString *)arg1 ;
-(NSDictionary *)spotlightNameMap;
-(void)setSpotlightNameMap:(NSDictionary *)arg1 ;
-(void)setStarkSupport:(SAStarkSupport *)arg1 ;
-(NSArray *)supportedCommands;
-(NSArray *)supportedSchemes;
-(void)setSupportedSchemes:(NSArray *)arg1 ;
-(void)setProviderName:(NSString *)arg1 ;
-(NSString *)appName;
-(void)setSupportedCommands:(NSArray *)arg1 ;
-(id)encodedClassName;
@end

