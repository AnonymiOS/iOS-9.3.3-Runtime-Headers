/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:45 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FrontBoard/FrontBoard-Structs.h>
@class BSMachPortSendRight;

@interface FBProcessCPUStatistics : NSObject {

	BSMachPortSendRight* _taskNamePort;
	FBProcessTimes _times;

}

@property (nonatomic,readonly) double totalElapsedTime; 
@property (nonatomic,readonly) double totalElapsedUserTime; 
@property (nonatomic,readonly) double totalElapsedSystemTime; 
@property (nonatomic,readonly) double totalElapsedIdleTime; 
-(void)dealloc;
-(void)update;
-(double)totalElapsedTime;
-(id)initWithTaskNamePort:(id)arg1 ;
-(id)descriptionForCrashReport;
-(double)_elapsedCPUTime;
-(void)_getApplicationCPUTimesForUser:(double*)arg1 system:(double*)arg2 idle:(double*)arg3 ;
-(void)_hostwideUserElapsedCPUTime:(double*)arg1 systemElapsedCPUTime:(double*)arg2 idleElapsedCPUTime:(double*)arg3 ;
-(double)totalElapsedUserTime;
-(double)totalElapsedSystemTime;
-(double)totalElapsedIdleTime;
@end

