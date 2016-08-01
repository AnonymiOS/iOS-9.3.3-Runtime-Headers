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

@interface GEOPDPhotoContent : PBCodable <NSCopying> {

	unsigned _height;
	NSString* _url;
	unsigned _width;
	SCD_Struct_GE7 _has;

}

@property (assign,nonatomic) BOOL hasWidth; 
@property (assign,nonatomic) unsigned width;               //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) BOOL hasHeight; 
@property (assign,nonatomic) unsigned height;              //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url;               //@synthesize url=_url - In the implementation block
-(unsigned long long)_area;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)url;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)width;
-(void)setUrl:(NSString *)arg1 ;
-(unsigned)height;
-(id)dictionaryRepresentation;
-(void)setWidth:(unsigned)arg1 ;
-(void)setHeight:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasHeight:(BOOL)arg1 ;
-(BOOL)hasHeight;
-(void)setHasWidth:(BOOL)arg1 ;
-(BOOL)hasWidth;
-(BOOL)hasUrl;
@end

