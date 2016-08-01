/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:37 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDPRemoteDeviceSecretValidatorProtocol.h>

@protocol CDPDRemoteDeviceSecretValidatorDelegate;
@class CDPContext, NSMutableDictionary, NSString;

@interface CDPDRemoteDeviceSecretValidator : NSObject <CDPRemoteDeviceSecretValidatorProtocol> {

	CDPContext* _context;
	id<CDPDRemoteDeviceSecretValidatorDelegate> _delegate;
	/*^block*/id _requestToJoinCompletion;
	BOOL _isWaitingForRemoteApproval;
	BOOL _isAttemptingRecovery;
	unsigned long long _failedAttempts;
	NSMutableDictionary* _failedSecrets;
	BOOL _isUsingMultipleICSC;
	NSString* _localSecret;
	unsigned long long _localSecretType;
	/*^block*/id _validSecretHandler;

}

@property (assign,nonatomic) BOOL isUsingMultipleICSC;                        //@synthesize isUsingMultipleICSC=_isUsingMultipleICSC - In the implementation block
@property (nonatomic,copy) NSString * localSecret;                            //@synthesize localSecret=_localSecret - In the implementation block
@property (assign,nonatomic) unsigned long long localSecretType;              //@synthesize localSecretType=_localSecretType - In the implementation block
@property (nonatomic,copy) id validSecretHandler;                             //@synthesize validSecretHandler=_validSecretHandler - In the implementation block
-(id)init;
-(void)approveFromAnotherDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelApproveFromAnotherDevice;
-(BOOL)_isInvalidICSCError:(id)arg1 ;
-(unsigned long long)localSecretType;
-(void)validateSecret:(id)arg1 devices:(id)arg2 type:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)cancelValidationWithError:(id)arg1 ;
-(void)resetAccountCDPState;
-(id)initWithContext:(id)arg1 delegate:(id)arg2 ;
-(BOOL)isUsingMultipleICSC;
-(void)setIsUsingMultipleICSC:(BOOL)arg1 ;
-(NSString *)localSecret;
-(void)setLocalSecret:(NSString *)arg1 ;
-(void)setLocalSecretType:(unsigned long long)arg1 ;
-(id)validSecretHandler;
-(void)setValidSecretHandler:(id)arg1 ;
@end
