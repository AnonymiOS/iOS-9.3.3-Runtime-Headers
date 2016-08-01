/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:12 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusKit/OpusKit-Structs.h>
@class NSMutableArray;

@interface OKSettings : NSObject {

	NSMutableArray* _transactions;

}
+(BOOL)exportClassSettings:(Class)arg1 toJavaScriptContext:(id)arg2 ;
+(void)resetAndApplySettings:(id)arg1 toObject:(id)arg2 withResolution:(id)arg3 ;
+(void)applyUpdateBlockOnce:(/*^block*/id)arg1 forKey:(id)arg2 ;
+(void)applySettings:(id)arg1 toObject:(id)arg2 withResolution:(id)arg3 ;
+(void)beginApplyingSettings;
+(void)resetObject:(id)arg1 notRespondingToSettingsKeys:(id)arg2 withResolution:(id)arg3 ;
+(void)commitApplyingSettings;
+(void)applyValue:(id)arg1 forKey:(id)arg2 ofType:(unsigned long long)arg3 toObject:(id)arg4 ;
+(void)resetObject:(id)arg1 respondingToSettingsKeys:(id)arg2 withResolution:(id)arg3 ;
+(/*^block*/id)_newSettingGetterBlockForKey:(id)arg1 ofType:(unsigned long long)arg2 optionalSubType:(unsigned long long)arg3 optionalClass:(Class)arg4 optionalMapping:(id)arg5 ;
+(/*^block*/id)_newSettingSetterBlockForKey:(id)arg1 ofType:(unsigned long long)arg2 optionalSubType:(unsigned long long)arg3 optionalClass:(Class)arg4 optionalMapping:(id)arg5 ;
+(id)transactionsManager;
+(BOOL)isApplyingSettings;
+(void)registerApplyingSettingsUpdateBlock:(/*^block*/id)arg1 forKey:(id)arg2 ;
+(void)resetObject:(id)arg1 withResolution:(id)arg2 ;
+(id)objectFromClass:(Class)arg1 withSettings:(id)arg2 andResolution:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)commitTransaction;
-(void)beginTransaction;
-(void)registerUpdateBlock:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(BOOL)hasPendingTransaction;
-(id)pendingTransaction;
@end

