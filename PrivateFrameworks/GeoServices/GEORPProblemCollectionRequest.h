/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:08 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSMutableArray, GEORPUserCredentials, GEOLocation;

@interface GEORPProblemCollectionRequest : PBRequest <NSCopying> {

	NSString* _countryCode;
	NSData* _devicePushToken;
	NSString* _hwMachine;
	NSString* _inputLanguage;
	NSString* _osRelease;
	NSMutableArray* _requestElements;
	GEORPUserCredentials* _userCredentials;
	NSString* _userEmail;
	GEOLocation* _userLocation;

}

@property (nonatomic,retain) NSMutableArray * requestElements;                    //@synthesize requestElements=_requestElements - In the implementation block
@property (nonatomic,readonly) BOOL hasHwMachine; 
@property (nonatomic,retain) NSString * hwMachine;                                //@synthesize hwMachine=_hwMachine - In the implementation block
@property (nonatomic,readonly) BOOL hasOsRelease; 
@property (nonatomic,retain) NSString * osRelease;                                //@synthesize osRelease=_osRelease - In the implementation block
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                              //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) BOOL hasInputLanguage; 
@property (nonatomic,retain) NSString * inputLanguage;                            //@synthesize inputLanguage=_inputLanguage - In the implementation block
@property (nonatomic,readonly) BOOL hasUserCredentials; 
@property (nonatomic,retain) GEORPUserCredentials * userCredentials;              //@synthesize userCredentials=_userCredentials - In the implementation block
@property (nonatomic,readonly) BOOL hasDevicePushToken; 
@property (nonatomic,retain) NSData * devicePushToken;                            //@synthesize devicePushToken=_devicePushToken - In the implementation block
@property (nonatomic,readonly) BOOL hasUserEmail; 
@property (nonatomic,retain) NSString * userEmail;                                //@synthesize userEmail=_userEmail - In the implementation block
@property (nonatomic,readonly) BOOL hasUserLocation; 
@property (nonatomic,retain) GEOLocation * userLocation;                          //@synthesize userLocation=_userLocation - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)devicePushToken;
-(void)setUserEmail:(NSString *)arg1 ;
-(NSString *)userEmail;
-(void)setDevicePushToken:(NSData *)arg1 ;
-(BOOL)hasUserEmail;
-(BOOL)hasDevicePushToken;
-(void)setUserLocation:(GEOLocation *)arg1 ;
-(BOOL)hasUserLocation;
-(unsigned long long)requestElementsCount;
-(void)clearRequestElements;
-(unsigned)requestTypeCode;
-(NSMutableArray *)requestElements;
-(Class)responseClass;
-(void)setRequestElements:(NSMutableArray *)arg1 ;
-(void)setInputLanguage:(NSString *)arg1 ;
-(NSString *)inputLanguage;
-(BOOL)hasInputLanguage;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(BOOL)hasCountryCode;
-(void)setHwMachine:(NSString *)arg1 ;
-(BOOL)hasHwMachine;
-(NSString *)hwMachine;
-(GEORPUserCredentials *)userCredentials;
-(void)setUserCredentials:(GEORPUserCredentials *)arg1 ;
-(BOOL)hasUserCredentials;
-(void)addRequestElement:(id)arg1 ;
-(void)setOsRelease:(NSString *)arg1 ;
-(NSString *)osRelease;
-(id)requestElementAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasOsRelease;
-(GEOLocation *)userLocation;
@end

