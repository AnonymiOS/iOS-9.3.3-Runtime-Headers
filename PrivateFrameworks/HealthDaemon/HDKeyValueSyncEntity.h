/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDNanoSyncEntity.h>
#import <libobjc.A.dylib/HDSyncEntity.h>

@class NSString;

@interface HDKeyValueSyncEntity : NSObject <HDNanoSyncEntity, HDSyncEntity>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)finalAnchorForNanoSyncRestoreSession:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3 ;
+(id)objectsForNanoSyncRestoreSession:(id)arg1 syncAnchorRange:(HDSyncAnchorRange)arg2 lastSyncAnchor:(long long*)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
+(int)nanoSyncObjectType;
+(unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1 ;
+(long long)_outgoingCategoryForNanoSyncProtocolVersion:(int)arg1 ;
+(long long)category;
+(long long)syncEntityType;
+(id)syncObjectsWithStore:(id)arg1 predicate:(id)arg2 syncAnchorRange:(HDSyncAnchorRange)arg3 lastSyncAnchor:(long long*)arg4 limit:(unsigned long long)arg5 healthDaemon:(id)arg6 error:(id*)arg7 ;
+(long long)nextSyncAnchorWithStore:(id)arg1 predicate:(id)arg2 startSyncAnchor:(long long)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
+(id)decodeSyncObjectWithData:(id)arg1 ;
+(long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
+(id)syncEntityDependencies;
+(void)didReceiveKeysAndValuesWithHealthDaemon:(id)arg1 ;
+(long long)outgoingCategoryWithSyncStore:(id)arg1 ;
+(id)_syncObjectPredicateWithPredicate:(id)arg1 ;
@end

