/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:02 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitNamedItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPBTransitArtwork, GEOPBTransitLineDisplayHints, NSString, GEOStyleAttributes;

@interface GEOPBTransitLine : PBCodable <GEOTransitNamedItem, NSCopying> {

	unsigned long long _muid;
	SCD_Struct_GE51* _operatingHours;
	unsigned long long _operatingHoursCount;
	unsigned long long _operatingHoursSpace;
	GEOPBTransitArtwork* _artwork;
	GEOPBTransitLineDisplayHints* _displayHints;
	int _guidanceSnappingType;
	NSString* _lineColor;
	unsigned _lineIndex;
	GEOPBTransitArtwork* _modeArtwork;
	NSString* _nameDisplayString;
	int _preferredDepartureTimeStyle;
	GEOStyleAttributes* _styleAttributes;
	unsigned _systemIndex;
	SCD_Struct_GE92 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (assign,nonatomic) BOOL hasLineIndex; 
@property (assign,nonatomic) unsigned lineIndex;                                       //@synthesize lineIndex=_lineIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasArtwork; 
@property (nonatomic,retain) GEOPBTransitArtwork * artwork;                            //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,readonly) BOOL hasModeArtwork; 
@property (nonatomic,retain) GEOPBTransitArtwork * modeArtwork;                        //@synthesize modeArtwork=_modeArtwork - In the implementation block
@property (assign,nonatomic) unsigned long long muid;                                  //@synthesize muid=_muid - In the implementation block
@property (assign,nonatomic) BOOL hasGuidanceSnappingType; 
@property (assign,nonatomic) int guidanceSnappingType;                                 //@synthesize guidanceSnappingType=_guidanceSnappingType - In the implementation block
@property (nonatomic,readonly) BOOL hasLineColor; 
@property (nonatomic,retain) NSString * lineColor;                                     //@synthesize lineColor=_lineColor - In the implementation block
@property (assign,nonatomic) BOOL hasSystemIndex; 
@property (assign,nonatomic) unsigned systemIndex;                                     //@synthesize systemIndex=_systemIndex - In the implementation block
@property (assign,nonatomic) BOOL hasPreferredDepartureTimeStyle; 
@property (assign,nonatomic) int preferredDepartureTimeStyle;                          //@synthesize preferredDepartureTimeStyle=_preferredDepartureTimeStyle - In the implementation block
@property (nonatomic,readonly) BOOL hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes;                     //@synthesize styleAttributes=_styleAttributes - In the implementation block
@property (nonatomic,readonly) unsigned long long operatingHoursCount; 
@property (nonatomic,readonly) SCD_Struct_GE51* operatingHours; 
@property (nonatomic,readonly) BOOL hasDisplayHints; 
@property (nonatomic,retain) GEOPBTransitLineDisplayHints * displayHints;              //@synthesize displayHints=_displayHints - In the implementation block
@property (nonatomic,readonly) BOOL hasNameDisplayString; 
@property (nonatomic,retain) NSString * nameDisplayString;                             //@synthesize nameDisplayString=_nameDisplayString - In the implementation block
-(id)bestName;
-(id)geoTransitLineWithSystem:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(GEOStyleAttributes *)styleAttributes;
-(GEOPBTransitLineDisplayHints *)displayHints;
-(void)setDisplayHints:(GEOPBTransitLineDisplayHints *)arg1 ;
-(BOOL)hasDisplayHints;
-(BOOL)hasStyleAttributes;
-(void)clearOperatingHours;
-(SCD_Struct_GE51)operatingHoursAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)operatingHoursCount;
-(void)addOperatingHours:(SCD_Struct_GE51)arg1 ;
-(void)setOperatingHours:(SCD_Struct_GE51*)arg1 count:(unsigned long long)arg2 ;
-(SCD_Struct_GE51*)operatingHours;
-(BOOL)hasGuidanceSnappingType;
-(BOOL)hasLineIndex;
-(void)setHasGuidanceSnappingType:(BOOL)arg1 ;
-(unsigned)lineIndex;
-(void)setHasLineIndex:(BOOL)arg1 ;
-(BOOL)hasSystemIndex;
-(BOOL)hasModeArtwork;
-(void)setHasSystemIndex:(BOOL)arg1 ;
-(void)setArtwork:(GEOPBTransitArtwork *)arg1 ;
-(void)setSystemIndex:(unsigned)arg1 ;
-(NSString *)nameDisplayString;
-(BOOL)hasArtwork;
-(void)setModeArtwork:(GEOPBTransitArtwork *)arg1 ;
-(void)setHasPreferredDepartureTimeStyle:(BOOL)arg1 ;
-(BOOL)hasPreferredDepartureTimeStyle;
-(unsigned)systemIndex;
-(void)setGuidanceSnappingType:(int)arg1 ;
-(GEOPBTransitArtwork *)artwork;
-(int)preferredDepartureTimeStyle;
-(void)setNameDisplayString:(NSString *)arg1 ;
-(void)setLineIndex:(unsigned)arg1 ;
-(void)setPreferredDepartureTimeStyle:(int)arg1 ;
-(int)guidanceSnappingType;
-(GEOPBTransitArtwork *)modeArtwork;
-(BOOL)hasNameDisplayString;
-(BOOL)hasLineColor;
-(void)setLineColor:(NSString *)arg1 ;
-(NSString *)lineColor;
@end

