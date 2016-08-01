/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:51 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <UIKit/_UIShareInvitationViewControllerHost.h>

@class _UISharingViewController, NSString;

@interface _UIShareInvitationRemoteViewController : _UIRemoteViewController <_UIShareInvitationViewControllerHost> {

	_UISharingViewController* _publicController;

}

@property (assign,nonatomic) _UISharingViewController * publicController;              //@synthesize publicController=_publicController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)setPublicController:(_UISharingViewController *)arg1 ;
-(void)_dismissViewController;
-(void)viewDidLoad;
-(void)_tintColorDidChangeToColor:(id)arg1 ;
-(_UISharingViewController *)publicController;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)_performAuxiliaryActionWithCompletion:(/*^block*/id)arg1 ;
-(void)_performHeaderActionWithCompletion:(/*^block*/id)arg1 ;
-(void)_shareDidChange;
-(void)_shareWasMadePrivate;
@end

