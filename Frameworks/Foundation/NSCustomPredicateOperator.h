/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:22 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPredicateOperator.h>

@interface NSCustomPredicateOperator : NSPredicateOperator {

	SEL _selector;

}
+(BOOL)supportsSecureCoding;
-(BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2 ;
-(id)initWithCustomSelector:(SEL)arg1 modifier:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SEL)selector;
-(id)symbol;
@end
