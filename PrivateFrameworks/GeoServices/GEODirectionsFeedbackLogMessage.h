/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:06 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, GEOLocation;

@interface GEODirectionsFeedbackLogMessage : PBCodable <NSCopying> {

	SCD_Struct_GE136 _navigationAudioFeedback;
	double _durationOfTrip;
	NSMutableArray* _directionsFeedbacks;
	GEOLocation* _finalLocation;
	BOOL _arrivedAtDestination;
	SCD_Struct_GE49 _has;

}

@property (nonatomic,retain) NSMutableArray * directionsFeedbacks;                  //@synthesize directionsFeedbacks=_directionsFeedbacks - In the implementation block
@property (nonatomic,readonly) BOOL hasFinalLocation; 
@property (nonatomic,retain) GEOLocation * finalLocation;                           //@synthesize finalLocation=_finalLocation - In the implementation block
@property (assign,nonatomic) BOOL hasArrivedAtDestination; 
@property (assign,nonatomic) BOOL arrivedAtDestination;                             //@synthesize arrivedAtDestination=_arrivedAtDestination - In the implementation block
@property (assign,nonatomic) BOOL hasNavigationAudioFeedback; 
@property (assign,nonatomic) SCD_Struct_GE134 navigationAudioFeedback;              //@synthesize navigationAudioFeedback=_navigationAudioFeedback - In the implementation block
@property (assign,nonatomic) BOOL hasDurationOfTrip; 
@property (assign,nonatomic) double durationOfTrip;                                 //@synthesize durationOfTrip=_durationOfTrip - In the implementation block
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
-(BOOL)hasDurationOfTrip;
-(void)setHasNavigationAudioFeedback:(BOOL)arg1 ;
-(double)durationOfTrip;
-(BOOL)hasFinalLocation;
-(void)setFinalLocation:(GEOLocation *)arg1 ;
-(NSMutableArray *)directionsFeedbacks;
-(unsigned long long)directionsFeedbacksCount;
-(BOOL)hasNavigationAudioFeedback;
-(GEOLocation *)finalLocation;
-(BOOL)hasArrivedAtDestination;
-(id)directionsFeedbackAtIndex:(unsigned long long)arg1 ;
-(void)setArrivedAtDestination:(BOOL)arg1 ;
-(void)setDurationOfTrip:(double)arg1 ;
-(void)setDirectionsFeedbacks:(NSMutableArray *)arg1 ;
-(BOOL)arrivedAtDestination;
-(void)addDirectionsFeedback:(id)arg1 ;
-(void)setHasArrivedAtDestination:(BOOL)arg1 ;
-(void)setHasDurationOfTrip:(BOOL)arg1 ;
-(void)setNavigationAudioFeedback:(SCD_Struct_GE134)arg1 ;
-(SCD_Struct_GE134)navigationAudioFeedback;
-(void)clearDirectionsFeedbacks;
@end

