/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:07 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOPDFlyover : PBCodable <NSCopying> {

	SCD_Struct_GE190* _cameraPaths;
	unsigned long long _cameraPathsCount;
	unsigned long long _cameraPathsSpace;
	SCD_Struct_GE191* _labelFrames;
	unsigned long long _labelFramesCount;
	unsigned long long _labelFramesSpace;
	NSMutableArray* _labels;
	NSMutableArray* _notificationMessages;
	BOOL _useSplines;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,readonly) unsigned long long cameraPathsCount; 
@property (nonatomic,readonly) SCD_Struct_GE190* cameraPaths; 
@property (assign,nonatomic) BOOL hasUseSplines; 
@property (assign,nonatomic) BOOL useSplines;                                    //@synthesize useSplines=_useSplines - In the implementation block
@property (nonatomic,readonly) unsigned long long labelFramesCount; 
@property (nonatomic,readonly) SCD_Struct_GE191* labelFrames; 
@property (nonatomic,retain) NSMutableArray * labels;                            //@synthesize labels=_labels - In the implementation block
@property (nonatomic,retain) NSMutableArray * notificationMessages;              //@synthesize notificationMessages=_notificationMessages - In the implementation block
+(id)flyoverForPlaceData:(id)arg1 ;
-(id)bestLocalizedLabelAtIndex:(unsigned long long)arg1 ;
-(id)bestLocalizedAnnouncementMessage;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addLabel:(id)arg1 ;
-(void)clearLabels;
-(id)labelAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)labelsCount;
-(void)setLabels:(NSMutableArray *)arg1 ;
-(NSMutableArray *)labels;
-(void)setNotificationMessages:(NSMutableArray *)arg1 ;
-(BOOL)useSplines;
-(void)setUseSplines:(BOOL)arg1 ;
-(SCD_Struct_GE191)labelFrameAtIndex:(unsigned long long)arg1 ;
-(void)addCameraPath:(SCD_Struct_GE190)arg1 ;
-(void)clearLabelFrames;
-(void)clearCameraPaths;
-(id)notificationMessageAtIndex:(unsigned long long)arg1 ;
-(void)setCameraPaths:(SCD_Struct_GE190*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)notificationMessagesCount;
-(SCD_Struct_GE191*)labelFrames;
-(SCD_Struct_GE190*)cameraPaths;
-(unsigned long long)cameraPathsCount;
-(void)addLabelFrame:(SCD_Struct_GE191)arg1 ;
-(BOOL)hasUseSplines;
-(unsigned long long)labelFramesCount;
-(void)setLabelFrames:(SCD_Struct_GE191*)arg1 count:(unsigned long long)arg2 ;
-(void)addNotificationMessage:(id)arg1 ;
-(void)clearNotificationMessages;
-(void)setHasUseSplines:(BOOL)arg1 ;
-(NSMutableArray *)notificationMessages;
-(SCD_Struct_GE190)cameraPathAtIndex:(unsigned long long)arg1 ;
@end
