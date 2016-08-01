/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:27 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationHostProtocol.h>

@class NSString, PKPaymentAuthorizationServiceNavigationController, PKPaymentAuthorizationRemoteAlertViewControllerExportedObject, PKInAppPaymentService, NSXPCConnection, PKPaymentRequest;

@interface PKPaymentAuthorizationRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKPaymentAuthorizationHostProtocol> {

	BOOL _didForceDismiss;
	long long _hostAppInterfaceOrientation;
	NSString* _hostApplicationIdentifier;
	PKPaymentAuthorizationServiceNavigationController* _navigationController;
	PKPaymentAuthorizationRemoteAlertViewControllerExportedObject* _exportedObject;
	PKInAppPaymentService* _inAppPaymentService;
	NSXPCConnection* _hostConnection;
	PKPaymentRequest* _paymentRequest;

}

@property (nonatomic,retain) PKPaymentAuthorizationServiceNavigationController * navigationController;                    //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) PKPaymentAuthorizationRemoteAlertViewControllerExportedObject * exportedObject;              //@synthesize exportedObject=_exportedObject - In the implementation block
@property (nonatomic,retain) PKInAppPaymentService * inAppPaymentService;                                                 //@synthesize inAppPaymentService=_inAppPaymentService - In the implementation block
@property (nonatomic,retain) NSXPCConnection * hostConnection;                                                            //@synthesize hostConnection=_hostConnection - In the implementation block
@property (nonatomic,retain) PKPaymentRequest * paymentRequest;                                                           //@synthesize paymentRequest=_paymentRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(PKPaymentAuthorizationRemoteAlertViewControllerExportedObject *)exportedObject;
-(void)dealloc;
-(id)init;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setUserInfo:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(PKPaymentAuthorizationServiceNavigationController *)navigationController;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_willAppearInRemoteViewController;
-(void)setExportedObject:(PKPaymentAuthorizationRemoteAlertViewControllerExportedObject *)arg1 ;
-(void)_dismiss;
-(BOOL)_shouldRemoveViewFromHierarchyOnDisappear;
-(void)setNavigationController:(PKPaymentAuthorizationServiceNavigationController *)arg1 ;
-(void)authorizationWillStart;
-(void)authorizationDidFinishWithError:(id)arg1 ;
-(void)authorizationDidAuthorizePayment:(id)arg1 ;
-(void)authorizationDidSelectShippingMethod:(id)arg1 ;
-(void)authorizationDidSelectShippingAddress:(id)arg1 ;
-(void)authorizationDidSelectPaymentMethod:(id)arg1 ;
-(PKInAppPaymentService *)inAppPaymentService;
-(id)_remoteObjectProxy;
-(void)setInAppPaymentService:(PKInAppPaymentService *)arg1 ;
-(PKPaymentRequest *)paymentRequest;
-(void)setPaymentRequest:(PKPaymentRequest *)arg1 ;
-(void)handleHomeButtonPressed;
-(void)_forceDismiss;
-(void)handleLockButtonPressed;
-(NSXPCConnection *)hostConnection;
-(void)setHostConnection:(NSXPCConnection *)arg1 ;
@end

