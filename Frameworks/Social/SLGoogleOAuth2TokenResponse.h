/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:08 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSDate, NSError;

@interface SLGoogleOAuth2TokenResponse : NSObject {

	long long _statusCode;
	NSDictionary* _data;
	NSString* _token;
	NSString* _refreshToken;
	NSDate* _expiryDate;
	NSError* _error;
	NSString* _errorMessage;

}

@property (readonly) long long statusCode;                 //@synthesize statusCode=_statusCode - In the implementation block
@property (readonly) NSDictionary * data;                  //@synthesize data=_data - In the implementation block
@property (readonly) NSString * token;                     //@synthesize token=_token - In the implementation block
@property (readonly) NSString * refreshToken;              //@synthesize refreshToken=_refreshToken - In the implementation block
@property (readonly) NSDate * expiryDate;                  //@synthesize expiryDate=_expiryDate - In the implementation block
@property (readonly) NSError * error;                      //@synthesize error=_error - In the implementation block
@property (readonly) NSString * errorMessage;              //@synthesize errorMessage=_errorMessage - In the implementation block
-(NSDate *)expiryDate;
-(NSDictionary *)data;
-(long long)statusCode;
-(NSString *)token;
-(id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 ;
-(NSString *)refreshToken;
-(NSError *)error;
-(NSString *)errorMessage;
@end
