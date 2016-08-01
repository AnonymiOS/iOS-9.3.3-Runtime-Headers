/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:48 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKContactlessInterfaceSessionDelegate.h>

@protocol NPKQuickPaymentSessionDelegate, OS_dispatch_queue;
@class PKPass, NSObject, PKPaymentSessionHandle, PKContactlessInterfaceSession, NSMutableArray, NSString;

@interface NPKQuickPaymentSession : NSObject <PKContactlessInterfaceSessionDelegate> {

	BOOL _confirmed;
	BOOL _deactivating;
	BOOL _deactivated;
	PKPass* _currentPass;
	id<NPKQuickPaymentSessionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _paymentSessionQueue;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	PKPaymentSessionHandle* _contactlessSessionHandle;
	PKContactlessInterfaceSession* _contactlessSession;
	unsigned long long _contactlessValidity;
	unsigned long long _vasValidity;
	NSMutableArray* _deactivationCompletionBlocks;

}

@property (assign,nonatomic,__weak) id<NPKQuickPaymentSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PKPass * currentPass;                                            //@synthesize currentPass=_currentPass - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> paymentSessionQueue;                //@synthesize paymentSessionQueue=_paymentSessionQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;                      //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                      //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) PKPaymentSessionHandle * contactlessSessionHandle;               //@synthesize contactlessSessionHandle=_contactlessSessionHandle - In the implementation block
@property (nonatomic,retain) PKContactlessInterfaceSession * contactlessSession;              //@synthesize contactlessSession=_contactlessSession - In the implementation block
@property (assign,nonatomic) unsigned long long contactlessValidity;                          //@synthesize contactlessValidity=_contactlessValidity - In the implementation block
@property (assign,nonatomic) unsigned long long vasValidity;                                  //@synthesize vasValidity=_vasValidity - In the implementation block
@property (assign,getter=isConfirmed,nonatomic) BOOL confirmed;                               //@synthesize confirmed=_confirmed - In the implementation block
@property (assign,getter=isDeactivating,nonatomic) BOOL deactivating;                         //@synthesize deactivating=_deactivating - In the implementation block
@property (assign,getter=isDeactivated,nonatomic) BOOL deactivated;                           //@synthesize deactivated=_deactivated - In the implementation block
@property (nonatomic,retain) NSMutableArray * deactivationCompletionBlocks;                   //@synthesize deactivationCompletionBlocks=_deactivationCompletionBlocks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_outstandingSessionHashTable;
+(void)_handleNewContactlessSession:(id)arg1 ;
+(BOOL)hasOutstandingSessions;
-(void)setDelegate:(id<NPKQuickPaymentSessionDelegate>)arg1 ;
-(void)dealloc;
-(id<NPKQuickPaymentSessionDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)startSession;
-(void)contactlessInterfaceSessionDidFailTransaction:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3 ;
-(void)contactlessInterfaceSessionDidTimeout:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3 valueAddedServicePasses:(id)arg4 ;
-(void)contactlessInterfaceSessionDidFail:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3 valueAddedServicePasses:(id)arg4 ;
-(void)contactlessInterfaceSession:(id)arg1 didGeneratePaymentTransaction:(id)arg2 forPaymentApplication:(id)arg3 paymentPass:(id)arg4 andValueAddedServiceTransactions:(id)arg5 forValueAddedServicePasses:(id)arg6 ;
-(void)contactlessInterfaceSessionDidExitField:(id)arg1 ;
-(void)contactlessInterfaceSessionDidSelectPayment:(id)arg1 ;
-(void)contactlessInterfaceSessionDidSelectValueAddedService:(id)arg1 ;
-(void)contactlessInterfaceSessionDidEnterField:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setCurrentPass:(PKPass *)arg1 ;
-(PKPass *)currentPass;
-(void)confirmSession;
-(void)renewSession;
-(void)deactivateSessionWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isDeactivated;
-(void)_loyaltyEngineConfigurationChanged:(id)arg1 ;
-(void)getAllVASPasses:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_internalQueue_updateContactlessSessionForPass:(id)arg1 whitelistedVASPasses:(id)arg2 greylistedVASPasses:(id)arg3 ;
-(BOOL)_sessionQueue_startContactlessSessionWithSuccessfulCompletionOnInternalQueue:(/*^block*/id)arg1 ;
-(BOOL)isConfirmed;
-(void)setConfirmed:(BOOL)arg1 ;
-(PKContactlessInterfaceSession *)contactlessSession;
-(void)_sessionQueue_invokeAppropriateCallbackForActivationWithSuccess:(BOOL)arg1 invokeOnSuccess:(BOOL)arg2 contactlessValidity:(unsigned long long)arg3 forPass:(id)arg4 ;
-(void)_checkContactlessValidity:(unsigned long long)arg1 performWork:(/*^block*/id)arg2 ;
-(void)_internalQueue_getContactlessValidityAndPerformWork:(/*^block*/id)arg1 ;
-(void)_internalQueue_updateContactlessValidityAndPerformWork:(/*^block*/id)arg1 ;
-(BOOL)isDeactivating;
-(void)_internalQueue_deactivateSessionWithCompletion:(/*^block*/id)arg1 ;
-(PKPaymentSessionHandle *)contactlessSessionHandle;
-(NSMutableArray *)deactivationCompletionBlocks;
-(void)setDeactivationCompletionBlocks:(NSMutableArray *)arg1 ;
-(void)setDeactivating:(BOOL)arg1 ;
-(void)setDeactivated:(BOOL)arg1 ;
-(void)_internalQueue_invokeDeactivationCompletionBlocks;
-(void)setContactlessSessionHandle:(PKPaymentSessionHandle *)arg1 ;
-(void)setContactlessSession:(PKContactlessInterfaceSession *)arg1 ;
-(BOOL)_sessionQueue_updateContactlessSessionForPass:(id)arg1 paymentApplication:(id)arg2 whitelistedVASPasses:(id)arg3 greylistedVASPasses:(id)arg4 sessionConfirmed:(BOOL)arg5 ;
-(NSObject*<OS_dispatch_queue>)paymentSessionQueue;
-(void)setPaymentSessionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)contactlessValidity;
-(void)setContactlessValidity:(unsigned long long)arg1 ;
-(unsigned long long)vasValidity;
-(void)setVasValidity:(unsigned long long)arg1 ;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

