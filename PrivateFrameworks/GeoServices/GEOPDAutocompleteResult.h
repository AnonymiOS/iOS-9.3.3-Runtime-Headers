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

@class NSMutableArray;

@interface GEOPDAutocompleteResult : PBCodable <NSCopying> {

	NSMutableArray* _sections;
	BOOL _enableRap;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,retain) NSMutableArray * sections;              //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) BOOL hasEnableRap; 
@property (assign,nonatomic) BOOL enableRap;                         //@synthesize enableRap=_enableRap - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSections:(NSMutableArray *)arg1 ;
-(NSMutableArray *)sections;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasEnableRap;
-(void)addSections:(id)arg1 ;
-(id)sectionsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)sectionsCount;
-(void)setHasEnableRap:(BOOL)arg1 ;
-(void)clearSections;
-(void)setEnableRap:(BOOL)arg1 ;
-(BOOL)enableRap;
@end

