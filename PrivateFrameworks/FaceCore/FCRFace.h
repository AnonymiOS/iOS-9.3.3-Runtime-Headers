/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:31 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FaceCore/FaceCore-Structs.h>
@class NSData, NSDictionary;

@interface FCRFace : NSObject {

	SCD_Struct_FC3 face;
	SCD_Struct_FC3 leftEye;
	SCD_Struct_FC3 rightEye;
	SCD_Struct_FC3 mouth;
	double faceSize;
	double faceAngle;
	long long trackID;
	unsigned long long trackDuration;
	NSData* faceprint;
	int faceType;
	NSDictionary* faceLandmarkPoints;
	NSDictionary* expressionFeatures;
	NSDictionary* additionalInfo;

}

@property (assign) SCD_Struct_FC3 face; 
@property (assign) SCD_Struct_FC3 leftEye; 
@property (assign) SCD_Struct_FC3 rightEye; 
@property (assign) SCD_Struct_FC3 mouth; 
@property (assign) double faceSize; 
@property (assign) double faceAngle; 
@property (assign) long long trackID; 
@property (assign) unsigned long long trackDuration; 
@property (retain) NSData * faceprint; 
@property (assign) int faceType; 
@property (retain) NSDictionary * faceLandmarkPoints; 
@property (retain) NSDictionary * expressionFeatures; 
@property (retain) NSDictionary * additionalInfo; 
@property (readonly) BOOL hasLeftEyeBounds; 
@property (readonly) BOOL hasRightEyeBounds; 
@property (readonly) BOOL hasMouthBounds; 
-(BOOL)hasMouthBounds;
-(NSDictionary *)faceLandmarkPoints;
-(void)setFaceLandmarkPoints:(NSDictionary *)arg1 ;
-(NSData *)faceprint;
-(void)setFaceprint:(NSData *)arg1 ;
-(void)setTrackDuration:(unsigned long long)arg1 ;
-(void)setFaceAngle:(double)arg1 ;
-(double)faceAngle;
-(void)setFaceType:(int)arg1 ;
-(void)setFaceSize:(double)arg1 ;
-(void)setExpressionFeatures:(NSDictionary *)arg1 ;
-(void)setLeftEye:(SCD_Struct_FC3)arg1 ;
-(void)setRightEye:(SCD_Struct_FC3)arg1 ;
-(void)setMouth:(SCD_Struct_FC3)arg1 ;
-(NSDictionary *)expressionFeatures;
-(SCD_Struct_FC3)leftEye;
-(SCD_Struct_FC3)rightEye;
-(SCD_Struct_FC3)mouth;
-(unsigned long long)trackDuration;
-(int)faceType;
-(double)faceSize;
-(void)setFace:(SCD_Struct_FC3)arg1 ;
-(void)dealloc;
-(SCD_Struct_FC3)face;
-(void)setTrackID:(long long)arg1 ;
-(long long)trackID;
-(BOOL)hasLeftEyeBounds;
-(BOOL)hasRightEyeBounds;
-(NSDictionary *)additionalInfo;
-(void)setAdditionalInfo:(NSDictionary *)arg1 ;
@end

