/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:34 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSThread, NSObject;

@interface ICThreadBlockDispatcher : NSObject {

	NSThread* _creationThread;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (__weak) NSThread * creationThread;                                         //@synthesize creationThread=_creationThread - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
-(id)init;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)setCreationThread:(NSThread *)arg1 ;
-(BOOL)currentIsCreationThread;
-(NSThread *)creationThread;
-(void)performBlockAndWaitUntilDone:(BOOL)arg1 block:(/*^block*/id)arg2 ;
-(void)assertIsValidCallingThread;
-(void)useDispatchQueueOnly;
-(void)performBlockAndWaitUntilFinishedWithRunLoopProcessingTime:(double)arg1 block:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

