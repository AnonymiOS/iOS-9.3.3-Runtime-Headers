/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthEntity.h>

@interface HDDataTypeSourceOrderEntity : HDHealthEntity
+(id)columnsDefinition;
+(id)databaseTable;
+(long long)protectionClass;
+(id)propertyForSyncProvenance;
+(id)joinClausesForProperty:(id)arg1 ;
+(id)tableAliases;
+(BOOL)saveOrderedSourceIDs:(id)arg1 type:(id)arg2 userOrdered:(BOOL)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
+(id)orderedSourceIDsForType:(id)arg1 userOrdered:(BOOL*)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
+(BOOL)_saveOrderedSourceIDs:(id)arg1 dataTypeCode:(long long)arg2 userOrdered:(BOOL)arg3 syncProvenance:(long long)arg4 database:(id)arg5 error:(id*)arg6 ;
+(BOOL)_insertCodableObjectTypeSourceOrders:(id)arg1 syncStore:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4 ;
@end

