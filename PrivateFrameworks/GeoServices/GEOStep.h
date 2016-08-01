/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:01 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEONameInfo, GEOInstructionSet, NSString, NSMutableArray, GEOTimeCheckpoints;

@interface GEOStep : PBCodable <NSCopying> {

	SCD_Struct_GE67* _laneGuidances;
	unsigned long long _laneGuidancesCount;
	unsigned long long _laneGuidancesSpace;
	SCD_Struct_GE68* _junctionElements;
	unsigned long long _junctionElementsCount;
	unsigned long long _junctionElementsSpace;
	unsigned _distance;
	GEONameInfo* _exitNumber;
	unsigned _expectedTime;
	int _hintFirstAnnouncementZilchIndex;
	GEOInstructionSet* _instructionSet;
	NSString* _instructions;
	int _junctionType;
	int _maneuverEndBasicIndex;
	int _maneuverEndZilchIndex;
	NSMutableArray* _maneuverNames;
	int _maneuverStartZilchIndex;
	int _maneuverType;
	NSString* _notice;
	int _overrideDrivingSide;
	int _overrideTransportType;
	NSMutableArray* _signposts;
	unsigned _stepID;
	NSMutableArray* _substeps;
	GEOTimeCheckpoints* _timeCheckpoints;
	BOOL _endsOnFwy;
	BOOL _toFreeway;
	BOOL _tollAhead;
	BOOL _tollPrior;
	SCD_Struct_GE69 _has;

}

