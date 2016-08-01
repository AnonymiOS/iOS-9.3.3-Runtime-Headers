/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol PKPaymentDataProvider <NSObject>
@property (nonatomic,readonly) BOOL isDeviceInRestrictedMode; 
@property (nonatomic,readonly) NSString * secureElementIdentifier; 
@property (nonatomic,readonly) BOOL secureElementIsProductionSigned; 
@property (nonatomic,retain) NSString * defaultPaymentPassIdentifier; 
@property (assign,nonatomic) id<PKPaymentDataProviderDelegate> delegate; 
@optional
-(void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 includingSources:(unsigned long long)arg2 limit:(long long)arg3 completion:(/*^block*/id)arg4;
-(id)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1;

@required
-(void)setDelegate:(id)arg1;
-(id<PKPaymentDataProviderDelegate>)delegate;
-(id)defaultPaymentApplicationForPassUniqueIdentifier:(id)arg1;
-(void)setDefaultPaymentApplication:(id)arg1 forPassUniqueIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)secureElementIsProductionSigned;
-(NSString *)defaultPaymentPassIdentifier;
-(void)setDefaultPaymentPassIdentifier:(id)arg1;
-(BOOL)isDeviceInRestrictedMode;
-(NSString *)secureElementIdentifier;

@end

