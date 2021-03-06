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

@class NSString, NSMutableArray, GEOLatLng;

@interface GEOPBTransitAccessPoint : PBCodable <NSCopying> {

	unsigned long long _muid;
	unsigned _accessPointIndex;
	NSString* _entranceNameDisplayString;
	NSMutableArray* _entranceZoomNames;
	NSString* _exitNameDisplayString;
	NSMutableArray* _exitZoomNames;
	GEOLatLng* _location;
	unsigned _stationIndex;
	SCD_Struct_GE49 _has;

}

@property (assign,nonatomic) BOOL hasAccessPointIndex; 
@property (assign,nonatomic) unsigned accessPointIndex;                         //@synthesize accessPointIndex=_accessPointIndex - In the implementation block
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid;                           //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLatLng * location;                              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasStationIndex; 
@property (assign,nonatomic) unsigned stationIndex;                             //@synthesize stationIndex=_stationIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * entranceZoomNames;                //@synthesize entranceZoomNames=_entranceZoomNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * exitZoomNames;                    //@synthesize exitZoomNames=_exitZoomNames - In the implementation block
@property (nonatomic,readonly) BOOL hasEntranceNameDisplayString; 
@property (nonatomic,retain) NSString * entranceNameDisplayString;              //@synthesize entranceNameDisplayString=_entranceNameDisplayString - In the implementation block
@property (nonatomic,readonly) BOOL hasExitNameDisplayString; 
@property (nonatomic,retain) NSString * exitNameDisplayString;                  //@synthesize exitNameDisplayString=_exitNameDisplayString - In the implementation block
-(id)bestExitName;
-(id)bestEntranceNameWithLocale:(out id*)arg1 ;
-(id)bestExitNameWithLocale:(out id*)arg1 ;
-(id)bestEntranceName;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOLatLng *)location;
-(id)dictionaryRepresentation;
-(void)setLocation:(GEOLatLng *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setExitNameDisplayString:(NSString *)arg1 ;
-(unsigned)accessPointIndex;
-(void)addExitZoomName:(id)arg1 ;
-(void)clearEntranceZoomNames;
-(void)setHasMuid:(BOOL)arg1 ;
-(NSMutableArray *)entranceZoomNames;
-(BOOL)hasExitNameDisplayString;
-(BOOL)hasMuid;
-(void)setHasAccessPointIndex:(BOOL)arg1 ;
-(BOOL)hasLocation;
-(void)setEntranceZoomNames:(NSMutableArray *)arg1 ;
-(unsigned long long)muid;
-(BOOL)hasAccessPointIndex;
-(void)clearExitZoomNames;
-(void)setEntranceNameDisplayString:(NSString *)arg1 ;
-(NSMutableArray *)exitZoomNames;
-(unsigned long long)entranceZoomNamesCount;
-(id)entranceZoomNameAtIndex:(unsigned long long)arg1 ;
-(void)setHasStationIndex:(BOOL)arg1 ;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setStationIndex:(unsigned)arg1 ;
-(void)addEntranceZoomName:(id)arg1 ;
-(BOOL)hasStationIndex;
-(NSString *)entranceNameDisplayString;
-(void)setAccessPointIndex:(unsigned)arg1 ;
-(void)setExitZoomNames:(NSMutableArray *)arg1 ;
-(unsigned)stationIndex;
-(unsigned long long)exitZoomNamesCount;
-(id)exitZoomNameAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasEntranceNameDisplayString;
-(NSString *)exitNameDisplayString;
@end

