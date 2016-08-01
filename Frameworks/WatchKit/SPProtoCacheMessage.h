/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:33 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, SPProtoCacheSyncData;

@interface SPProtoCacheMessage : PBCodable <NSCopying> {

	NSData* _assetData;
	NSString* _assetKey;
	int _cacheType;
	NSString* _gizmoCacheIdentifier;
	int _messageType;
	SPProtoCacheSyncData* _syncData;

}

@property (assign,nonatomic) int messageType;                              //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic) int cacheType;                                //@synthesize cacheType=_cacheType - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetKey; 
@property (nonatomic,retain) NSString * assetKey;                          //@synthesize assetKey=_assetKey - In the implementation block
@property (nonatomic,readonly) BOOL hasGizmoCacheIdentifier; 
@property (nonatomic,retain) NSString * gizmoCacheIdentifier;              //@synthesize gizmoCacheIdentifier=_gizmoCacheIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetData; 
@property (nonatomic,retain) NSData * assetData;                           //@synthesize assetData=_assetData - In the implementation block
@property (nonatomic,readonly) BOOL hasSyncData; 
@property (nonatomic,retain) SPProtoCacheSyncData * syncData;              //@synthesize syncData=_syncData - In the implementation block
-(void)setAssetData:(NSData *)arg1 ;
-(NSData *)assetData;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setCacheType:(int)arg1 ;
-(int)cacheType;
-(void)setMessageType:(int)arg1 ;
-(int)messageType;
-(void)setGizmoCacheIdentifier:(NSString *)arg1 ;
-(void)setSyncData:(SPProtoCacheSyncData *)arg1 ;
-(BOOL)hasAssetKey;
-(BOOL)hasGizmoCacheIdentifier;
-(BOOL)hasAssetData;
-(BOOL)hasSyncData;
-(NSString *)gizmoCacheIdentifier;
-(SPProtoCacheSyncData *)syncData;
-(void)setAssetKey:(NSString *)arg1 ;
-(NSString *)assetKey;
@end

