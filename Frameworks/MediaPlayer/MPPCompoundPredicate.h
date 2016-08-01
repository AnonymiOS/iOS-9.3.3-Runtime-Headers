/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface MPPCompoundPredicate : PBCodable <NSCopying> {

	NSMutableArray* _predicates;

}

@property (nonatomic,retain) NSMutableArray * predicates;              //@synthesize predicates=_predicates - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPredicates:(NSMutableArray *)arg1 ;
-(void)addPredicates:(id)arg1 ;
-(unsigned long long)predicatesCount;
-(void)clearPredicates;
-(id)predicatesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)predicates;
@end

