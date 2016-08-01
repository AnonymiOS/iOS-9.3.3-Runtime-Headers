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

@class NSString, GEOLocation;

@interface GEOSignificantLocation : PBCodable <NSCopying> {

	double _confidence;
	NSString* _identifier;
	GEOLocation* _location;
	unsigned _locationIndex;
	unsigned _numberOfVisitsBucket;
	SCD_Struct_GE49 _has;

}

@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location;                     //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasLocationIndex; 
@property (assign,nonatomic) unsigned locationIndex;                     //@synthesize locationIndex=_locationIndex - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfVisitsBucket; 
@property (assign,nonatomic) unsigned numberOfVisitsBucket;              //@synthesize numberOfVisitsBucket=_numberOfVisitsBucket - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) double confidence;                          //@synthesize confidence=_confidence - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(GEOLocation *)location;
-(id)dictionaryRepresentation;
-(void)setLocation:(GEOLocation *)arg1 ;
-(double)confidence;
-(void)setConfidence:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLocation;
-(BOOL)hasIdentifier;
-(BOOL)hasNumberOfVisitsBucket;
-(void)setHasLocationIndex:(BOOL)arg1 ;
-(unsigned)locationIndex;
-(BOOL)hasLocationIndex;
-(unsigned)numberOfVisitsBucket;
-(void)setNumberOfVisitsBucket:(unsigned)arg1 ;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(void)setHasNumberOfVisitsBucket:(BOOL)arg1 ;
-(void)setLocationIndex:(unsigned)arg1 ;
@end

