/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:55 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface YTProtectedDefaults : NSObject {

	NSMutableDictionary* _internalDictionary;
	BOOL _shouldSynchronize;
	NSString* _plistPath;

}
+(id)sharedInstance;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)synchronize;
-(void)_protectedDataAvailable;
-(void)_protectedDataUnvailable;
@end
