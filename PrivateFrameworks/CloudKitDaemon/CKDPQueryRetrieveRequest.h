/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:37 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPAssetsToDownload, NSData, CKDPQuery, CKDPRequestedFields, CKDPRecordZoneIdentifier;

@interface CKDPQueryRetrieveRequest : PBRequest <NSCopying> {

	CKDPAssetsToDownload* _assetsToDownload;
	NSData* _continuationMarker;
	unsigned _limit;
	CKDPQuery* _query;
	CKDPRequestedFields* _requestedFields;
	CKDPRecordZoneIdentifier* _zoneIdentifier;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasQuery; 
@property (nonatomic,retain) CKDPQuery * query;                                      //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) BOOL hasContinuationMarker; 
@property (nonatomic,retain) NSData * continuationMarker;                            //@synthesize continuationMarker=_continuationMarker - In the implementation block
@property (assign,nonatomic) BOOL hasLimit; 
@property (assign,nonatomic) unsigned limit;                                         //@synthesize limit=_limit - In the implementation block
@property (nonatomic,readonly) BOOL hasZoneIdentifier; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneIdentifier;              //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestedFields; 
@property (nonatomic,retain) CKDPRequestedFields * requestedFields;                  //@synthesize requestedFields=_requestedFields - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetsToDownload; 
@property (nonatomic,retain) CKDPAssetsToDownload * assetsToDownload;                //@synthesize assetsToDownload=_assetsToDownload - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CKDPQuery *)query;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setQuery:(CKDPQuery *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasQuery;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setRequestedFields:(CKDPRequestedFields *)arg1 ;
-(void)setAssetsToDownload:(CKDPAssetsToDownload *)arg1 ;
-(BOOL)hasRequestedFields;
-(BOOL)hasAssetsToDownload;
-(CKDPRequestedFields *)requestedFields;
-(CKDPAssetsToDownload *)assetsToDownload;
-(void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg1 ;
-(BOOL)hasZoneIdentifier;
-(CKDPRecordZoneIdentifier *)zoneIdentifier;
-(void)setHasLimit:(BOOL)arg1 ;
-(BOOL)hasLimit;
-(void)setContinuationMarker:(NSData *)arg1 ;
-(BOOL)hasContinuationMarker;
-(NSData *)continuationMarker;
-(void)setLimit:(unsigned)arg1 ;
-(unsigned)limit;
@end

