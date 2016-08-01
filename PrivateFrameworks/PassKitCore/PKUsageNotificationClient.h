/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKUsageNotificationClientExportedInterface.h>

@class PKXPCService;

@interface PKUsageNotificationClient : NSObject <PKUsageNotificationClientExportedInterface> {

	PKXPCService* _connection;
	/*^block*/id _handler;
	/*^block*/id _paymentHandler;

}
-(void)dealloc;
-(id)init;
-(void)usedPassFromSource:(long long)arg1 withTypeIdentifier:(id)arg2 info:(id)arg3 ;
-(void)usedPaymentPassWithUniqueIdentifier:(id)arg1 transactionIdentifier:(id)arg2 info:(id)arg3 ;
-(void)setPassUsageHandler:(/*^block*/id)arg1 ;
-(void)setPaymentUsageHandler:(/*^block*/id)arg1 ;
@end

