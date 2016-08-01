/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:21 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AAUIRemoteUIRepairFlowDelegate.h>

@protocol AAUIAccountValidationControllerDelegate;
@class ACAccount, AAUIAccountRepairRemoteUI, ACUIViewController, AAUIRemoteUIRepairFlow, NSString;

@interface AAUIAccountValidationController : NSObject <AAUIRemoteUIRepairFlowDelegate> {

	ACAccount* _account;
	AAUIAccountRepairRemoteUI* _accountRepairRemoteUI;
	ACUIViewController* _presentingViewController;
	AAUIRemoteUIRepairFlow* _flow;
	BOOL _isPresentedModally;
	BOOL _inHSAVerification;
	id<AAUIAccountValidationControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AAUIAccountValidationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<AAUIAccountValidationControllerDelegate>)arg1 ;
-(id<AAUIAccountValidationControllerDelegate>)delegate;
-(void)attemptHSALoginWithCompletion:(/*^block*/id)arg1 ;
-(void)repairFlowWillShowViewController:(id)arg1 ;
-(void)repairFlowWillHideViewController:(id)arg1 ;
-(id)initWithAccount:(id)arg1 presentingViewController:(id)arg2 modal:(BOOL)arg3 ;
-(void)startHSAVerificationFlow;
@end

