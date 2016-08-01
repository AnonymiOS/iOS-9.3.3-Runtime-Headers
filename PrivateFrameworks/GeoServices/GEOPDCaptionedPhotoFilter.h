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

@interface GEOPDCaptionedPhotoFilter : PBCodable <NSCopying> {

	SCD_Struct_GE51* _photoSizeFilters;
	unsigned long long _photoSizeFiltersCount;
	unsigned long long _photoSizeFiltersSpace;

}

@property (nonatomic,readonly) unsigned long long photoSizeFiltersCount; 
@property (nonatomic,readonly) SCD_Struct_GE51* photoSizeFilters; 
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
-(unsigned long long)photoSizeFiltersCount;
-(void)setPhotoSizeFilters:(SCD_Struct_GE51*)arg1 count:(unsigned long long)arg2 ;
-(void)addPhotoSizeFilter:(SCD_Struct_GE51)arg1 ;
-(SCD_Struct_GE51)photoSizeFilterAtIndex:(unsigned long long)arg1 ;
-(void)clearPhotoSizeFilters;
-(SCD_Struct_GE51*)photoSizeFilters;
@end
