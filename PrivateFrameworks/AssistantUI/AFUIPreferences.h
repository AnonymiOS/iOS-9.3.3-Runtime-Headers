/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:56 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFUIPreferencesDelegate;
@class NSUserDefaults;

@interface AFUIPreferences : NSObject {

	NSUserDefaults* _userDefaults;
	id<AFUIPreferencesDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AFUIPreferencesDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<AFUIPreferencesDelegate>)arg1 ;
-(id)init;
-(id<AFUIPreferencesDelegate>)delegate;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)synchronize;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(long long)integerForKey:(id)arg1 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(id)initWithDefaultsAtURL:(id)arg1 ;
-(void)_mutateValueForKey:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithDefaultsResource:(id)arg1 withExtension:(id)arg2 inBundle:(id)arg3 ;
-(double)doubleForKey:(id)arg1 ;
@end

