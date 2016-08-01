/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:48 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, PFCoalescerContext;

@interface PFCoalescer : NSObject {

	long long _sequenceNumber;
	long long _fireSequenceNumber;
	BOOL _usesTarget;
	BOOL _initialDelayTimerIsArmed;
	double _initialDelay;
	long long _mode;
	id _target;
	id _buffer;
	NSObject*<OS_dispatch_queue> _sourceQueue;
	id _targetQueue;
	long long _queueType;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_dispatch_source> _source;
	/*^block*/id _snapshotAndDrainHandler;
	/*^block*/id _action;
	PFCoalescerContext* _context;

}

@property (assign) double initialDelay;                                      //@synthesize initialDelay=_initialDelay - In the implementation block
@property (assign) long long mode;                                           //@synthesize mode=_mode - In the implementation block
@property (__weak) id target;                                                //@synthesize target=_target - In the implementation block
@property (assign) BOOL usesTarget;                                          //@synthesize usesTarget=_usesTarget - In the implementation block
@property (retain) id buffer;                                                //@synthesize buffer=_buffer - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> sourceQueue;                 //@synthesize sourceQueue=_sourceQueue - In the implementation block
@property (retain) id targetQueue;                                           //@synthesize targetQueue=_targetQueue - In the implementation block
@property (assign) long long queueType;                                      //@synthesize queueType=_queueType - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> isolationQueue;              //@synthesize isolationQueue=_isolationQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> source;                     //@synthesize source=_source - In the implementation block
@property (copy) id snapshotAndDrainHandler;                                 //@synthesize snapshotAndDrainHandler=_snapshotAndDrainHandler - In the implementation block
@property (copy) id action;                                                  //@synthesize action=_action - In the implementation block
@property (retain) PFCoalescerContext * context;                             //@synthesize context=_context - In the implementation block
@property (assign) BOOL initialDelayTimerIsArmed;                            //@synthesize initialDelayTimerIsArmed=_initialDelayTimerIsArmed - In the implementation block
+(id)setCoalescerWithLabel:(id)arg1 target:(id)arg2 queue:(id)arg3 action:(/*^block*/id)arg4 ;
+(id)setCoalescerWithLabel:(id)arg1 queue:(id)arg2 action:(/*^block*/id)arg3 ;
+(id)coalescerWithLabel:(id)arg1 target:(id)arg2 buffer:(id)arg3 queue:(id)arg4 bufferDrainer:(/*^block*/id)arg5 action:(/*^block*/id)arg6 ;
+(/*^block*/id)mutableCollectionBufferDrainer;
+(id)mutableContainerCoalescerWithLabel:(id)arg1 container:(id)arg2 queue:(id)arg3 action:(/*^block*/id)arg4 ;
+(id)mutableContainerCoalescerWithLabel:(id)arg1 target:(id)arg2 container:(id)arg3 queue:(id)arg4 action:(/*^block*/id)arg5 ;
+(id)coalescerWithLabel:(id)arg1 target:(id)arg2 queue:(id)arg3 action:(/*^block*/id)arg4 ;
+(id)coalescerWithLabel:(id)arg1 queue:(id)arg2 action:(/*^block*/id)arg3 ;
+(id)dictionaryCoalescerWithLabel:(id)arg1 queue:(id)arg2 action:(/*^block*/id)arg3 ;
+(id)dictionaryCoalescerWithLabel:(id)arg1 target:(id)arg2 queue:(id)arg3 action:(/*^block*/id)arg4 ;
+(id)arrayCoalescerWithLabel:(id)arg1 queue:(id)arg2 action:(/*^block*/id)arg3 ;
+(id)arrayCoalescerWithLabel:(id)arg1 target:(id)arg2 queue:(id)arg3 action:(/*^block*/id)arg4 ;
-(id)init;
-(void)setTarget:(id)arg1 ;
-(void)setSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)source;
-(id)action;
-(id)target;
-(PFCoalescerContext *)context;
-(void)setAction:(id)arg1 ;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(void)update:(/*^block*/id)arg1 ;
-(void)update;
-(void)setContext:(PFCoalescerContext *)arg1 ;
-(id)initWithLabel:(id)arg1 target:(id)arg2 buffer:(id)arg3 queue:(id)arg4 bufferDrainer:(/*^block*/id)arg5 action:(/*^block*/id)arg6 ;
-(void)setUsesTarget:(BOOL)arg1 ;
-(void)setBuffer:(id)arg1 ;
-(void)setSnapshotAndDrainHandler:(id)arg1 ;
-(void)setSourceQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setIsolationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setTargetQueue:(id)arg1 ;
-(void)setQueueType:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)sourceQueue;
-(BOOL)usesTarget;
-(id)buffer;
-(id)snapshotAndDrainHandler;
-(NSObject*<OS_dispatch_queue>)isolationQueue;
-(id)targetQueue;
-(void)dispatch_after:(unsigned long long)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(double)initialDelay;
-(void)setInitialDelay:(double)arg1 ;
-(long long)queueType;
-(BOOL)initialDelayTimerIsArmed;
-(void)setInitialDelayTimerIsArmed:(BOOL)arg1 ;
@end

