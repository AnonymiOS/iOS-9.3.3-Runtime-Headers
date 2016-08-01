/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:05 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEONameInfo : PBCodable <NSCopying> {

	NSString* _locale;
	NSString* _name;
	NSString* _phoneticName;
	int _phoneticType;
	NSString* _shield;
	int _shieldType;
	int _signType;
	SCD_Struct_GE49 _has;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneticName; 
@property (nonatomic,retain) NSString * phoneticName;              //@synthesize phoneticName=_phoneticName - In the implementation block
@property (nonatomic,readonly) BOOL hasShield; 
@property (nonatomic,retain) NSString * shield;                    //@synthesize shield=_shield - In the implementation block
@property (assign,nonatomic) BOOL hasShieldType; 
@property (assign,nonatomic) int shieldType;                       //@synthesize shieldType=_shieldType - In the implementation block
@property (assign,nonatomic) BOOL hasPhoneticType; 
@property (assign,nonatomic) int phoneticType;                     //@synthesize phoneticType=_phoneticType - In the implementation block
@property (assign,nonatomic) BOOL hasSignType; 
@property (assign,nonatomic) int signType;                         //@synthesize signType=_signType - In the implementation block
@property (nonatomic,readonly) BOOL hasLocale; 
@property (nonatomic,retain) NSString * locale;                    //@synthesize locale=_locale - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)locale;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setPhoneticName:(NSString *)arg1 ;
-(NSString *)phoneticName;
-(BOOL)hasPhoneticName;
-(BOOL)hasName;
-(NSString *)shield;
-(void)setShield:(NSString *)arg1 ;
-(BOOL)hasShield;
-(BOOL)hasLocale;
-(BOOL)hasShieldType;
-(void)setSignType:(int)arg1 ;
-(int)phoneticType;
-(BOOL)hasPhoneticType;
-(void)setHasShieldType:(BOOL)arg1 ;
-(int)shieldType;
-(int)signType;
-(void)setHasPhoneticType:(BOOL)arg1 ;
-(void)setHasSignType:(BOOL)arg1 ;
-(BOOL)hasSignType;
-(void)setShieldType:(int)arg1 ;
-(void)setPhoneticType:(int)arg1 ;
@end

