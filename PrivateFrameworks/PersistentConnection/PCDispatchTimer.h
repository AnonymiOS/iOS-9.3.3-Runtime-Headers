/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:29 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSDate, CUTWeakReference;

@interface PCDispatchTimer : NSObject {

	NSObject*<OS_dispatch_source> _timerSource;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _fireTime;
	NSDate* _fireDate;
	CUTWeakReference* _target;
	SEL _selector;
	BOOL _isValid;

}

@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,retain) NSDate * fireDate; 
-(id)initWithQueue:(id)arg1 target:(id)arg2 selector:(SEL)arg3 fireTime:(unsigned long long)arg4 ;
-(void)_callTarget;
-(void)_cleanupTimer;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(void)setFireDate:(NSDate *)arg1 ;
-(void)start;
-(NSDate *)fireDate;
@end
