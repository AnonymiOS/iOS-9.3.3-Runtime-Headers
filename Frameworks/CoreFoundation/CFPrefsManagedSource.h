/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:18 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPrefsPlistSource.h>

@interface CFPrefsManagedSource : CFPrefsPlistSource
+(void)withSourceForIdentifier:(CFStringRef)arg1 user:(CFStringRef)arg2 perform:(/*^block*/id)arg3 ;
-(BOOL)managed;
-(long long)sendMessageSettingValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(void)alreadylocked_setValues:(const void*)arg1 forKeys:(const _CFString*)arg2 count:(long long)arg3 ;
-(id)initWithDomain:(CFStringRef)arg1 user:(CFStringRef)arg2 byHost:(BOOL)arg3 ;
@end

