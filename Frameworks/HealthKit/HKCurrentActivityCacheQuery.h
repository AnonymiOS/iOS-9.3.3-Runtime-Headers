/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>

@class HKActivityCache;

@interface HKCurrentActivityCacheQuery : HKQuery {

	/*^block*/id _updateHandler;
	HKActivityCache* _lastActivityCache;

}

@property (nonatomic,copy) id updateHandler;                                   //@synthesize updateHandler=_updateHandler - In the implementation block
@property (nonatomic,retain) HKActivityCache * lastActivityCache;              //@synthesize lastActivityCache=_lastActivityCache - In the implementation block
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(void)_queue_cleanupAfterDeactivation;
-(BOOL)_queue_shouldStayAliveAfterInitialResults;
-(void)_queue_validate;
-(/*^block*/id)_queue_errorHandler;
-(id)initWithUpdateHandler:(/*^block*/id)arg1 ;
-(HKActivityCache *)lastActivityCache;
-(void)setLastActivityCache:(HKActivityCache *)arg1 ;
-(void)deliverSample:(id)arg1 forQuery:(id)arg2 ;
@end

