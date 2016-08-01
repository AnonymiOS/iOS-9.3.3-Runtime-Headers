/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:27 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/PFUbiquityBaselineOperation.h>

@class PFUbiquityBaselineHeuristics;

@interface PFUbiquityBaselineRollOperation : PFUbiquityBaselineOperation {

	PFUbiquityBaselineHeuristics* _heuristics;

}

@property (assign) NSObject*<PFUbiquityBaselineRollOperationDelegate> delegate; 
-(id)retainedDelegate;
-(BOOL)haveConsistentStateForBaselineRoll;
-(BOOL)rollBaselineWithError:(id*)arg1 ;
-(void)setDelegate:(NSObject*<PFUbiquityBaselineRollOperationDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSObject*<PFUbiquityBaselineRollOperationDelegate>)delegate;
-(void)main;
@end

