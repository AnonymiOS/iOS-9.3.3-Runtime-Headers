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

@class NSString;

@interface SPProtoAudioFilePlayerUpdateContainedIdentifier : PBCodable <NSCopying> {

	NSString* _containedIdentifier;
	NSString* _identifier;

}

@property (nonatomic,retain) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasContainedIdentifier; 
@property (nonatomic,retain) NSString * containedIdentifier;              //@synthesize containedIdentifier=_containedIdentifier - In the implementation block
-(id)sockPuppetMessageForPlayerItemUpsertWithAsset;
-(id)sockPuppetMessageForQueuePlayerReplaceCurrentItem;
-(id)sockPuppetMessageForQueuePlayerAppendItem;
-(id)sockPuppetMessageForQueuePlayerRemoveItem;
-(id)sockPuppetMessageForQueuePlayerSetCurrentItem;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setContainedIdentifier:(NSString *)arg1 ;
-(BOOL)hasContainedIdentifier;
-(NSString *)containedIdentifier;
@end

