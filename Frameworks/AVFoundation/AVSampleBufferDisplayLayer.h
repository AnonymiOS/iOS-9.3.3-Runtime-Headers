/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <QuartzCore/CALayer.h>
#import <AVFoundation/AVQueuedSampleBufferRendering.h>
#import <AVFoundation/AVMediaDataRequesterConsumer.h>
#import <AVFoundation/AVQueuedSampleBufferRenderingInternal.h>

@class NSError, AVSampleBufferDisplayLayerInternal, NSString;

@interface AVSampleBufferDisplayLayer : CALayer <AVQueuedSampleBufferRendering, AVMediaDataRequesterConsumer, AVQueuedSampleBufferRenderingInternal> {

	AVSampleBufferDisplayLayerInternal* _sampleBufferDisplayLayerInternal;

}

@property (nonatomic,readonly) BOOL outputObscuredDueToInsufficientExternalProtection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (retain,readonly) OpaqueCMTimebaseRef timebase; 
@property (getter=isReadyForMoreMediaData,readonly) BOOL readyForMoreMediaData; 
@property (retain) OpaqueCMTimebaseRef controlTimebase; 
@property (copy) NSString * videoGravity; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(BOOL)automaticallyNotifiesObserversOfStatus;
+(BOOL)automaticallyNotifiesObserversOfError;
-(BOOL)outputObscuredDueToInsufficientExternalProtection;
-(id)videoPerformanceMetrics;
-(void)_didFinishSuspension:(id)arg1 ;
-(OpaqueCMTimebaseRef)timebase;
-(void)flush;
-(void)flushWithRemovalOfDisplayedImage:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopRequestingMediaData;
-(void)enqueueSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)flushAndRemoveImage;
-(void)_flushComplete;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_weakReference;
-(void)_refreshAboveHighWaterLevel;
-(void)_updateLayerTreeGeometryWithVideoGravity:(id)arg1 bounds:(CGRect)arg2 presentationSize:(CGSize)arg3 ;
-(void)_setStatus:(long long)arg1 error:(id)arg2 ;
-(void)_setControlTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(BOOL)_setSynchronizerTimebase:(OpaqueCMTimebaseRef)arg1 error:(id*)arg2 ;
-(int)_initializeTimebases;
-(int)_createVideoQueue;
-(void)_updatePresentationSize:(CGSize)arg1 ;
-(void)_resetStatusWithOSStatus:(int)arg1 ;
-(void)_setOutputObscuredDueToInsufficientExternalProtection:(BOOL)arg1 ;
-(void)_addFigVideoQueueListeners;
-(void)_removeFigVideoQueueListeners;
-(void)dealloc;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(long long)status;
-(void)_forBoundsAnimations:(id)arg1 applyBlock:(/*^block*/id)arg2 ;
-(id)_transformToAbsoluteAnimationOfBounds:(id)arg1 ;
-(void)_addAnimationsForContentLayer:(id)arg1 size:(CGSize)arg2 gravity:(id)arg3 ;
-(void)copyFigSampleBufferAudioRenderer:(OpaqueFigSampleBufferAudioRenderer*)arg1 ;
-(BOOL)setRenderSynchronizer:(id)arg1 error:(id*)arg2 ;
-(void)setControlTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(OpaqueCMTimebaseRef)controlTimebase;
-(NSString *)videoGravity;
-(NSError *)error;
-(void)setVideoGravity:(NSString *)arg1 ;
-(BOOL)isReadyForMoreMediaData;
-(void)finalize;
@end

