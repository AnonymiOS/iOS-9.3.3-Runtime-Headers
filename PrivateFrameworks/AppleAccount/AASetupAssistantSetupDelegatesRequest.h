/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:22 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class NSDictionary, AASigningSession, ACAccount;

@interface AASetupAssistantSetupDelegatesRequest : AARequest {

	NSDictionary* setupParameters;
	AASigningSession* signingSession;
	ACAccount* _account;

}
+(Class)responseClass;
-(id)initWithAccount:(id)arg1 withSetupParameters:(id)arg2 signingSession:(id)arg3 ;
-(id)urlRequest;
-(id)urlString;
@end

