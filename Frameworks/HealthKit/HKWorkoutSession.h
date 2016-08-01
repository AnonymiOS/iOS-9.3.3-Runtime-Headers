/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_HKWorkoutSessionDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue, HKWorkoutSessionDelegate;
@class NSObject, _HKWorkoutSession, NSDate, NSString;

@interface HKWorkoutSession : NSObject <_HKWorkoutSessionDelegate, NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _queue;
	id<HKWorkoutSessionDelegate> _delegate;
	_HKWorkoutSession* _privateSession;

}

@property (readonly) unsigned long long activityType; 
@property (readonly) long long locationType; 
@property (__weak) id<HKWorkoutSessionDelegate> delegate; 
@property (readonly) long long state; 
@property (readonly) NSDate * startDate; 
@property (readonly) NSDate * endDate; 
@property (getter=_privateSession,nonatomic,readonly) _HKWorkoutSession * privateSession;              //@synthesize privateSession=_privateSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<HKWorkoutSessionDelegate>)arg1 ;
-(id<HKWorkoutSessionDelegate>)delegate;
-(long long)state;
-(id)_init;
-(unsigned long long)activityType;
-(long long)locationType;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)_privateSession;
-(id)_initWithActivityType:(unsigned long long)arg1 locationType:(long long)arg2 ;
-(id)initWithActivityType:(unsigned long long)arg1 locationType:(long long)arg2 ;
-(void)workoutSession:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(id)arg4 ;
-(void)workoutSession:(id)arg1 didFailWithError:(id)arg2 ;
@end

