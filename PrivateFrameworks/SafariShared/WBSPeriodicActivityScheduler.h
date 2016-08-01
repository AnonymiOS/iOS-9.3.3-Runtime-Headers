/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:20 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSTimer, NSObject;

@interface WBSPeriodicActivityScheduler : NSObject {

	/*^block*/id _block;
	BOOL _invalidated;
	NSTimer* _timer;
	double _interval;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(void)invalidate;
-(id)initWithInterval:(double)arg1 minimumDelay:(double)arg2 lastFireDate:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)_scheduleTimerWithFireInterval:(double)arg1 ;
-(void)_timerDidFire:(id)arg1 ;
@end

