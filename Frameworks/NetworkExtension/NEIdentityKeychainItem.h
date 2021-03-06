/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:37 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEKeychainItem.h>

@interface NEIdentityKeychainItem : NEKeychainItem
+(id)copyIdentities:(id)arg1 fromDomain:(long long)arg2 ;
+(id)importPKCS12Data:(id)arg1 passphrase:(id)arg2 ;
+(id)copyPersistentReferenceForIdentity:(SecIdentityRef)arg1 ;
+(id)copyPropertiesForIdentity:(SecIdentityRef)arg1 persistentReference:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)sync;
-(void)syncUsingConfiguration:(id)arg1 accountName:(id)arg2 passwordType:(long long)arg3 identifierSuffix:(id)arg4 ;
-(id)initWithPassword:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3 ;
-(id)copyPassword;
-(id)copyQueryWithReturnTypes:(id)arg1 ;
@end

