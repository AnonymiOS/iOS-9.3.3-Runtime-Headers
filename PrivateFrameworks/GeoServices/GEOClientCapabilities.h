/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:04 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOClientCapabilities : PBCodable <NSCopying> {

	NSString* _appMajorVersion;
	NSString* _appMinorVersion;
	NSString* _deviceCountryCode;
	NSMutableArray* _displayLanguages;
	NSString* _displayRegion;
	NSString* _hardwareModel;
	int _maxFormatterSupported;
	int _maxManeuverTypeSupported;
	int _maxRouteIncidentSupported;
	unsigned _maxTrafficSpeedSupported;
	BOOL _clusteredTransitRoutesSupported;
	BOOL _internalInstall;
	SCD_Struct_GE60 _has;

}

@property (nonatomic,readonly) BOOL hasAppMajorVersion; 
@property (nonatomic,retain) NSString * appMajorVersion;                           //@synthesize appMajorVersion=_appMajorVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasAppMinorVersion; 
@property (nonatomic,retain) NSString * appMinorVersion;                           //@synthesize appMinorVersion=_appMinorVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasHardwareModel; 
@property (nonatomic,retain) NSString * hardwareModel;                             //@synthesize hardwareModel=_hardwareModel - In the implementation block
@property (assign,nonatomic) BOOL hasMaxManeuverTypeSupported; 
@property (assign,nonatomic) int maxManeuverTypeSupported;                         //@synthesize maxManeuverTypeSupported=_maxManeuverTypeSupported - In the implementation block
@property (assign,nonatomic) BOOL hasInternalInstall; 
@property (assign,nonatomic) BOOL internalInstall;                                 //@synthesize internalInstall=_internalInstall - In the implementation block
@property (nonatomic,retain) NSMutableArray * displayLanguages;                    //@synthesize displayLanguages=_displayLanguages - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayRegion; 
@property (nonatomic,retain) NSString * displayRegion;                             //@synthesize displayRegion=_displayRegion - In the implementation block
@property (assign,nonatomic) BOOL hasMaxTrafficSpeedSupported; 
@property (assign,nonatomic) unsigned maxTrafficSpeedSupported;                    //@synthesize maxTrafficSpeedSupported=_maxTrafficSpeedSupported - In the implementation block
@property (assign,nonatomic) BOOL hasMaxRouteIncidentSupported; 
@property (assign,nonatomic) int maxRouteIncidentSupported;                        //@synthesize maxRouteIncidentSupported=_maxRouteIncidentSupported - In the implementation block
@property (assign,nonatomic) BOOL hasMaxFormatterSupported; 
@property (assign,nonatomic) int maxFormatterSupported;                            //@synthesize maxFormatterSupported=_maxFormatterSupported - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceCountryCode; 
@property (nonatomic,retain) NSString * deviceCountryCode;                         //@synthesize deviceCountryCode=_deviceCountryCode - In the implementation block
@property (assign,nonatomic) BOOL hasClusteredTransitRoutesSupported; 
@property (assign,nonatomic) BOOL clusteredTransitRoutesSupported;                 //@synthesize clusteredTransitRoutesSupported=_clusteredTransitRoutesSupported - In the implementation block
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
-(NSMutableArray *)displayLanguages;
-(unsigned long long)displayLanguagesCount;
-(void)setDisplayRegion:(NSString *)arg1 ;
-(NSString *)displayRegion;
-(BOOL)hasDisplayRegion;
-(void)clearDisplayLanguages;
-(void)setDisplayLanguages:(NSMutableArray *)arg1 ;
-(BOOL)hasDeviceCountryCode;
-(NSString *)deviceCountryCode;
-(void)setDeviceCountryCode:(NSString *)arg1 ;
-(NSString *)appMinorVersion;
-(BOOL)hasAppMajorVersion;
-(void)setClusteredTransitRoutesSupported:(BOOL)arg1 ;
-(void)setMaxManeuverTypeSupported:(int)arg1 ;
-(void)setMaxRouteIncidentSupported:(int)arg1 ;
-(BOOL)hasMaxFormatterSupported;
-(BOOL)clusteredTransitRoutesSupported;
-(BOOL)hasInternalInstall;
-(void)setAppMinorVersion:(NSString *)arg1 ;
-(void)setHasInternalInstall:(BOOL)arg1 ;
-(int)maxRouteIncidentSupported;
-(void)setHasClusteredTransitRoutesSupported:(BOOL)arg1 ;
-(unsigned)maxTrafficSpeedSupported;
-(id)displayLanguagesAtIndex:(unsigned long long)arg1 ;
-(NSString *)hardwareModel;
-(void)setHasMaxFormatterSupported:(BOOL)arg1 ;
-(BOOL)internalInstall;
-(BOOL)hasMaxTrafficSpeedSupported;
-(BOOL)hasClusteredTransitRoutesSupported;
-(void)setMaxFormatterSupported:(int)arg1 ;
-(BOOL)hasHardwareModel;
-(void)setInternalInstall:(BOOL)arg1 ;
-(void)setAppMajorVersion:(NSString *)arg1 ;
-(void)addDisplayLanguages:(id)arg1 ;
-(void)setHasMaxTrafficSpeedSupported:(BOOL)arg1 ;
-(int)maxManeuverTypeSupported;
-(BOOL)hasMaxManeuverTypeSupported;
-(int)maxFormatterSupported;
-(void)setHardwareModel:(NSString *)arg1 ;
-(BOOL)hasMaxRouteIncidentSupported;
-(void)setMaxTrafficSpeedSupported:(unsigned)arg1 ;
-(void)setHasMaxManeuverTypeSupported:(BOOL)arg1 ;
-(NSString *)appMajorVersion;
-(void)setHasMaxRouteIncidentSupported:(BOOL)arg1 ;
-(BOOL)hasAppMinorVersion;
@end

