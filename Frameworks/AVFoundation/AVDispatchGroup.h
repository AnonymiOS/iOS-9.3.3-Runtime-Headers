/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray;

@interface AVDispatchGroup : NSObject {

	NSObject*<OS_dispatch_queue> _ivarAccessQueue;
	NSArray* _notifyBlocks;
	long long _outstandingOperations;

}
-(void)dealloc;
-(id)init;
-(void)enter;
-(void)notifyUsingBlock:(/*^block*/id)arg1 ;
-(void)leave;
-(void)finalize;
@end

