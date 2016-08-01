/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:09 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface GEOPDAutocompleteResultSection : PBCodable <NSCopying> {

	NSMutableArray* _entries;
	NSString* _name;
	int _type;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableArray * entries;              //@synthesize entries=_entries - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)entries;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)hasName;
-(void)clearEntries;
-(void)addEntries:(id)arg1 ;
-(id)entriesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)entriesCount;
-(void)setEntries:(NSMutableArray *)arg1 ;
@end

