/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:46 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PLDefaults : NSObject {

	BOOL _debugEnabled;
	NSMutableDictionary* _managedPrefsCache;
	NSMutableDictionary* _instancePrefsCache;
	NSMutableDictionary* _userPrefsCache;

}

@property (assign) BOOL debugEnabled;                                     //@synthesize debugEnabled=_debugEnabled - In the implementation block
@property (retain) NSMutableDictionary * managedPrefsCache;               //@synthesize managedPrefsCache=_managedPrefsCache - In the implementation block
@property (retain) NSMutableDictionary * instancePrefsCache;              //@synthesize instancePrefsCache=_instancePrefsCache - In the implementation block
@property (retain) NSMutableDictionary * userPrefsCache;                  //@synthesize userPrefsCache=_userPrefsCache - In the implementation block
+(long long)longForKey:(id)arg1 ;
+(id)objectForKey:(id)arg1 ;
+(void)setObject:(id)arg1 forKey:(id)arg2 ;
+(BOOL)boolForKey:(id)arg1 ;
+(id)applicationID;
+(void)resetUserDefaultCacheForKey:(id)arg1 ;
+(BOOL)fullModeLiveQuery;
+(void)setObject:(id)arg1 forKey:(id)arg2 forApplicationID:(id)arg3 saveToDisk:(BOOL)arg4 ;
+(double)doubleForKey:(id)arg1 ifNotSet:(double)arg2 ;
+(id)allDefaultsEnabled;
+(BOOL)isClassNameDebugEnabled:(id)arg1 ;
+(BOOL)isClassNameDebugEnabled:(id)arg1 forKey:(id)arg2 ;
+(void)setClassName:(id)arg1 debugEnabled:(BOOL)arg2 ;
+(void)setClassName:(id)arg1 debugEnabled:(BOOL)arg2 forKey:(id)arg3 ;
+(BOOL)fullModeForClass:(Class)arg1 ;
+(BOOL)fullPLLog;
+(void)setClass:(Class)arg1 debugEnabled:(BOOL)arg2 ;
+(void)setClass:(Class)arg1 debugEnabled:(BOOL)arg2 forKey:(id)arg3 ;
+(id)sharedDefaults;
+(BOOL)debugEnabled;
+(BOOL)isClassDebugEnabled:(Class)arg1 forKey:(id)arg2 ;
+(BOOL)isClassDebugEnabled:(Class)arg1 ;
+(BOOL)fullMode;
+(long long)longForKey:(id)arg1 ifNotSet:(long long)arg2 ;
+(void)setObject:(id)arg1 forKey:(id)arg2 saveToDisk:(BOOL)arg3 ;
+(id)objectForKey:(id)arg1 forApplicationID:(id)arg2 synchronize:(BOOL)arg3 ;
+(BOOL)isDevBoard;
+(BOOL)boolForKey:(id)arg1 ifNotSet:(BOOL)arg2 ;
+(void)resetUserDefaultCacheForKey:(id)arg1 forApplicationID:(id)arg2 ;
+(double)doubleForKey:(id)arg1 ;
+(BOOL)objectExistsForKey:(id)arg1 ;
+(id)objectForKey:(id)arg1 synchronize:(BOOL)arg2 ;
+(BOOL)isModelingDebugEnabled;
-(id)init;
-(void)setDebugEnabled:(BOOL)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 forApplicationID:(id)arg3 saveToDisk:(BOOL)arg4 ;
-(id)userDefaultsObjectForKey:(id)arg1 forApplicationID:(id)arg2 synchronize:(BOOL)arg3 ;
-(id)instancePrefsObjectForKey:(id)arg1 ;
-(void)setManagedPrefsCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)managedPrefsCache;
-(NSMutableDictionary *)userPrefsCache;
-(NSMutableDictionary *)instancePrefsCache;
-(void)setInstancePrefsCache:(NSMutableDictionary *)arg1 ;
-(void)setUserPrefsCache:(NSMutableDictionary *)arg1 ;
-(BOOL)debugEnabled;
-(id)objectForKey:(id)arg1 forApplicationID:(id)arg2 synchronize:(BOOL)arg3 ;
-(id)managedPrefsObjectForKey:(id)arg1 forApplicationID:(id)arg2 synchronize:(BOOL)arg3 ;
-(void)resetUserDefaultCacheForKey:(id)arg1 forApplicationID:(id)arg2 ;
@end
