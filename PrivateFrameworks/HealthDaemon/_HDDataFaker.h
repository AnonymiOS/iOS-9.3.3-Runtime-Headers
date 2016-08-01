/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_HDDemoDataModuleDelegate.h>

@class HKQuantity, NSOperationQueue, NSArray, NSString;

@interface _HDDataFaker : NSObject <_HDDemoDataModuleDelegate> {

	long long _activityType;
	HKQuantity* _speed;
	/*^block*/id _objectHandler;
	NSOperationQueue* _operationQueue;
	NSArray* _modules;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long activityType; 
@property (nonatomic,readonly) HKQuantity * speed; 
+(BOOL)_isSupportedActivityType:(long long)arg1 ;
-(long long)activityType;
-(void)stop;
-(HKQuantity *)speed;
-(void)start;
-(id)_generateSamplesForPeriodIncludeLessFrequentSamples:(BOOL)arg1 ;
-(void)demoDataModule:(id)arg1 didProduceDataObject:(id)arg2 ;
-(id)initWithActivityType:(long long)arg1 speed:(id)arg2 objectHandler:(/*^block*/id)arg3 ;
-(void)generateDataForMinutes:(double)arg1 completion:(/*^block*/id)arg2 ;
@end

