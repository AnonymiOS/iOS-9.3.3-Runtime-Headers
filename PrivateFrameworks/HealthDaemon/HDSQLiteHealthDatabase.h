/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDSQLiteDatabase.h>

@interface HDSQLiteHealthDatabase : HDSQLiteDatabase
+(id)protectedDatabaseURLWithHomeDirectoryPath:(id)arg1 ;
+(id)virtualFilesystemModule;
+(id)mainDatabaseURLWithHomeDirectoryPath:(id)arg1 ;
+(void)removeAllDatabasesWithHomeDirectoryPath:(id)arg1 reason:(id)arg2 ;
+(void)_removeDatabases:(id)arg1 reason:(id)arg2 ;
+(void)removeProtectedDatabaseWithHomeDirectoryPath:(id)arg1 reason:(id)arg2 ;
-(BOOL)isProtectedDatabaseAttached;
-(BOOL)attachProtectedDatabaseWithURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)detachProtectedDatabaseWithError:(id*)arg1 ;
@end

