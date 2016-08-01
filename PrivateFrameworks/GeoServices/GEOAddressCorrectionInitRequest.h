/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:09 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOAddressCorrectionInitRequest : PBRequest <NSCopying> {

	NSString* _personID;
	NSString* _token;
	BOOL _supportsMultipleAddresses;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,readonly) BOOL hasToken; 
@property (nonatomic,retain) NSString * token;                               //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) BOOL hasPersonID; 
@property (nonatomic,retain) NSString * personID;                            //@synthesize personID=_personID - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsMultipleAddresses; 
@property (assign,nonatomic) BOOL supportsMultipleAddresses;                 //@synthesize supportsMultipleAddresses=_supportsMultipleAddresses - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(BOOL)hasToken;
-(NSString *)personID;
-(BOOL)hasPersonID;
-(void)setHasSupportsMultipleAddresses:(BOOL)arg1 ;
-(BOOL)hasSupportsMultipleAddresses;
-(void)setPersonID:(NSString *)arg1 ;
-(void)setSupportsMultipleAddresses:(BOOL)arg1 ;
-(BOOL)supportsMultipleAddresses;
@end

