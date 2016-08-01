/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:02 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSDate, GEOSolarEclipticCelestialBodyData, GEOEquatorialCelestialBodyData, GEOHorizontalCelestialBodyData;

@interface GEOCelestialEphemeris : NSObject {

	NSDate* _date;
	SCD_Struct_GE16 _coordinate;
	long long _body;
	GEOSolarEclipticCelestialBodyData* _eclipticCoord;
	GEOEquatorialCelestialBodyData* _equatorialCoord;
	GEOHorizontalCelestialBodyData* _horizontalCoord;
	NSDate* _rise;
	NSDate* _transit;
	NSDate* _set;
	double _phaseAngle;
	double _illuminatedFraction;
	double _elongation;
	double _parallacticAngle;

}

@property (nonatomic,readonly) NSDate * rise;                                                  //@synthesize rise=_rise - In the implementation block
@property (nonatomic,readonly) NSDate * transit;                                               //@synthesize transit=_transit - In the implementation block
@property (nonatomic,readonly) NSDate * set;                                                   //@synthesize set=_set - In the implementation block
@property (nonatomic,readonly) double phaseAngle;                                              //@synthesize phaseAngle=_phaseAngle - In the implementation block
@property (nonatomic,readonly) double illuminatedFraction;                                     //@synthesize illuminatedFraction=_illuminatedFraction - In the implementation block
@property (nonatomic,readonly) double elongation;                                              //@synthesize elongation=_elongation - In the implementation block
@property (nonatomic,readonly) double parallacticAngle;                                        //@synthesize parallacticAngle=_parallacticAngle - In the implementation block
@property (nonatomic,readonly) GEOSolarEclipticCelestialBodyData * eclipticCoord; 
@property (nonatomic,readonly) GEOEquatorialCelestialBodyData * equatorialCoord; 
@property (nonatomic,readonly) GEOHorizontalCelestialBodyData * horizontalCoord; 
-(void)dealloc;
-(NSDate *)set;
-(void)_getRightAscension:(double*)arg1 declination:(double*)arg2 forJulianDay:(double)arg3 forBody:(long long)arg4 ;
-(NSDate *)transit;
-(GEOSolarEclipticCelestialBodyData *)eclipticCoord;
-(double)illuminatedFraction;
-(double)phaseAngle;
-(double)elongation;
-(CAARiseTransitSetDetails)_riseTransitSetForBody:(long long)arg1 ;
-(GEOEquatorialCelestialBodyData *)equatorialCoord;
-(GEOHorizontalCelestialBodyData *)horizontalCoord;
-(id)initWithLocation:(SCD_Struct_GE16)arg1 date:(id)arg2 body:(long long)arg3 ;
-(NSDate *)rise;
-(double)parallacticAngle;
@end

