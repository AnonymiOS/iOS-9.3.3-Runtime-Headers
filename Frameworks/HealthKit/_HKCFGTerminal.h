/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/_HKCFGExpression.h>

@interface _HKCFGTerminal : _HKCFGExpression
+(id)terminalMatchingString:(id)arg1 ;
+(id)terminalMatchingString:(id)arg1 caseSensitive:(BOOL)arg2 ;
+(id)terminalMatchingCharacterInSet:(id)arg1 ;
+(id)terminalMatchingIntegerWithCondition:(/*^block*/id)arg1 ;
+(id)terminalMatchingDoubleWithCondition:(/*^block*/id)arg1 ;
+(id)terminalMatchingCharacterInString:(id)arg1 ;
+(id)terminalMatchingAnyInteger;
+(id)terminalMatchingAnyDouble;
+(id)terminalMatchingSequenceOfCharactersInSet:(id)arg1 ;
-(id)_label;
-(void)_tryNodesWithContext:(id)arg1 solutionTest:(/*^block*/id)arg2 ;
-(unsigned long long)_minimumLength;
-(BOOL)_scanValue:(id*)arg1 withScanner:(id)arg2 ;
-(id)characterSet;
@end

