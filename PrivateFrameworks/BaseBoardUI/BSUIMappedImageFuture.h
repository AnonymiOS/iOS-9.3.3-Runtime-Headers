/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:24 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class UIImage, NSObject;

@interface BSUIMappedImageFuture : NSObject {

	UIImage* _mappedImage;
	NSObject*<OS_dispatch_queue> _workQueue;
	/*^block*/id _waitBlock;
	NSObject*<OS_dispatch_semaphore> _waitableSemaphore;
	int _submitted;
	int _waited;
	int _completionWasCalled;

}
-(void)dealloc;
-(id)init;
-(id)mappedImage;
-(void)submitWorkBlock:(/*^block*/id)arg1 ;
@end

