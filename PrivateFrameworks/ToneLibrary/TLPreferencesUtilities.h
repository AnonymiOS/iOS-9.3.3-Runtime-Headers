/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ToneLibrary/ToneLibrary-Structs.h>
@interface TLPreferencesUtilities : NSObject
+(void)migratePerAccountPreferencesInDomain:(CFStringRef)arg1 withRegularPreferenceKeys:(const id*)arg2 regularPreferenceKeysCount:(unsigned long long)arg3 intoSinglePerAccountPreferenceWithSuffix:(id)arg4 usingPreferencesScope:(int)arg5 ;
+(id)_existingPerAccountPreferenceKeyPrefixesWithRegularPreferenceKeys:(const id*)arg1 regularPreferenceKeysCount:(unsigned long long)arg2 ;
+(void)_setValue:(void*)arg1 forKey:(CFStringRef)arg2 inDomain:(CFStringRef)arg3 usingPreferencesScope:(int)arg4 ;
+(void)_enumerateKeysAndValuesWithEligibleKeyPrefixes:(id)arg1 inDomain:(CFStringRef)arg2 usingPreferencesScope:(int)arg3 withBlock:(/*^block*/id)arg4 ;
+(void)_synchronizeDomain:(CFStringRef)arg1 usingPreferencesScope:(int)arg2 ;
+(CFDictionaryRef)_copyAllKeysAndValuesFromDomain:(CFStringRef)arg1 usingPreferencesScope:(int)arg2 ;
@end

