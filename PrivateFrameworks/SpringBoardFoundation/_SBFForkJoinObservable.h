/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:51 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBFObservable.h>

@class NSArray, NSMutableArray;

@interface _SBFForkJoinObservable : SBFObservable {

	NSArray* _observables;
	NSMutableArray* _results;
	unsigned long long _uncompletedObservableCount;

}
-(id)subscribe:(id)arg1 ;
-(void)_setResult:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_observableFinishedForObserver:(id)arg1 ;
-(id)initWithWithObservables:(id)arg1 ;
@end

