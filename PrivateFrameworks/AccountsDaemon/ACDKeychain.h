/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:21 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ACDKeychain : NSObject
+(BOOL)canAccessPasswordsWithPolicy:(id)arg1 ;
+(id)passwordForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
+(void)updateItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 newValues:(id)arg4 options:(id)arg5 error:(id*)arg6 ;
+(void)addItemWithServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 passwordData:(id)arg4 options:(id)arg5 error:(id*)arg6 ;
+(void)removeItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 error:(id*)arg4 ;
+(id)_knownMissingKeychainItems;
+(id)_missingKeychainItemSpecifierForService:(id)arg1 username:(id)arg2 ;
@end
