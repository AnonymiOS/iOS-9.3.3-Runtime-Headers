/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:49 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NPKProtoSetPreferredPaymentApplicationRequest : PBRequest <NSCopying> {

	NSString* _passID;
	NSString* _preferredApplicationAID;

}

@property (nonatomic,readonly) BOOL hasPassID; 
@property (nonatomic,retain) NSString * passID;                               //@synthesize passID=_passID - In the implementation block
@property (nonatomic,readonly) BOOL hasPreferredApplicationAID; 
@property (nonatomic,retain) NSString * preferredApplicationAID;              //@synthesize preferredApplicationAID=_preferredApplicationAID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setPassID:(NSString *)arg1 ;
-(void)setPreferredApplicationAID:(NSString *)arg1 ;
-(BOOL)hasPassID;
-(BOOL)hasPreferredApplicationAID;
-(NSString *)passID;
-(NSString *)preferredApplicationAID;
@end

