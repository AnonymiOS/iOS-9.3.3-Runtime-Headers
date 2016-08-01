/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:30 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSArray;

@interface VCPFullVideoAnalyzer : VCPVideoAnalyzer {

	CaptureProcessing* _captureProcessing;
	PostProcessing* _postProcessing;
	NSArray* _sceneResults;
	NSArray* _qualityResults;
	NSArray* _cameraMotionResults;
	NSArray* _subjectMotionResults;
	NSArray* _fineSubjectMotionResults;
	NSArray* _rotationResults;
	NSArray* _irisObjectsResults;
	NSArray* _preEncodeResults;
	NSArray* _movingObjectResults;
	NSArray* _featureResults;
	NSArray* _obstructionResults;
	BOOL _isIris;

}
-(void)dealloc;
-(id)results;
-(id)initWithOrientation:(id)arg1 withMetaOrientation:(id)arg2 isIris:(BOOL)arg3 irisPhotoOffsetSec:(id)arg4 irisPhotoExposureSec:(id)arg5 ;
-(int)analyzeFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 flags:(unsigned long long*)arg4 ;
-(int)finishAnalysisPass:(SCD_Struct_VC15)arg1 complete:(BOOL*)arg2 ;
@end

