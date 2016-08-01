/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:08 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOAddressCorrectionUpdateResponse : PBCodable <NSCopying> {

	unsigned _retryScheduleInDays;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) BOOL hasRetryScheduleInDays; 
@property (assign,nonatomic) unsigned retryScheduleInDays;              //@synthesize retryScheduleInDays=_retryScheduleInDays - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasRetryScheduleInDays;
-(void)setRetryScheduleInDays:(unsigned)arg1 ;
-(void)setHasRetryScheduleInDays:(BOOL)arg1 ;
-(unsigned)retryScheduleInDays;
@end
