/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:26 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPaymentAuthorizationHostProtocol <NSObject>
@optional
-(void)authorizationDidPresent;

@required
-(void)authorizationWillStart;
-(void)authorizationDidFinishWithError:(id)arg1;
-(void)authorizationDidAuthorizePayment:(id)arg1;
-(void)authorizationDidSelectShippingMethod:(id)arg1;
-(void)authorizationDidSelectShippingAddress:(id)arg1;
-(void)authorizationDidSelectPaymentMethod:(id)arg1;

@end
