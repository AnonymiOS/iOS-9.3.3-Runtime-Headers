/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:10 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AKAppleIDAuthenticationLimitedUIProvider <NSObject>
@required
-(void)presentBasicLoginUIWithCompletion:(/*^block*/id)arg1;
-(void)dismissBasicLoginUIWithCompletion:(/*^block*/id)arg1;
-(void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4;
-(void)presentSecondFactorUIWithCompletion:(/*^block*/id)arg1;
-(void)dismissSecondFactorUIWithCompletion:(/*^block*/id)arg1;
-(void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4;

@end

