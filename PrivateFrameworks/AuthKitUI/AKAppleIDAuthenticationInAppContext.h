/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:04 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKit/AKAppleIDAuthenticationContext.h>
#import <libobjc.A.dylib/AKBasicLoginAlertControllerDelegate.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationUIProvider.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>

@protocol AKAppleIDAuthenticationInAppContextDelegate;
@class AKBasicLoginAlertController, UINavigationController, RemoteUIController, AKAppleIDServerResourceLoadDelegate, AKAppleIDServerUIDataHarvester, RUIObjectModel, UIViewController, NSString;

@interface AKAppleIDAuthenticationInAppContext : AKAppleIDAuthenticationContext <AKBasicLoginAlertControllerDelegate, AKAppleIDAuthenticationUIProvider, RemoteUIControllerDelegate> {

	AKBasicLoginAlertController* _basicLoginViewController;
	UINavigationController* _navController;
	RemoteUIController* _remoteUIController;
	/*^block*/id _serverUICompletion;
	AKAppleIDServerResourceLoadDelegate* _serverUIDelegate;
	AKAppleIDServerUIDataHarvester* _serverUIHelper;
	RUIObjectModel* _currentRemoteOM;
	BOOL _isPresentingServerUI;
	UIViewController* _presentingViewController;
	id<AKAppleIDAuthenticationInAppContextDelegate> _delegate;

}

@property (assign,nonatomic,__weak) UIViewController * presentingViewController;                           //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic,__weak) id<AKAppleIDAuthenticationInAppContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<AKAppleIDAuthenticationInAppContextDelegate>)arg1 ;
-(void)dealloc;
-(id<AKAppleIDAuthenticationInAppContextDelegate>)delegate;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)presentKeepUsingUIForAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissKeepUsingUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentBasicLoginUIWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissBasicLoginUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentSecondFactorUIWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissSecondFactorUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentServerProvidedUIWithURLRequest:(id)arg1 delegate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissServerProvidedUIWithCompletion:(/*^block*/id)arg1 ;
-(void)_assertValidPresentingViewController;
-(void)willPresentModalNavigationController:(id)arg1 ;
-(void)basicLoginAlertControllerWillDismiss:(id)arg1 ;
-(void)basicLoginAlertControllerDidDismiss:(id)arg1 ;
-(void)basicLoginAlertControllerDidPresent:(id)arg1 ;
-(id)serverDataHarvester;
-(void)_cleanUpBasicLogin;
-(void)_cleanUpBasicLoginWithCompletion:(/*^block*/id)arg1 ;
-(id)_remoteUIController;
-(id)_navController;
-(id)remoteUIStyle;
-(BOOL)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2 ;
-(void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2 ;
-(void)remoteUIController:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(BOOL)arg3 ;
-(void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2 ;
-(void)remoteUIController:(id)arg1 didDismissModalNavigationWithObjectModels:(id)arg2 ;
-(void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(int*)arg3 ;
@end

