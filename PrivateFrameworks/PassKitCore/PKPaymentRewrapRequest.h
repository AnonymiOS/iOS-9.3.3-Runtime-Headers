/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentPass, NSString, NSData;

@interface PKPaymentRewrapRequest : PKPaymentWebServiceRequest {

	PKPaymentPass* _pass;
	NSString* _merchantIdentifier;
	NSData* _paymentData;
	NSData* _applicationData;

}

@property (nonatomic,retain) PKPaymentPass * pass;                     //@synthesize pass=_pass - In the implementation block
@property (nonatomic,copy) NSString * merchantIdentifier;              //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,copy) NSData * paymentData;                       //@synthesize paymentData=_paymentData - In the implementation block
@property (nonatomic,copy) NSData * applicationData;                   //@synthesize applicationData=_applicationData - In the implementation block
-(void)dealloc;
-(void)setPaymentData:(NSData *)arg1 ;
-(NSData *)paymentData;
-(id)initWithPaymentData:(id)arg1 paymentPass:(id)arg2 merchantIdentifier:(id)arg3 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceData:(id)arg2 account:(id)arg3 ;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(void)setApplicationData:(NSData *)arg1 ;
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(NSString *)merchantIdentifier;
-(NSData *)applicationData;
@end

