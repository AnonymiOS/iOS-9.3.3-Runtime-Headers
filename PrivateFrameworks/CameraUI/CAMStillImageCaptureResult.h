/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CameraUI/CameraUI-Structs.h>
@class NSDate, NSDictionary, NSError;

@interface CAMStillImageCaptureResult : NSObject {

	BOOL _expectingPairedVideo;
	opaqueCMSampleBufferRef _stillImageOriginalSampleBuffer;
	IOSurfaceRef _stillImageOriginalSurface;
	unsigned long long _stillImageOriginalSurfaceSize;
	IOSurfaceRef _stillImageUnfilteredPreviewSurface;
	unsigned long long _stillImageUnfilteredPreviewSurfaceSize;
	IOSurfaceRef _stillImageFilteredPreviewSurface;
	unsigned long long _stillImageFilteredPreviewSurfaceSize;
	NSDate* _captureDate;
	NSDictionary* _metadata;
	NSError* _error;

}

@property (nonatomic,readonly) opaqueCMSampleBufferRef stillImageOriginalSampleBuffer;                 //@synthesize stillImageOriginalSampleBuffer=_stillImageOriginalSampleBuffer - In the implementation block
@property (nonatomic,readonly) IOSurfaceRef stillImageOriginalSurface;                                 //@synthesize stillImageOriginalSurface=_stillImageOriginalSurface - In the implementation block
@property (nonatomic,readonly) unsigned long long stillImageOriginalSurfaceSize;                       //@synthesize stillImageOriginalSurfaceSize=_stillImageOriginalSurfaceSize - In the implementation block
@property (nonatomic,readonly) IOSurfaceRef stillImageUnfilteredPreviewSurface;                        //@synthesize stillImageUnfilteredPreviewSurface=_stillImageUnfilteredPreviewSurface - In the implementation block
@property (nonatomic,readonly) unsigned long long stillImageUnfilteredPreviewSurfaceSize;              //@synthesize stillImageUnfilteredPreviewSurfaceSize=_stillImageUnfilteredPreviewSurfaceSize - In the implementation block
@property (nonatomic,readonly) IOSurfaceRef stillImageFilteredPreviewSurface;                          //@synthesize stillImageFilteredPreviewSurface=_stillImageFilteredPreviewSurface - In the implementation block
@property (nonatomic,readonly) unsigned long long stillImageFilteredPreviewSurfaceSize;                //@synthesize stillImageFilteredPreviewSurfaceSize=_stillImageFilteredPreviewSurfaceSize - In the implementation block
@property (nonatomic,readonly) NSDate * captureDate;                                                   //@synthesize captureDate=_captureDate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metadata;                                           //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSDictionary * compactMetadata; 
@property (nonatomic,readonly) NSError * error;                                                        //@synthesize error=_error - In the implementation block
@property (getter=isHDREV0,nonatomic,readonly) BOOL HDREV0; 
@property (getter=isExpectingPairedVideo,nonatomic,readonly) BOOL expectingPairedVideo;                //@synthesize expectingPairedVideo=_expectingPairedVideo - In the implementation block
-(void)dealloc;
-(id)description;
-(NSDictionary *)metadata;
-(NSDate *)captureDate;
-(NSError *)error;
-(BOOL)isExpectingPairedVideo;
-(id)initWithOriginalSurface:(IOSurfaceRef)arg1 size:(unsigned long long)arg2 unfilteredPreviewSurface:(IOSurfaceRef)arg3 size:(unsigned long long)arg4 filteredPreviewSurface:(IOSurfaceRef)arg5 size:(unsigned long long)arg6 metadata:(id)arg7 expectingPairedVideo:(BOOL)arg8 error:(id)arg9 ;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id)arg2 ;
-(BOOL)isHDREV0;
-(opaqueCMSampleBufferRef)stillImageOriginalSampleBuffer;
-(IOSurfaceRef)stillImageOriginalSurface;
-(IOSurfaceRef)stillImageUnfilteredPreviewSurface;
-(IOSurfaceRef)stillImageFilteredPreviewSurface;
-(unsigned long long)stillImageOriginalSurfaceSize;
-(NSDictionary *)compactMetadata;
-(unsigned long long)stillImageUnfilteredPreviewSurfaceSize;
-(unsigned long long)stillImageFilteredPreviewSurfaceSize;
@end

