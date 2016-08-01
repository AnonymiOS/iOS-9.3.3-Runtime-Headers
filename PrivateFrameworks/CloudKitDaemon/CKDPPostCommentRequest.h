/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:36 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPCommentContent, CKDPCommentedOnId, NSString;

@interface CKDPPostCommentRequest : PBRequest <NSCopying> {

	CKDPCommentContent* _commentContent;
	CKDPCommentedOnId* _identifier;
	NSString* _path;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) CKDPCommentedOnId * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasPath; 
@property (nonatomic,retain) NSString * path;                                  //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) BOOL hasCommentContent; 
@property (nonatomic,retain) CKDPCommentContent * commentContent;              //@synthesize commentContent=_commentContent - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CKDPCommentedOnId *)identifier;
-(NSString *)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(CKDPCommentedOnId *)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(BOOL)hasIdentifier;
-(void)setCommentContent:(CKDPCommentContent *)arg1 ;
-(BOOL)hasCommentContent;
-(CKDPCommentContent *)commentContent;
-(BOOL)hasPath;
@end

