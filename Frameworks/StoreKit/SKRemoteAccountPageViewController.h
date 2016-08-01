/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:10 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SKUIClientAccountPageViewController.h>

@class SKAccountPageViewController, NSString;

@interface SKRemoteAccountPageViewController : _UIRemoteViewController <SKUIClientAccountPageViewController> {

	SKAccountPageViewController* _accountPageViewController;

}

@property (assign,nonatomic,__weak) SKAccountPageViewController * accountPageViewController;              //@synthesize accountPageViewController=_accountPageViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)didPrepareWithResult:(id)arg1 error:(id)arg2 ;
-(SKAccountPageViewController *)accountPageViewController;
-(void)setAccountPageViewController:(SKAccountPageViewController *)arg1 ;
-(void)dismissViewController;
@end

