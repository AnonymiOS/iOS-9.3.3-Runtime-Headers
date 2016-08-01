/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:22 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class NSString, ACAccount;

@interface AAAuthenticateRequest : AARequest {

	NSString* _username;
	NSString* _password;
	NSString* _authToken;
	ACAccount* _account;

}

@property (nonatomic,copy) NSString * username;                //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * authToken;               //@synthesize authToken=_authToken - In the implementation block
@property (nonatomic,retain) ACAccount * account;              //@synthesize account=_account - In the implementation block
+(Class)responseClass;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)authToken;
-(void)setAuthToken:(NSString *)arg1 ;
-(id)urlCredential;
-(id)initWithURLString:(id)arg1 username:(id)arg2 password:(id)arg3 ;
-(id)urlRequest;
-(id)urlString;
-(id)initWithAccount:(id)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(id)initWithUsername:(id)arg1 password:(id)arg2 ;
@end

