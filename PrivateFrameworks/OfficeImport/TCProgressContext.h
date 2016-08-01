/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:51 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OITSUProgressContext, TCProgressStage, NSDate, NSMutableArray;

@interface TCProgressContext : NSObject {

	OITSUProgressContext* m_parentProgressContext;
	TCProgressStage* m_currentStage;
	NSDate* m_lastReportTime;
	NSMutableArray* m_stackOfBranches;

}
+(id)contextForCurrentThread;
+(id)stageForCurrentThread;
+(void)setProgress:(double)arg1 ;
+(void)setMessage:(id)arg1 ;
+(void)removeProgressObserver:(id)arg1 ;
+(void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2 ;
+(void)advanceProgress:(double)arg1 ;
+(double)currentPosition;
+(void)endStage;
+(void)addProgressObserver:(id)arg1 selector:(SEL)arg2 ;
+(void)removeContextForCurrentThread;
+(void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3 ;
+(void)createContextForCurrentThreadWithParentContext:(id)arg1 ;
+(id)createBranchWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3 ;
+(void)endBranch:(id)arg1 ;
+(void)pushBranch:(id)arg1 ;
+(void)popBranch;
+(void)advanceProgressInContext:(id)arg1 progress:(double)arg2 ;
-(void)dealloc;
-(id)currentStage;
-(id)initWithParentContext:(id)arg1 ;
-(id)rootStage;
-(void)reportProgress:(double)arg1 ;
@end