@property (nonatomic,readonly) unsigned maneuverEndIndex; 
@property (nonatomic,readonly) unsigned maneuverStartIndex; 
@property (nonatomic,readonly) BOOL hasHintFirstAnnouncementIndex; 
@property (nonatomic,readonly) int hintFirstAnnouncementIndex; 
@property (assign,nonatomic) BOOL hasStepID; 
@property (assign,nonatomic) unsigned stepID;                                         //@synthesize stepID=_stepID - In the implementation block
@property (assign,nonatomic) BOOL hasManeuverEndBasicIndex; 
@property (assign,nonatomic) int maneuverEndBasicIndex;                               //@synthesize maneuverEndBasicIndex=_maneuverEndBasicIndex - In the implementation block
@property (assign,nonatomic) BOOL hasManeuverStartZilchIndex; 
@property (assign,nonatomic) int maneuverStartZilchIndex;                             //@synthesize maneuverStartZilchIndex=_maneuverStartZilchIndex - In the implementation block
@property (assign,nonatomic) BOOL hasManeuverEndZilchIndex; 
@property (assign,nonatomic) int maneuverEndZilchIndex;                               //@synthesize maneuverEndZilchIndex=_maneuverEndZilchIndex - In the implementation block
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) unsigned distance;                                       //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) BOOL hasExpectedTime; 
@property (assign,nonatomic) unsigned expectedTime;                                   //@synthesize expectedTime=_expectedTime - In the implementation block
@property (assign,nonatomic) BOOL hasManeuverType; 
@property (assign,nonatomic) int maneuverType;                                        //@synthesize maneuverType=_maneuverType - In the implementation block
@property (nonatomic,retain) NSMutableArray * maneuverNames;                          //@synthesize maneuverNames=_maneuverNames - In the implementation block
@property (nonatomic,readonly) unsigned long long laneGuidancesCount; 
@property (nonatomic,readonly) SCD_Struct_GE67* laneGuidances; 
@property (assign,nonatomic) BOOL hasJunctionType; 
@property (assign,nonatomic) int junctionType;                                        //@synthesize junctionType=_junctionType - In the implementation block
@property (nonatomic,readonly) unsigned long long junctionElementsCount; 
@property (nonatomic,readonly) SCD_Struct_GE68* junctionElements; 
@property (nonatomic,retain) NSMutableArray * signposts;                              //@synthesize signposts=_signposts - In the implementation block
@property (assign,nonatomic) BOOL hasHintFirstAnnouncementZilchIndex; 
@property (assign,nonatomic) int hintFirstAnnouncementZilchIndex;                     //@synthesize hintFirstAnnouncementZilchIndex=_hintFirstAnnouncementZilchIndex - In the implementation block
@property (assign,nonatomic) BOOL hasOverrideTransportType; 
@property (assign,nonatomic) int overrideTransportType;                               //@synthesize overrideTransportType=_overrideTransportType - In the implementation block
@property (assign,nonatomic) BOOL hasOverrideDrivingSide; 
@property (assign,nonatomic) int overrideDrivingSide;                                 //@synthesize overrideDrivingSide=_overrideDrivingSide - In the implementation block
@property (nonatomic,readonly) BOOL hasExitNumber; 
@property (nonatomic,retain) GEONameInfo * exitNumber;                                //@synthesize exitNumber=_exitNumber - In the implementation block
@property (assign,nonatomic) BOOL hasTollPrior; 
@property (assign,nonatomic) BOOL tollPrior;                                          //@synthesize tollPrior=_tollPrior - In the implementation block
@property (assign,nonatomic) BOOL hasTollAhead; 
@property (assign,nonatomic) BOOL tollAhead;                                          //@synthesize tollAhead=_tollAhead - In the implementation block
@property (assign,nonatomic) BOOL hasEndsOnFwy; 
@property (assign,nonatomic) BOOL endsOnFwy;                                          //@synthesize endsOnFwy=_endsOnFwy - In the implementation block
@property (nonatomic,retain) NSMutableArray * substeps;                               //@synthesize substeps=_substeps - In the implementation block
@property (assign,nonatomic) BOOL hasToFreeway; 
@property (assign,nonatomic) BOOL toFreeway;                                          //@synthesize toFreeway=_toFreeway - In the implementation block
@property (nonatomic,readonly) BOOL hasInstructions; 
@property (nonatomic,retain) NSString * instructions;                                 //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,readonly) BOOL hasNotice; 
@property (nonatomic,retain) NSString * notice;                                       //@synthesize notice=_notice - In the implementation block
@property (nonatomic,readonly) BOOL hasTimeCheckpoints; 
@property (nonatomic,retain) GEOTimeCheckpoints * timeCheckpoints;                    //@synthesize timeCheckpoints=_timeCheckpoints - In the implementation block
@property (nonatomic,readonly) BOOL hasInstructionSet; 
@property (nonatomic,retain) GEOInstructionSet * instructionSet;                      //@synthesize instructionSet=_instructionSet - In the implementation block
-(id)roadName;
-(unsigned)maneuverStartIndex;
-(void)shieldInfo:(/*^block*/id)arg1 ;
-(id)maneuverDescription;
-(BOOL)hasHintFirstAnnouncementIndex;
-(unsigned)maneuverEndIndex;
-(id)firstNameInfo;
-(BOOL)maneuverIsHighwayExit;
-(id)intersectionNameInfo;
-(int)hintFirstAnnouncementIndex;
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
-(unsigned)expectedTime;
-(void)setDistance:(unsigned)arg1 ;
-(unsigned)distance;
-(void)setExpectedTime:(unsigned)arg1 ;
-(BOOL)hasDistance;
-(void)setHasDistance:(BOOL)arg1 ;
-(BOOL)hasExpectedTime;
-(void)setHasExpectedTime:(BOOL)arg1 ;
-(NSMutableArray *)maneuverNames;
-(unsigned long long)junctionElementsCount;
-(void)setOverrideTransportType:(int)arg1 ;
-(void)setTollAhead:(BOOL)arg1 ;
-(BOOL)hasJunctionType;
-(void)setHasTollAhead:(BOOL)arg1 ;
-(void)addSubsteps:(id)arg1 ;
-(void)setManeuverEndBasicIndex:(int)arg1 ;
-(BOOL)hasNotice;
-(BOOL)hasTollAhead;
-(void)setSignposts:(NSMutableArray *)arg1 ;
-(id)maneuverNameAtIndex:(unsigned long long)arg1 ;
-(void)setHasOverrideTransportType:(BOOL)arg1 ;
-(void)setNotice:(NSString *)arg1 ;
-(NSMutableArray *)signposts;
-(unsigned long long)maneuverNamesCount;
-(void)setHasJunctionType:(BOOL)arg1 ;
-(BOOL)hasInstructionSet;
-(void)setHasManeuverEndZilchIndex:(BOOL)arg1 ;
-(BOOL)hasOverrideTransportType;
-(BOOL)hasTimeCheckpoints;
-(int)maneuverEndBasicIndex;
-(BOOL)endsOnFwy;
-(void)clearSignposts;
-(SCD_Struct_GE68)junctionElementAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasManeuverEndZilchIndex;
-(BOOL)hasManeuverType;
-(int)overrideDrivingSide;
-(void)setJunctionType:(int)arg1 ;
-(BOOL)hasStepID;
-(GEONameInfo *)exitNumber;
-(void)setInstructionSet:(GEOInstructionSet *)arg1 ;
-(int)junctionType;
-(void)setOverrideDrivingSide:(int)arg1 ;
-(void)setManeuverEndZilchIndex:(int)arg1 ;
-(void)setEndsOnFwy:(BOOL)arg1 ;
-(void)setManeuverNames:(NSMutableArray *)arg1 ;
-(void)setTimeCheckpoints:(GEOTimeCheckpoints *)arg1 ;
-(void)setExitNumber:(GEONameInfo *)arg1 ;
-(BOOL)hasManeuverStartZilchIndex;
-(void)setHasStepID:(BOOL)arg1 ;
-(void)setHasEndsOnFwy:(BOOL)arg1 ;
-(void)setHasManeuverType:(BOOL)arg1 ;
-(int)maneuverEndZilchIndex;
-(void)addLaneGuidance:(SCD_Struct_GE67)arg1 ;
-(unsigned long long)substepsCount;
-(void)setHasOverrideDrivingSide:(BOOL)arg1 ;
-(BOOL)hasEndsOnFwy;
-(unsigned long long)signpostsCount;
-(void)setManeuverType:(int)arg1 ;
-(NSMutableArray *)substeps;
-(id)signpostAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasOverrideDrivingSide;
-(void)clearLaneGuidances;
-(void)setLaneGuidances:(SCD_Struct_GE67*)arg1 count:(unsigned long long)arg2 ;
-(SCD_Struct_GE67)laneGuidanceAtIndex:(unsigned long long)arg1 ;
-(GEOTimeCheckpoints *)timeCheckpoints;
-(void)setHasManeuverStartZilchIndex:(BOOL)arg1 ;
-(BOOL)hasExitNumber;
-(void)setJunctionElements:(SCD_Struct_GE68*)arg1 count:(unsigned long long)arg2 ;
-(int)maneuverType;
-(NSString *)instructions;
-(int)hintFirstAnnouncementZilchIndex;
-(int)maneuverStartZilchIndex;
-(BOOL)tollPrior;
-(void)setToFreeway:(BOOL)arg1 ;
-(id)substepsAtIndex:(unsigned long long)arg1 ;
-(void)setHasTollPrior:(BOOL)arg1 ;
-(void)addSignpost:(id)arg1 ;
-(BOOL)toFreeway;
-(unsigned long long)laneGuidancesCount;
-(void)setHintFirstAnnouncementZilchIndex:(int)arg1 ;
-(NSString *)notice;
-(void)setManeuverStartZilchIndex:(int)arg1 ;
-(void)setSubsteps:(NSMutableArray *)arg1 ;
-(void)setStepID:(unsigned)arg1 ;
-(void)setHasToFreeway:(BOOL)arg1 ;
-(void)setTollPrior:(BOOL)arg1 ;
-(unsigned)stepID;
-(void)setHasHintFirstAnnouncementZilchIndex:(BOOL)arg1 ;
-(BOOL)hasManeuverEndBasicIndex;
-(BOOL)hasTollPrior;
-(SCD_Struct_GE67*)laneGuidances;
-(void)clearManeuverNames;
-(void)clearSubsteps;
-(BOOL)tollAhead;
-(BOOL)hasHintFirstAnnouncementZilchIndex;
-(void)clearJunctionElements;
-(GEOInstructionSet *)instructionSet;
-(BOOL)hasInstructions;
-(int)overrideTransportType;
-(void)addManeuverName:(id)arg1 ;
-(BOOL)hasToFreeway;
-(void)setHasManeuverEndBasicIndex:(BOOL)arg1 ;
-(SCD_Struct_GE68*)junctionElements;
-(void)setInstructions:(NSString *)arg1 ;
-(void)addJunctionElement:(SCD_Struct_GE68)arg1 ;
@end

