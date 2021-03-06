/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:26 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NSFaultHandler : NSObject
+(BOOL)accessInstanceVariablesDirectly;
+(void)initialize;
-(id)retainedFulfillAggregateFaultForObject:(id)arg1 andRelationship:(id)arg2 withContext:(id)arg3 ;
-(id)initWithPersistenceStore:(id)arg1 ;
-(id)fulfillFault:(id)arg1 withContext:(id)arg2 forIndex:(unsigned long long)arg3 ;
-(id)fulfillFault:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(void)fulfillFault:(id)arg1 withContext:(id)arg2 ;
-(id)retainedOrderedFaultInformationForAggregateFaultForObject:(id)arg1 andRelationship:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(void)turnObject:(id)arg1 intoFaultWithContext:(id)arg2 ;
-(void)_fireFirstAndSecondLevelFaultsForObject:(id)arg1 withContext:(id)arg2 ;
@end

