/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:34 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString, NSMutableDictionary, NSArray, NSDictionary;

@interface SSVPushNotificationParameters : NSObject <SSXPCCoding, NSCopying> {

	NSNumber* _accountIdentifier;
	NSString* _environmentName;
	NSMutableDictionary* _parameterDictionary;
	long long _requestType;

}

@property (nonatomic,copy) NSNumber * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * environmentName;                //@synthesize environmentName=_environmentName - In the implementation block
@property (nonatomic,copy) NSArray * mediaKinds; 
@property (nonatomic,copy) NSString * notificationType; 
@property (nonatomic,copy) NSDictionary * putParameters; 
@property (assign,nonatomic) long long requestType;                   //@synthesize requestType=_requestType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)valueForParameter:(id)arg1 ;
-(void)setEnvironmentName:(NSString *)arg1 ;
-(NSArray *)mediaKinds;
-(NSDictionary *)putParameters;
-(void)setMediaKinds:(NSArray *)arg1 ;
-(void)setPutParameters:(NSDictionary *)arg1 ;
-(id)_copyParametersDictionary;
-(NSString *)environmentName;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRequestType:(long long)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSNumber *)accountIdentifier;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(long long)requestType;
-(void)setValue:(id)arg1 forParameter:(id)arg2 ;
-(NSString *)notificationType;
-(void)setNotificationType:(NSString *)arg1 ;
@end

