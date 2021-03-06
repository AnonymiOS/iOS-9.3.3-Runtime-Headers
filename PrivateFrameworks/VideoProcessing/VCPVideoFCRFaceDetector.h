/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:30 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoFaceDetector.h>

@class FCRFaceDetector;

@interface VCPVideoFCRFaceDetector : VCPVideoFaceDetector {

	FCRFaceDetector* _faceDetector;

}
+(CGAffineTransform)flipTransform:(CGAffineTransform)arg1 ;
-(id)initWithTransform:(CGAffineTransform)arg1 ;
-(int)detectFaces:(CVBufferRef)arg1 faces:(id)arg2 ;
@end

