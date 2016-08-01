/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:14 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/LocalAuthentication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LAPrearmContextXPC;
#import <LocalAuthentication/LocalAuthentication-Structs.h>
@class LAClient, NSNumber, NSData, NSString;

@interface LAContext : NSObject {

	LAClient* _client;
	id<LAPrearmContextXPC> _prearmContext;
	NSNumber* _maxBiometryFailures;
	NSData* _evaluatedPolicyDomainState;
	NSData* _externalizedContext;

}

@property (nonatomic,copy) NSString * localizedFallbackTitle; 
@property (nonatomic,retain) NSNumber * maxBiometryFailures;                                         //@synthesize maxBiometryFailures=_maxBiometryFailures - In the implementation block
@property (nonatomic,retain) NSData * evaluatedPolicyDomainState;                                    //@synthesize evaluatedPolicyDomainState=_evaluatedPolicyDomainState - In the implementation block
@property (assign,nonatomic) double touchIDAuthenticationAllowableReuseDuration; 
@property (nonatomic,retain) NSData * externalizedContext;                                           //@synthesize externalizedContext=_externalizedContext - In the implementation block
@property (assign,getter=isCancelButtonVisible,nonatomic) BOOL cancelButtonVisible; 
@property (assign,getter=isFallbackButtonVisible,nonatomic) BOOL fallbackButtonVisible; 
@property (nonatomic,retain) NSNumber * touchIDAuthenticationRetryLimit; 
-(id)init;
-(void)invalidate;
-(void)enterPassword:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithExternalizedContext:(id)arg1 uiDelegate:(id)arg2 ;
-(void)setEvaluatedPolicyDomainState:(NSData *)arg1 ;
-(id)_publicErrorFromInternalError:(id)arg1 ;
-(id)evaluatePolicy:(long long)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)evaluateAccessControl:(SecAccessControlRef)arg1 operation:(long long)arg2 options:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)_serverPropertyValueForOption:(long long)arg1 ;
-(void)_setServerPropertyForOption:(long long)arg1 value:(id)arg2 ;
-(void)evaluateAccessControl:(SecAccessControlRef)arg1 operation:(long long)arg2 localizedReason:(id)arg3 reply:(/*^block*/id)arg4 ;
-(BOOL)setCredential:(id)arg1 type:(long long)arg2 ;
-(BOOL)isCredentialSet:(long long)arg1 ;
-(void)prearmTouchIDWithReply:(/*^block*/id)arg1 ;
-(BOOL)isCancelButtonVisible;
-(BOOL)isFallbackButtonVisible;
-(void)setFallbackButtonVisible:(BOOL)arg1 ;
-(NSNumber *)touchIDAuthenticationRetryLimit;
-(void)setTouchIDAuthenticationRetryLimit:(NSNumber *)arg1 ;
-(double)touchIDAuthenticationAllowableReuseDuration;
-(void)setTouchIDAuthenticationAllowableReuseDuration:(double)arg1 ;
-(NSNumber *)maxBiometryFailures;
-(void)setMaxBiometryFailures:(NSNumber *)arg1 ;
-(NSData *)evaluatedPolicyDomainState;
-(void)setExternalizedContext:(NSData *)arg1 ;
-(void)setCancelButtonVisible:(BOOL)arg1 ;
-(void)evaluatePolicy:(long long)arg1 localizedReason:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)canEvaluatePolicy:(long long)arg1 error:(id*)arg2 ;
-(void)setLocalizedFallbackTitle:(NSString *)arg1 ;
-(NSString *)localizedFallbackTitle;
-(id)initWithUIDelegate:(id)arg1 ;
-(id)evaluationMechanismsForPolicy:(long long)arg1 error:(id*)arg2 ;
-(NSData *)externalizedContext;
-(void)evaluatePolicy:(long long)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)initWithExternalizedContext:(id)arg1 ;
@end

