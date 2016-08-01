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

@class NSData;

@interface GEOStepFeedback : PBCodable <NSCopying> {

	double _completionTimeStamp;
	NSData* _routeID;
	unsigned _routeIndex;
	unsigned _stepID;
	BOOL _completedStep;
	SCD_Struct_GE6 _has;

}

@property (assign,nonatomic) BOOL hasStepID; 
@property (assign,nonatomic) unsigned stepID;                          //@synthesize stepID=_stepID - In the implementation block
@property (assign,nonatomic) BOOL hasCompletionTimeStamp; 
@property (assign,nonatomic) double completionTimeStamp;               //@synthesize completionTimeStamp=_completionTimeStamp - In the implementation block
@property (assign,nonatomic) BOOL hasCompletedStep; 
@property (assign,nonatomic) BOOL completedStep;                       //@synthesize completedStep=_completedStep - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteID; 
@property (nonatomic,retain) NSData * routeID;                         //@synthesize routeID=_routeID - In the implementation block
@property (assign,nonatomic) BOOL hasRouteIndex; 
@property (assign,nonatomic) unsigned routeIndex;                      //@synthesize routeIndex=_routeIndex - In the implementation block
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
-(void)setRouteID:(NSData *)arg1 ;
-(BOOL)hasRouteID;
-(NSData *)routeID;
-(BOOL)hasRouteIndex;
-(void)setHasRouteIndex:(BOOL)arg1 ;
-(void)setRouteIndex:(unsigned)arg1 ;
-(unsigned)routeIndex;
-(BOOL)hasStepID;
-(void)setHasStepID:(BOOL)arg1 ;
-(void)setStepID:(unsigned)arg1 ;
-(unsigned)stepID;
-(BOOL)completedStep;
-(void)setHasCompletionTimeStamp:(BOOL)arg1 ;
-(void)setCompletionTimeStamp:(double)arg1 ;
-(BOOL)hasCompletedStep;
-(void)setHasCompletedStep:(BOOL)arg1 ;
-(void)setCompletedStep:(BOOL)arg1 ;
-(double)completionTimeStamp;
-(BOOL)hasCompletionTimeStamp;
@end

