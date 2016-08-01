/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:47 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLImageLoadingQueueDelegate;
@class PLImageCache, NSLock;

@interface PLImageLoadingQueue : NSObject {

	id<PLImageLoadingQueueDelegate> _delegate;
	PLImageCache* _cache;
	NSLock* _lock;

}

@property (assign,nonatomic) id<PLImageLoadingQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<PLImageLoadingQueueDelegate>)arg1 ;
-(void)dealloc;
-(id<PLImageLoadingQueueDelegate>)delegate;
-(void)stopLoading;
-(id)initWithImageCache:(id)arg1 ;
-(void)pauseLoading;
-(void)resumeLoading;
-(id)loadImageSynchronously:(BOOL)arg1 fromSource:(id)arg2 forAsset:(id)arg3 loadIfNeeded:(BOOL)arg4 ;
-(id)loadImageSynchronously:(BOOL)arg1 fromSource:(id)arg2 forAsset:(id)arg3 ;
-(id)loadImageSynchronously:(BOOL)arg1 fromSource:(id)arg2 forAsset:(id)arg3 priority:(int)arg4 ;
-(id)loadImageSynchronously:(BOOL)arg1 fromSource:(id)arg2 forAsset:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)loadImageSynchronously:(BOOL)arg1 fromSource:(id)arg2 forAsset:(id)arg3 priority:(int)arg4 completion:(/*^block*/id)arg5 ;
-(void)cancelLoadFromSource:(id)arg1 forAsset:(id)arg2 ;
-(void)invalidateImageFromSource:(id)arg1 forAsset:(id)arg2 ;
-(void)imageIsAvailable:(id)arg1 forAsset:(id)arg2 fromSource:(id)arg3 completionBlocks:(id)arg4 ;
@end
