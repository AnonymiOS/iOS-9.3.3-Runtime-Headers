/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface TLAlertCompletion : NSObject {

	NSObject*<OS_dispatch_queue> _targetQueue;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;                                              //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> targetQueue;              //@synthesize targetQueue=_targetQueue - In the implementation block
-(void)dealloc;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)setTargetQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)targetQueue;
@end

