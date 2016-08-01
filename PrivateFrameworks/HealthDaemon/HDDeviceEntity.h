/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDDeviceEntity : HDHealthEntity
+(id)columnsDefinition;
+(id)databaseTable;
+(long long)protectionClass;
+(id)propertyForSyncProvenance;
+(id)uniquedColumns;
+(id)deviceEntityWithDevice:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)deviceEntitiesWithDevice:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)deviceEntitiesWithProperty:(id)arg1 matchingValues:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4 ;
+(id)deviceEntityWithUUID:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)_deviceEntityWithDevice:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)_insertDeviceWithUUID:(id)arg1 creationDate:(double)arg2 name:(id)arg3 manufacturer:(id)arg4 model:(id)arg5 hardwareVersion:(id)arg6 firmwareVersion:(id)arg7 softwareVersion:(id)arg8 localIdentifier:(id)arg9 UDIDeviceIdentifier:(id)arg10 syncProvenance:(long long)arg11 database:(id)arg12 error:(id*)arg13 ;
+(id)_predicateForDeviceWithUUID:(id)arg1 ;
+(id)_predicateForDevice:(id)arg1 ;
+(id)_deviceEntitiesWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)_predicateForDeviceProperty:(id)arg1 withValues:(id)arg2 ;
+(id)_propertiesForDevice;
+(id)_deviceWithRow:(HDSQLiteRowRef)arg1 ;
+(BOOL)_validateCodableDevice:(id)arg1 error:(id*)arg2 ;
+(id)_sqlPropertyForPredicateProperty:(id)arg1 ;
+(BOOL)_insertCodableDevices:(id)arg1 syncStore:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4 ;
+(id)_codableDeviceWithRow:(HDSQLiteRowRef)arg1 ;
-(id)deviceUUIDInDatabase:(id)arg1 error:(id*)arg2 ;
-(id)deviceInHealthDatabase:(id)arg1 error:(id*)arg2 ;
-(id)deviceUUIDInHealthDatabase:(id)arg1 error:(id*)arg2 ;
-(id)creationDateInHealthDatabase:(id)arg1 error:(id*)arg2 ;
@end

