/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:00 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMFoundation/IMInvocationTrampoline.h>

@class NSThread;

@interface IMThreadedInvocationTrampoline : IMInvocationTrampoline {

	NSThread* _thread;
	BOOL _immediateForMatchingThread;

}
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithTarget:(id)arg1 thread:(id)arg2 immediateForMatchingThread:(BOOL)arg3 ;
@end

