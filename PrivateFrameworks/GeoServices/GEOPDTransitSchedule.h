/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:00 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDDeparturePredicate, NSMutableArray;

@interface GEOPDTransitSchedule : PBCodable <NSCopying> {

	SCD_Struct_GE50 _operatingHoursRange;
	GEOPDDeparturePredicate* _departurePredicateCountdown;
	GEOPDDeparturePredicate* _departurePredicateStamp;
	NSMutableArray* _departureSequences;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,retain) NSMutableArray * departureSequences;                                //@synthesize departureSequences=_departureSequences - In the implementation block
@property (nonatomic,readonly) BOOL hasDeparturePredicateCountdown; 
@property (nonatomic,retain) GEOPDDeparturePredicate * departurePredicateCountdown;              //@synthesize departurePredicateCountdown=_departurePredicateCountdown - In the implementation block
@property (nonatomic,readonly) BOOL hasDeparturePredicateStamp; 
@property (nonatomic,retain) GEOPDDeparturePredicate * departurePredicateStamp;                  //@synthesize departurePredicateStamp=_departurePredicateStamp - In the implementation block
@property (assign,nonatomic) BOOL hasOperatingHoursRange; 
@property (assign,nonatomic) SCD_Struct_GE51 operatingHoursRange;                                //@synthesize operatingHoursRange=_operatingHoursRange - In the implementation block
+(id)transitScheduleForPlaceData:(id)arg1 ;
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
-(SCD_Struct_GE51)operatingHoursRange;
-(void)setDepartureSequences:(NSMutableArray *)arg1 ;
-(void)setHasOperatingHoursRange:(BOOL)arg1 ;
-(BOOL)hasOperatingHoursRange;
-(void)setDeparturePredicateCountdown:(GEOPDDeparturePredicate *)arg1 ;
-(id)departureSequenceAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)departureSequencesCount;
-(NSMutableArray *)departureSequences;
-(BOOL)hasDeparturePredicateStamp;
-(BOOL)hasDeparturePredicateCountdown;
-(GEOPDDeparturePredicate *)departurePredicateCountdown;
-(void)clearDepartureSequences;
-(void)setOperatingHoursRange:(SCD_Struct_GE51)arg1 ;
-(GEOPDDeparturePredicate *)departurePredicateStamp;
-(void)addDepartureSequence:(id)arg1 ;
-(void)setDeparturePredicateStamp:(GEOPDDeparturePredicate *)arg1 ;
@end

