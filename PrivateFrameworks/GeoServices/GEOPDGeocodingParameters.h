/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:05 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOStructuredAddress, GEOPDViewportInfo;

@interface GEOPDGeocodingParameters : PBCodable <NSCopying> {

	unsigned _maxResults;
	NSString* _queryString;
	GEOStructuredAddress* _structuredAddress;
	GEOPDViewportInfo* _viewportInfo;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,readonly) BOOL hasQueryString; 
@property (nonatomic,retain) NSString * queryString;                                //@synthesize queryString=_queryString - In the implementation block
@property (assign,nonatomic) BOOL hasMaxResults; 
@property (assign,nonatomic) unsigned maxResults;                                   //@synthesize maxResults=_maxResults - In the implementation block
@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo;                      //@synthesize viewportInfo=_viewportInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasStructuredAddress; 
@property (nonatomic,retain) GEOStructuredAddress * structuredAddress;              //@synthesize structuredAddress=_structuredAddress - In the implementation block
-(id)initWithForwardGeocodeAddress:(id)arg1 addressString:(id)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setQueryString:(NSString *)arg1 ;
-(NSString *)queryString;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(GEOStructuredAddress *)structuredAddress;
-(void)setStructuredAddress:(GEOStructuredAddress *)arg1 ;
-(BOOL)hasStructuredAddress;
-(void)setMaxResults:(unsigned)arg1 ;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(unsigned)maxResults;
-(BOOL)hasViewportInfo;
-(BOOL)hasMaxResults;
-(void)setHasMaxResults:(BOOL)arg1 ;
-(GEOPDViewportInfo *)viewportInfo;
-(BOOL)hasQueryString;
@end

