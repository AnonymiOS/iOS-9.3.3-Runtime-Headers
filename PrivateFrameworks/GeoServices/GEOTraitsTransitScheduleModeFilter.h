/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:09 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOTraitsTransitScheduleTimeRange;

@interface GEOTraitsTransitScheduleModeFilter : PBCodable <NSCopying> {

	double _additionalTimeLimit;
	unsigned _numAdditionalDepartures;
	GEOTraitsTransitScheduleTimeRange* _timeRange;
	SCD_Struct_GE7 _has;

}

@property (nonatomic,readonly) BOOL hasTimeRange; 
@property (nonatomic,retain) GEOTraitsTransitScheduleTimeRange * timeRange;              //@synthesize timeRange=_timeRange - In the implementation block
@property (assign,nonatomic) BOOL hasNumAdditionalDepartures; 
@property (assign,nonatomic) unsigned numAdditionalDepartures;                           //@synthesize numAdditionalDepartures=_numAdditionalDepartures - In the implementation block
@property (assign,nonatomic) BOOL hasAdditionalTimeLimit; 
@property (assign,nonatomic) double additionalTimeLimit;                                 //@synthesize additionalTimeLimit=_additionalTimeLimit - In the implementation block
-(void)configureWithDefaultStartTime:(double)arg1 duration:(double)arg2 numAdditionalDepartures:(unsigned)arg3 ;
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
-(unsigned)numAdditionalDepartures;
-(BOOL)hasTimeRange;
-(void)setNumAdditionalDepartures:(unsigned)arg1 ;
-(void)setAdditionalTimeLimit:(double)arg1 ;
-(void)setHasNumAdditionalDepartures:(BOOL)arg1 ;
-(double)additionalTimeLimit;
-(BOOL)hasAdditionalTimeLimit;
-(BOOL)hasNumAdditionalDepartures;
-(void)setHasAdditionalTimeLimit:(BOOL)arg1 ;
-(GEOTraitsTransitScheduleTimeRange *)timeRange;
-(void)setTimeRange:(GEOTraitsTransitScheduleTimeRange *)arg1 ;
@end

