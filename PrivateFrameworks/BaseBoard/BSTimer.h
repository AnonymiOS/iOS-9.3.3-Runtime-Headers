/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:24 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, BSDispatchSource;

@interface BSTimer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _handler;
	BSDispatchSource* _source;
	double _fireInterval;
	double _repeatInterval;
	double _leewayInterval;

}
+(id)scheduledTimerWithFireInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithFireInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithFireInterval:(double)arg1 repeatInterval:(double)arg2 leewayInterval:(double)arg3 queue:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)cancel;
-(void)dealloc;
-(void)schedule;
@end
