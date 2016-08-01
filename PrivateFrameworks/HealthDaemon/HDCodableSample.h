/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableObject;

@interface HDCodableSample : PBCodable <NSCopying> {

	long long _dataType;
	double _endDate;
	double _startDate;
	HDCodableObject* _object;
	SCD_Struct_HD29 _has;

}

@property (nonatomic,readonly) BOOL hasObject; 
@property (nonatomic,retain) HDCodableObject * object;              //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) BOOL hasDataType; 
@property (assign,nonatomic) long long dataType;                    //@synthesize dataType=_dataType - In the implementation block
@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) double startDate;                      //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) double endDate;                        //@synthesize endDate=_endDate - In the implementation block
-(double)decodedStartDate;
-(double)decodedEndDate;
-(id)decodedCategoryType;
-(id)decodedBinarySampleType;
-(id)decodedQuantityType;
-(id)decodedWorkoutType;
-(id)decodedCorrelationType;
-(id)_decodedObjectTypeOfClass:(Class)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HDCodableObject *)object;
-(void)setObject:(HDCodableObject *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasStartDate:(BOOL)arg1 ;
-(BOOL)hasStartDate;
-(void)setHasEndDate:(BOOL)arg1 ;
-(BOOL)hasEndDate;
-(long long)dataType;
-(void)setEndDate:(double)arg1 ;
-(void)setStartDate:(double)arg1 ;
-(double)startDate;
-(double)endDate;
-(void)setDataType:(long long)arg1 ;
-(BOOL)hasObject;
-(void)setHasDataType:(BOOL)arg1 ;
-(BOOL)hasDataType;
@end

