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

@class NSMutableArray;

@interface GEOSupportedTileSets : PBCodable <NSCopying> {

	NSMutableArray* _tileSets;

}

@property (nonatomic,retain) NSMutableArray * tileSets;              //@synthesize tileSets=_tileSets - In the implementation block
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
-(unsigned long long)tileSetsCount;
-(void)addTileSet:(id)arg1 ;
-(void)setTileSets:(NSMutableArray *)arg1 ;
-(id)tileSetAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)tileSets;
-(void)clearTileSets;
@end
