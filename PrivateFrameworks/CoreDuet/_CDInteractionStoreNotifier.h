/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:56 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _CDInteractionStoreNotifier : NSObject {

	int _notifierToken;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)dealloc;
-(id)init;
-(void)recorded:(id)arg1 ;
-(void)postPackedMechanisms:(unsigned long long)arg1 ;
-(void)deleted;
@end

