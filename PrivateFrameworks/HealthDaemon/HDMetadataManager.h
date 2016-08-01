/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDHealthMetadataManager.h>

@class HDDatabaseValueCache, NSString;

@interface HDMetadataManager : NSObject <HDHealthMetadataManager> {

	HDDatabaseValueCache* _keyEntityCache;
	HDDatabaseValueCache* _keyCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)metadataForDataEntityWithPersistentID:(long long)arg1 statement:(id)arg2 error:(id*)arg3 ;
-(BOOL)insertMetadata:(id)arg1 forDataEntityWithID:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
-(id)_keyForKeyID:(id)arg1 database:(id)arg2 ;
-(id)_keyEntityForKey:(id)arg1 createIfNecessary:(BOOL)arg2 database:(id)arg3 error:(id*)arg4 ;
-(BOOL)_insertValueEntityWithKeyID:(id)arg1 healthEntityID:(id)arg2 value:(id)arg3 database:(id)arg4 error:(id*)arg5 ;
-(id)metadataForDataEntityWithPersistentID:(long long)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
@end

