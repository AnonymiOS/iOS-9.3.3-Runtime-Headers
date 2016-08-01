/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:12 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRGameControllerButtonsProtobuf, _MRGameControllerMotionProtobuf;

@interface _MRGameControllerMessageProtobuf : PBCodable <NSCopying> {

	unsigned long long _controllerID;
	_MRGameControllerButtonsProtobuf* _buttons;
	_MRGameControllerMotionProtobuf* _motion;
	SCD_Struct_MR1 _has;

}

@property (assign,nonatomic) BOOL hasControllerID; 
@property (assign,nonatomic) unsigned long long controllerID;                         //@synthesize controllerID=_controllerID - In the implementation block
@property (nonatomic,readonly) BOOL hasMotion; 
@property (nonatomic,retain) _MRGameControllerMotionProtobuf * motion;                //@synthesize motion=_motion - In the implementation block
@property (nonatomic,readonly) BOOL hasButtons; 
@property (nonatomic,retain) _MRGameControllerButtonsProtobuf * buttons;              //@synthesize buttons=_buttons - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(_MRGameControllerButtonsProtobuf *)buttons;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setMotion:(_MRGameControllerMotionProtobuf *)arg1 ;
-(void)setControllerID:(unsigned long long)arg1 ;
-(BOOL)hasMotion;
-(_MRGameControllerMotionProtobuf *)motion;
-(BOOL)hasButtons;
-(unsigned long long)controllerID;
-(void)setHasControllerID:(BOOL)arg1 ;
-(BOOL)hasControllerID;
-(void)setButtons:(_MRGameControllerButtonsProtobuf *)arg1 ;
@end

