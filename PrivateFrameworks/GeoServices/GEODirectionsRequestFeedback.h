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

@class NSString;

@interface GEODirectionsRequestFeedback : PBCodable <NSCopying> {

	NSString* _appIdentifier;
	int _purpose;
	int _source;
	SCD_Struct_GE7 _has;

}

@property (assign,nonatomic) BOOL hasPurpose; 
@property (assign,nonatomic) int purpose;                           //@synthesize purpose=_purpose - In the implementation block
@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) int source;                            //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) BOOL hasAppIdentifier; 
@property (nonatomic,retain) NSString * appIdentifier;              //@synthesize appIdentifier=_appIdentifier - In the implementation block
-(id)initWithPurpose:(int)arg1 andSource:(int)arg2 ;
-(id)initWithPurpose:(int)arg1 andSource:(int)arg2 andIdentifier:(id)arg3 ;
-(id)initWithPurpose:(int)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setSource:(int)arg1 ;
-(int)source;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasSource;
-(BOOL)hasAppIdentifier;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(NSString *)appIdentifier;
-(void)setHasSource:(BOOL)arg1 ;
-(void)setHasPurpose:(BOOL)arg1 ;
-(void)setPurpose:(int)arg1 ;
-(int)purpose;
-(BOOL)hasPurpose;
@end

