/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:02 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GKRule.h>

@class NSPredicate;

@interface GKNSPredicateRule : GKRule {

	NSPredicate* _predicate;

}

@property (nonatomic,retain,readonly) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
-(NSPredicate *)predicate;
-(id)initWithPredicate:(id)arg1 ;
-(BOOL)evaluatePredicateWithSystem:(id)arg1 ;
@end

