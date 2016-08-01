/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:25 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PKPaymentSetupViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupViewControllerDelegate.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class UIButton, NSString;

@interface PKPaymentSetupAssistantRegistrationViewController : PKPaymentSetupViewController <PKPaymentSetupViewControllerDelegate> {

	UIButton* _skipButton;
	id<PKPaymentSetupViewControllerDelegate> _externalDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)setupAssistantNeedsToRunReturningRequirements:(unsigned long long*)arg1 ;
+(id)defaultWebServiceForContext:(long long)arg1 ;
+(BOOL)setupAssistantNeedsToRun;
+(BOOL)bridgeSetupAssistantNeedsToRunReturningRequirements:(unsigned long long*)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)_deviceSpecificLocalizedStringKeyForKey:(id)arg1 ;
-(void)_setExternalDelegate:(id)arg1 ;
-(id)_bridgeContextDefaultLocalCredential;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
-(void)viewController:(id)arg1 didShowProvisioningError:(id)arg2 ;
-(void)viewControllerDidShowEligibilityIssue:(id)arg1 ;
-(id)initWithPaymentWebService:(id)arg1 context:(long long)arg2 delegate:(id)arg3 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)privacyButtonTouched:(id)arg1 ;
@end

