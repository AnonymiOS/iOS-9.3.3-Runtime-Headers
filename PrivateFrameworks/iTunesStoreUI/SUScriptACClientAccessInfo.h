/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:14 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptAppleAccountType, NSMutableDictionary, NSDictionary, NSString;

@interface SUScriptACClientAccessInfo : SUScriptObject {

	SUScriptAppleAccountType* _accountType;
	NSMutableDictionary* _dictionary;

}

@property (readonly) NSDictionary * accessInfoDictionary; 
@property (retain) SUScriptAppleAccountType * accountType; 
@property (readonly) NSString * accessKeyFacebookAppID; 
@property (readonly) NSString * accessKeyFacebookPermissions; 
@property (readonly) NSString * accessKeyPurposeStatement; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(void)dealloc;
-(id)init;
-(id)attributeKeys;
-(void)setAccountType:(SUScriptAppleAccountType *)arg1 ;
-(NSDictionary *)accessInfoDictionary;
-(id)valueForAccessKey:(id)arg1 ;
-(void)setValue:(id)arg1 forAccessKey:(id)arg2 ;
-(NSString *)accessKeyFacebookAppID;
-(NSString *)accessKeyFacebookPermissions;
-(NSString *)accessKeyPurposeStatement;
-(id)scriptAttributeKeys;
-(id)_className;
-(SUScriptAppleAccountType *)accountType;
@end
