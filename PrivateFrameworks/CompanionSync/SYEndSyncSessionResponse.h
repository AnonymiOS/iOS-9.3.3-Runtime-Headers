/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:07 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYErrorInfo, SYMessageHeader, NSString;

@interface SYEndSyncSessionResponse : PBCodable <NSCopying> {

	SYErrorInfo* _error;
	SYMessageHeader* _header;
	NSString* _sessionID;
	BOOL _didRollback;
	SCD_Struct_SY6 _has;

}

@property (nonatomic,retain) SYMessageHeader * header;              //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSString * sessionID;                  //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) SYErrorInfo * error;                   //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL hasDidRollback; 
@property (assign,nonatomic) BOOL didRollback;                      //@synthesize didRollback=_didRollback - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSessionID:(NSString *)arg1 ;
-(NSString *)sessionID;
-(BOOL)hasError;
-(void)setError:(SYErrorInfo *)arg1 ;
-(SYErrorInfo *)error;
-(void)setDidRollback:(BOOL)arg1 ;
-(void)setHasDidRollback:(BOOL)arg1 ;
-(BOOL)hasDidRollback;
-(BOOL)didRollback;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(SYMessageHeader *)header;
@end

