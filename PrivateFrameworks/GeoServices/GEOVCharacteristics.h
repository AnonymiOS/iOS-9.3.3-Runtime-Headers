/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:06 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOVCharacteristics : PBCodable <NSCopying> {

	NSMutableArray* _pointCharacteristics;

}

@property (nonatomic,retain) NSMutableArray * pointCharacteristics;              //@synthesize pointCharacteristics=_pointCharacteristics - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)pointCharacteristicsCount;
-(void)clearPointCharacteristics;
-(void)setPointCharacteristics:(NSMutableArray *)arg1 ;
-(NSMutableArray *)pointCharacteristics;
-(void)addPointCharacteristic:(id)arg1 ;
-(id)pointCharacteristicAtIndex:(unsigned long long)arg1 ;
@end

