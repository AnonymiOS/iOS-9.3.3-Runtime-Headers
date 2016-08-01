/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAMPanoramaProcessorDelegate;
#import <CameraUI/CameraUI-Structs.h>
@class CAMPanoramaCaptureRequest;

@interface CAMPanoramaProcessor : NSObject {

	BOOL _capturingPanorama;
	id<CAMPanoramaProcessorDelegate> _delegate;
	CAMPanoramaCaptureRequest* _request;
	long long _direction;
	OpaqueFigSampleBufferProcessorRef __processor;
	CGSize _previewSize;

}

@property (nonatomic,__weak,readonly) id<CAMPanoramaProcessorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CAMPanoramaCaptureRequest * request;                             //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) CGSize previewSize;                                            //@synthesize previewSize=_previewSize - In the implementation block
@property (assign,nonatomic) long long direction;                                             //@synthesize direction=_direction - In the implementation block
@property (assign,getter=isCapturingPanorama,nonatomic) BOOL capturingPanorama;               //@synthesize capturingPanorama=_capturingPanorama - In the implementation block
@property (nonatomic,readonly) OpaqueFigSampleBufferProcessorRef _processor;                  //@synthesize _processor=__processor - In the implementation block
-(void)dealloc;
-(id<CAMPanoramaProcessorDelegate>)delegate;
-(void)invalidate;
-(CAMPanoramaCaptureRequest *)request;
-(void)setDirection:(long long)arg1 ;
-(long long)direction;
-(id)initWithDelegate:(id)arg1 ;
-(void)_setRequest:(id)arg1 ;
-(BOOL)isCapturingPanorama;
-(void)startPanoramaCaptureWithRequest:(id)arg1 ;
-(void)stopPanoramaCapture;
-(OpaqueFigSampleBufferProcessorRef)_processor;
-(void)_setCapturingPanorama:(BOOL)arg1 ;
-(void)processPanoramaCaptureWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(CGSize)previewSize;
@end

