/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSOperationQueue;

@interface MPUKeyValueObserver : NSObject {

	id _observedObject;
	NSString* _observedKeyPath;
	/*^block*/id _observationHandler;
	NSOperationQueue* _queue;

}

@property (nonatomic,retain) id observedObject;                     //@synthesize observedObject=_observedObject - In the implementation block
@property (nonatomic,copy) NSString * observedKeyPath;              //@synthesize observedKeyPath=_observedKeyPath - In the implementation block
@property (nonatomic,copy) id observationHandler;                   //@synthesize observationHandler=_observationHandler - In the implementation block
@property (nonatomic,retain) NSOperationQueue * queue;              //@synthesize queue=_queue - In the implementation block
+(id)observerForKeyPath:(id)arg1 object:(id)arg2 queue:(id)arg3 observationHandler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSOperationQueue *)queue;
-(id)observedObject;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(id)initWithKeyPath:(id)arg1 object:(id)arg2 queue:(id)arg3 observationHandler:(/*^block*/id)arg4 ;
-(id)observationHandler;
-(void)setObservedObject:(id)arg1 ;
-(NSString *)observedKeyPath;
-(void)setObservedKeyPath:(NSString *)arg1 ;
-(void)setObservationHandler:(id)arg1 ;
@end

