/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:31 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSLock, NSMutableArray, NSArray;

@interface MPUOperation : NSOperation {

	NSLock* _stateLock;
	NSMutableArray* _observers;
	NSMutableArray* _conditions;
	NSMutableArray* _internalErrors;
	BOOL _hasAlreadyFinished;
	long long _state;

}

@property (nonatomic,readonly) NSArray * conditions;              //@synthesize conditions=_conditions - In the implementation block
@property (assign) long long state;                               //@synthesize state=_state - In the implementation block
+(id)keyPathsForValuesAffectingIsReady;
+(id)keyPathsForValuesAffectingIsExecuting;
+(id)keyPathsForValuesAffectingIsFinished;
-(void)waitUntilFinished;
-(BOOL)isReady;
-(id)init;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)start;
-(void)main;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)finish;
-(NSArray *)conditions;
-(void)finishWithErrors:(id)arg1 ;
-(void)willEnqueue;
-(void)cancelWithError:(id)arg1 ;
-(void)_evaluateConditions;
-(void)finishedWithErrors:(id)arg1 ;
-(void)addCondition:(id)arg1 ;
-(void)produceOperation:(id)arg1 ;
-(void)execute;
-(void)addDependency:(id)arg1 ;
-(void)finishWithError:(id)arg1 ;
@end

