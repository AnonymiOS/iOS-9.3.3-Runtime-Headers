/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:55 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSMutableArray, NSString;

@interface BWPipelineStage : NSObject {

	NSObject*<OS_dispatch_queue> _executionQueue;
	NSObject*<OS_dispatch_group> _executionGroup;
	NSMutableArray* _queuedMessages;
	NSMutableArray* _inputsForQueuedMessages;
	unsigned _priority;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned priority;              //@synthesize priority=_priority - In the implementation block
+(void)initialize;
+(id)pipelineStageWithName:(id)arg1 priority:(unsigned)arg2 ;
+(id)pipelineStageWithName:(id)arg1 priority:(unsigned)arg2 discardsLateSampleData:(BOOL)arg3 ;
+(id)_currentPipelineStage;
+(void)_setCurrentPipelineStage:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(unsigned)priority;
-(void)sendMessage:(id)arg1 toInput:(id)arg2 ;
-(id)_initWithName:(id)arg1 priority:(unsigned)arg2 discardsLateSampleData:(BOOL)arg3 ;
-(BOOL)_isCurrentPipelineStage;
-(void)_serviceQueuedMessages;
@end

