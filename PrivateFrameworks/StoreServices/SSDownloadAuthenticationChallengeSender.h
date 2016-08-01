/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:34 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLAuthenticationChallengeSender.h>

@protocol OS_dispatch_queue;
@class NSObject, SSDownloadAuthenticationSession, NSString;

@interface SSDownloadAuthenticationChallengeSender : NSObject <NSURLAuthenticationChallengeSender> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SSDownloadAuthenticationSession* _session;

}

@property (readonly) SSDownloadAuthenticationSession * authenticationSession; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAuthenticationSession:(id)arg1 ;
-(SSDownloadAuthenticationSession *)authenticationSession;
-(void)dealloc;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg1 ;
@end

