/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableRoutineLocation;

@interface HDCodableRoutineScenarioTriggeredRequest : PBRequest <NSCopying> {

	unsigned long long _triggerTypes;
	HDCodableRoutineLocation* _currentLocation;
	SCD_Struct_HD16 _has;

}

@property (assign,nonatomic) BOOL hasTriggerTypes; 
@property (assign,nonatomic) unsigned long long triggerTypes;                         //@synthesize triggerTypes=_triggerTypes - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrentLocation; 
@property (nonatomic,retain) HDCodableRoutineLocation * currentLocation;              //@synthesize currentLocation=_currentLocation - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(HDCodableRoutineLocation *)currentLocation;
-(void)setCurrentLocation:(HDCodableRoutineLocation *)arg1 ;
-(BOOL)hasCurrentLocation;
-(void)setTriggerTypes:(unsigned long long)arg1 ;
-(unsigned long long)triggerTypes;
-(void)setHasTriggerTypes:(BOOL)arg1 ;
-(BOOL)hasTriggerTypes;
@end

